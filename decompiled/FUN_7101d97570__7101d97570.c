// addr:      7101d97570
// offset:    0x1d97570
// name:      FUN_7101d97570
// mangled:   
// signature: undefined __cdecl FUN_7101d97570(long param_1, undefined8 * param_2)


void FUN_7101d97570(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  char *pcVar6;
  char *pcVar7;
  byte ****ppppbVar8;
  byte ****ppppbVar9;
  char *pcVar10;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined2 *puVar11;
  ulong uVar12;
  code *pcVar13;
  uint uVar14;
  undefined8 uVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  char cVar22;
  ushort uVar23;
  ulong uVar24;
  long *plVar25;
  uint uVar26;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined2 local_16c;
  undefined1 local_16a;
  undefined1 *local_168;
  undefined4 local_160;
  long alStack_150 [4];
  undefined8 local_130;
  long alStack_120 [4];
  long *local_100;
  long lStack_f0;
  char local_e4 [20];
  long *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  long alStack_90 [4];
  long *local_70;
  undefined4 local_60;
  
  ppppbVar8 = (byte ****)&local_180;
  ppppbVar9 = (byte ****)&local_180;
  uVar15 = *param_2;
  plVar25 = (long *)(param_1 + 0x40);
  uVar26 = 0x811c9dc5;
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 1);
  plVar1 = (long *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x30) = uVar15;
  *(long *)(param_1 + 0x48) = *plVar25;
  if ((int)uVar15 == 0) {
    pcVar6 = "set_parts_btn_00";
    pcVar7 = "nam_goods_spirit_all_shuffle";
    pcVar10 = "nam_goods_help_spirit_all_shuffle";
    FUN_7101d99160((undefined1 *)&local_180,1,0x7104401dad,0x710424f919,0x710436c828);
    puVar11 = *(undefined2 **)(param_1 + 0x48);
    if (puVar11 < *(undefined2 **)(param_1 + 0x50)) {
      *puVar11 = (undefined2)local_180;
      *(undefined1 *)(puVar11 + 1) = local_180._2_1_;
      *(undefined4 *)(puVar11 + 2) = 0;
      for (uVar16 = 0; cVar22 = *(char *)((long)&local_178 + uVar16 + 4), cVar22 != '\0';
          uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0xc) = cVar22;
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        cVar22 = *(char *)((long)&local_178 + uVar16 + 5);
        if (cVar22 == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0xd) = cVar22;
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0xc) = 0;
      *(int *)(puVar11 + 4) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 6);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 6) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0xd);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 2) = uVar18;
      *(undefined4 *)(puVar11 + 0x26) = 0;
      for (uVar16 = 0; cVar22 = *(char *)((long)&local_130 + uVar16 + 4), cVar22 != '\0';
          uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0x54) = cVar22;
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        cVar22 = *(char *)((long)&local_130 + uVar16 + 5);
        if (cVar22 == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0x55) = cVar22;
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0x54) = 0;
      *(int *)(puVar11 + 0x28) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 0x2a);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 0x2a) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0x55);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 0x26) = uVar18;
      *(undefined4 *)(puVar11 + 0x4a) = 0;
      for (uVar16 = 0; local_e4[uVar16] != '\0'; uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0x9c) = local_e4[uVar16];
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        if (local_e4[uVar16 + 1] == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0x9d) = local_e4[uVar16 + 1];
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0x9c) = 0;
      *(int *)(puVar11 + 0x4c) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 0x4e);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 0x4e) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0x9d);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 0x4a) = uVar18;
      *plVar1 = *plVar1 + 0xdc;
    }
    else {
      FUN_7101d99320(plVar25,(undefined2 *)&local_180,(long ****)pcVar6,(byte ****)pcVar7,
                     (long ****)pcVar10,in_x5,in_x6,in_x7);
    }
    pcVar6 = "set_parts_btn_01";
    pcVar7 = "nam_goods_spirit_all_attacker";
    pcVar10 = "nam_goods_help_spirit_all_attacker";
    FUN_7101d99160((undefined1 *)&local_180,2,0x7104308c5c,0x7104280e85,0x71042e7610);
    puVar11 = *(undefined2 **)(param_1 + 0x48);
    if (puVar11 < *(undefined2 **)(param_1 + 0x50)) {
      *puVar11 = (undefined2)local_180;
      *(undefined1 *)(puVar11 + 1) = local_180._2_1_;
      *(undefined4 *)(puVar11 + 2) = 0;
      for (uVar16 = 0; cVar22 = *(char *)((long)&local_178 + uVar16 + 4), cVar22 != '\0';
          uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0xc) = cVar22;
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        cVar22 = *(char *)((long)&local_178 + uVar16 + 5);
        if (cVar22 == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0xd) = cVar22;
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0xc) = 0;
      *(int *)(puVar11 + 4) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 6);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 6) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0xd);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 2) = uVar18;
      *(undefined4 *)(puVar11 + 0x26) = 0;
      for (uVar16 = 0; cVar22 = *(char *)((long)&local_130 + uVar16 + 4), cVar22 != '\0';
          uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0x54) = cVar22;
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        cVar22 = *(char *)((long)&local_130 + uVar16 + 5);
        if (cVar22 == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0x55) = cVar22;
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0x54) = 0;
      *(int *)(puVar11 + 0x28) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 0x2a);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 0x2a) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0x55);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 0x26) = uVar18;
      *(undefined4 *)(puVar11 + 0x4a) = 0;
      for (uVar16 = 0; local_e4[uVar16] != '\0'; uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0x9c) = local_e4[uVar16];
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        if (local_e4[uVar16 + 1] == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0x9d) = local_e4[uVar16 + 1];
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0x9c) = 0;
      *(int *)(puVar11 + 0x4c) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 0x4e);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 0x4e) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0x9d);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 0x4a) = uVar18;
      *plVar1 = *plVar1 + 0xdc;
    }
    else {
      FUN_7101d99320(plVar25,(undefined2 *)&local_180,(long ****)pcVar6,(byte ****)pcVar7,
                     (long ****)pcVar10,in_x5,in_x6,in_x7);
    }
    pcVar6 = "set_parts_btn_02";
    pcVar7 = "nam_goods_spirit_all_supporter";
    pcVar10 = "nam_goods_help_spirit_all_supporter";
    FUN_7101d99160((undefined1 *)&local_180,3,0x710424fd25,0x71043cf859,0x710424f936);
    puVar11 = *(undefined2 **)(param_1 + 0x48);
    if (puVar11 < *(undefined2 **)(param_1 + 0x50)) {
      *puVar11 = (undefined2)local_180;
      *(undefined1 *)(puVar11 + 1) = local_180._2_1_;
      *(undefined4 *)(puVar11 + 2) = 0;
      for (uVar16 = 0; cVar22 = *(char *)((long)&local_178 + uVar16 + 4), cVar22 != '\0';
          uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0xc) = cVar22;
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        cVar22 = *(char *)((long)&local_178 + uVar16 + 5);
        if (cVar22 == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0xd) = cVar22;
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0xc) = 0;
      *(int *)(puVar11 + 4) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 6);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 6) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0xd);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 2) = uVar18;
      *(undefined4 *)(puVar11 + 0x26) = 0;
      for (uVar16 = 0; cVar22 = *(char *)((long)&local_130 + uVar16 + 4), cVar22 != '\0';
          uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0x54) = cVar22;
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        cVar22 = *(char *)((long)&local_130 + uVar16 + 5);
        if (cVar22 == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0x55) = cVar22;
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0x54) = 0;
      *(int *)(puVar11 + 0x28) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 0x2a);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 0x2a) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0x55);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 0x26) = uVar18;
      *(undefined4 *)(puVar11 + 0x4a) = 0;
      for (uVar16 = 0; local_e4[uVar16] != '\0'; uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0x9c) = local_e4[uVar16];
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        if (local_e4[uVar16 + 1] == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0x9d) = local_e4[uVar16 + 1];
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0x9c) = 0;
      *(int *)(puVar11 + 0x4c) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 0x4e);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 0x4e) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0x9d);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 0x4a) = uVar18;
      *plVar1 = *plVar1 + 0xdc;
    }
    else {
      FUN_7101d99320(plVar25,(undefined2 *)&local_180,(long ****)pcVar6,(byte ****)pcVar7,
                     (long ****)pcVar10,in_x5,in_x6,in_x7);
    }
    pcVar6 = "set_parts_btn_03";
    pcVar7 = "nam_goods_spirit_reloaded";
    pcVar10 = "nam_goods_help_spirit_reloaded";
    FUN_7101d99160((undefined1 *)&local_180,4,0x710432a6e1,0x710425f875,0x71043adbe1);
    puVar11 = *(undefined2 **)(param_1 + 0x48);
    if (puVar11 < *(undefined2 **)(param_1 + 0x50)) {
      *puVar11 = (undefined2)local_180;
      *(undefined1 *)(puVar11 + 1) = local_180._2_1_;
      *(undefined4 *)(puVar11 + 2) = 0;
      for (uVar16 = 0; cVar22 = *(char *)((long)&local_178 + uVar16 + 4), cVar22 != '\0';
          uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0xc) = cVar22;
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        cVar22 = *(char *)((long)&local_178 + uVar16 + 5);
        if (cVar22 == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0xd) = cVar22;
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0xc) = 0;
      *(int *)(puVar11 + 4) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 6);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 6) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0xd);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 2) = uVar18;
      *(undefined4 *)(puVar11 + 0x26) = 0;
      for (uVar16 = 0; cVar22 = *(char *)((long)&local_130 + uVar16 + 4), cVar22 != '\0';
          uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0x54) = cVar22;
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        cVar22 = *(char *)((long)&local_130 + uVar16 + 5);
        if (cVar22 == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0x55) = cVar22;
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0x54) = 0;
      *(int *)(puVar11 + 0x28) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 0x2a);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 0x2a) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0x55);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 0x26) = uVar18;
      *(undefined4 *)(puVar11 + 0x4a) = 0;
      for (uVar16 = 0; local_e4[uVar16] != '\0'; uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0x9c) = local_e4[uVar16];
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        if (local_e4[uVar16 + 1] == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0x9d) = local_e4[uVar16 + 1];
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0x9c) = 0;
      *(int *)(puVar11 + 0x4c) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 0x4e);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 0x4e) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0x9d);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 0x4a) = uVar18;
      *plVar1 = *plVar1 + 0xdc;
    }
    else {
      FUN_7101d99320(plVar25,(undefined2 *)&local_180,(long ****)pcVar6,(byte ****)pcVar7,
                     (long ****)pcVar10,in_x5,in_x6,in_x7);
    }
    pcVar6 = "set_parts_btn_04";
    pcVar7 = "nam_goods_spirit_retry_ticket";
    pcVar10 = "nam_goods_help_spirit_retry_ticket";
    FUN_7101d99160((undefined1 *)&local_180,5,0x710439dab9,0x7104291ff1,0x7104412d25);
    puVar11 = *(undefined2 **)(param_1 + 0x48);
    if (puVar11 < *(undefined2 **)(param_1 + 0x50)) {
      *puVar11 = (undefined2)local_180;
      *(undefined1 *)(puVar11 + 1) = local_180._2_1_;
      *(undefined4 *)(puVar11 + 2) = 0;
      for (uVar16 = 0; cVar22 = *(char *)((long)&local_178 + uVar16 + 4), cVar22 != '\0';
          uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0xc) = cVar22;
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        cVar22 = *(char *)((long)&local_178 + uVar16 + 5);
        if (cVar22 == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0xd) = cVar22;
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0xc) = 0;
      *(int *)(puVar11 + 4) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 6);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 6) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0xd);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 2) = uVar18;
      *(undefined4 *)(puVar11 + 0x26) = 0;
      for (uVar16 = 0; cVar22 = *(char *)((long)&local_130 + uVar16 + 4), cVar22 != '\0';
          uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0x54) = cVar22;
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        cVar22 = *(char *)((long)&local_130 + uVar16 + 5);
        if (cVar22 == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0x55) = cVar22;
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0x54) = 0;
      *(int *)(puVar11 + 0x28) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 0x2a);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 0x2a) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0x55);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 0x26) = uVar18;
      *(undefined4 *)(puVar11 + 0x4a) = 0;
      for (uVar16 = 0; local_e4[uVar16] != '\0'; uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0x9c) = local_e4[uVar16];
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        if (local_e4[uVar16 + 1] == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0x9d) = local_e4[uVar16 + 1];
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0x9c) = 0;
      uVar18 = (uint)*(byte *)(puVar11 + 0x4e);
      *(int *)(puVar11 + 0x4c) = (int)uVar16;
      if (*(byte *)(puVar11 + 0x4e) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0x9d);
        do {
          uVar26 = uVar26 * 0x89 ^ uVar18;
          uVar18 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar18 != 0);
      }
      goto LAB_7101d98984;
    }
LAB_7101d98828:
    FUN_7101d99320(plVar25,(undefined2 *)&local_180,(long ****)pcVar6,(byte ****)pcVar7,
                   (long ****)pcVar10,in_x5,in_x6,in_x7);
  }
  else {
    pcVar6 = "set_parts_btn_05";
    pcVar7 = "nam_goods_spirit_charge_jamming";
    pcVar10 = "nam_goods_help_spirit_charge_jamming";
    FUN_7101d99160((undefined1 *)&local_180,8,0x710435bd3c,0x7104280ea3,0x7104454ea2);
    puVar11 = *(undefined2 **)(param_1 + 0x48);
    if (puVar11 < *(undefined2 **)(param_1 + 0x50)) {
      *puVar11 = (undefined2)local_180;
      *(undefined1 *)(puVar11 + 1) = local_180._2_1_;
      *(undefined4 *)(puVar11 + 2) = 0;
      for (uVar16 = 0; cVar22 = *(char *)((long)&local_178 + uVar16 + 4), cVar22 != '\0';
          uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0xc) = cVar22;
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        cVar22 = *(char *)((long)&local_178 + uVar16 + 5);
        if (cVar22 == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0xd) = cVar22;
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0xc) = 0;
      *(int *)(puVar11 + 4) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 6);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 6) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0xd);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 2) = uVar18;
      *(undefined4 *)(puVar11 + 0x26) = 0;
      for (uVar16 = 0; cVar22 = *(char *)((long)&local_130 + uVar16 + 4), cVar22 != '\0';
          uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0x54) = cVar22;
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        cVar22 = *(char *)((long)&local_130 + uVar16 + 5);
        if (cVar22 == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0x55) = cVar22;
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0x54) = 0;
      *(int *)(puVar11 + 0x28) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 0x2a);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 0x2a) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0x55);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 0x26) = uVar18;
      *(undefined4 *)(puVar11 + 0x4a) = 0;
      for (uVar16 = 0; local_e4[uVar16] != '\0'; uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0x9c) = local_e4[uVar16];
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        if (local_e4[uVar16 + 1] == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0x9d) = local_e4[uVar16 + 1];
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0x9c) = 0;
      *(int *)(puVar11 + 0x4c) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 0x4e);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 0x4e) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0x9d);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 0x4a) = uVar18;
      *plVar1 = *plVar1 + 0xdc;
    }
    else {
      FUN_7101d99320(plVar25,(undefined2 *)&local_180,(long ****)pcVar6,(byte ****)pcVar7,
                     (long ****)pcVar10,in_x5,in_x6,in_x7);
    }
    pcVar6 = "set_parts_btn_06";
    pcVar7 = "nam_goods_spirit_apply_flower";
    pcVar10 = "nam_goods_help_spirit_apply_flower";
    FUN_7101d99160((undefined1 *)&local_180,10,0x7104281191,0x71042702e1,0x71042702ff);
    puVar11 = *(undefined2 **)(param_1 + 0x48);
    if (puVar11 < *(undefined2 **)(param_1 + 0x50)) {
      *puVar11 = (undefined2)local_180;
      *(undefined1 *)(puVar11 + 1) = local_180._2_1_;
      *(undefined4 *)(puVar11 + 2) = 0;
      for (uVar16 = 0; cVar22 = *(char *)((long)&local_178 + uVar16 + 4), cVar22 != '\0';
          uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0xc) = cVar22;
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        cVar22 = *(char *)((long)&local_178 + uVar16 + 5);
        if (cVar22 == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0xd) = cVar22;
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0xc) = 0;
      *(int *)(puVar11 + 4) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 6);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 6) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0xd);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 2) = uVar18;
      *(undefined4 *)(puVar11 + 0x26) = 0;
      for (uVar16 = 0; cVar22 = *(char *)((long)&local_130 + uVar16 + 4), cVar22 != '\0';
          uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0x54) = cVar22;
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        cVar22 = *(char *)((long)&local_130 + uVar16 + 5);
        if (cVar22 == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0x55) = cVar22;
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0x54) = 0;
      *(int *)(puVar11 + 0x28) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 0x2a);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 0x2a) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0x55);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 0x26) = uVar18;
      *(undefined4 *)(puVar11 + 0x4a) = 0;
      for (uVar16 = 0; local_e4[uVar16] != '\0'; uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0x9c) = local_e4[uVar16];
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        if (local_e4[uVar16 + 1] == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0x9d) = local_e4[uVar16 + 1];
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0x9c) = 0;
      *(int *)(puVar11 + 0x4c) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 0x4e);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 0x4e) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0x9d);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 0x4a) = uVar18;
      *plVar1 = *plVar1 + 0xdc;
    }
    else {
      FUN_7101d99320(plVar25,(undefined2 *)&local_180,(long ****)pcVar6,(byte ****)pcVar7,
                     (long ****)pcVar10,in_x5,in_x6,in_x7);
    }
    pcVar6 = "set_parts_btn_07";
    pcVar7 = "nam_goods_spirit_escort_weaken";
    pcVar10 = "nam_goods_help_spirit_escort_weaken";
    FUN_7101d99160((undefined1 *)&local_180,9,0x71042b4950,0x710438cec9,0x710435bbd9);
    puVar11 = *(undefined2 **)(param_1 + 0x48);
    if (puVar11 < *(undefined2 **)(param_1 + 0x50)) {
      *puVar11 = (undefined2)local_180;
      *(undefined1 *)(puVar11 + 1) = local_180._2_1_;
      *(undefined4 *)(puVar11 + 2) = 0;
      for (uVar16 = 0; cVar22 = *(char *)((long)&local_178 + uVar16 + 4), cVar22 != '\0';
          uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0xc) = cVar22;
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        cVar22 = *(char *)((long)&local_178 + uVar16 + 5);
        if (cVar22 == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0xd) = cVar22;
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0xc) = 0;
      *(int *)(puVar11 + 4) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 6);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 6) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0xd);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 2) = uVar18;
      *(undefined4 *)(puVar11 + 0x26) = 0;
      for (uVar16 = 0; cVar22 = *(char *)((long)&local_130 + uVar16 + 4), cVar22 != '\0';
          uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0x54) = cVar22;
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        cVar22 = *(char *)((long)&local_130 + uVar16 + 5);
        if (cVar22 == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0x55) = cVar22;
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0x54) = 0;
      *(int *)(puVar11 + 0x28) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 0x2a);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 0x2a) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0x55);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 0x26) = uVar18;
      *(undefined4 *)(puVar11 + 0x4a) = 0;
      for (uVar16 = 0; local_e4[uVar16] != '\0'; uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0x9c) = local_e4[uVar16];
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        if (local_e4[uVar16 + 1] == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0x9d) = local_e4[uVar16 + 1];
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0x9c) = 0;
      *(int *)(puVar11 + 0x4c) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 0x4e);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 0x4e) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0x9d);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 0x4a) = uVar18;
      *plVar1 = *plVar1 + 0xdc;
    }
    else {
      FUN_7101d99320(plVar25,(undefined2 *)&local_180,(long ****)pcVar6,(byte ****)pcVar7,
                     (long ****)pcVar10,in_x5,in_x6,in_x7);
    }
    pcVar6 = "set_parts_btn_08";
    pcVar7 = "nam_goods_spirit_item_lock";
    pcVar10 = "nam_goods_help_spirit_item_lock";
    FUN_7101d99160((undefined1 *)&local_180,0xb,0x71043cfa65,0x71043bea19,0x710435bbfd);
    puVar11 = *(undefined2 **)(param_1 + 0x48);
    if (puVar11 < *(undefined2 **)(param_1 + 0x50)) {
      *puVar11 = (undefined2)local_180;
      *(undefined1 *)(puVar11 + 1) = local_180._2_1_;
      *(undefined4 *)(puVar11 + 2) = 0;
      for (uVar16 = 0; cVar22 = *(char *)((long)&local_178 + uVar16 + 4), cVar22 != '\0';
          uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0xc) = cVar22;
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        cVar22 = *(char *)((long)&local_178 + uVar16 + 5);
        if (cVar22 == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0xd) = cVar22;
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0xc) = 0;
      *(int *)(puVar11 + 4) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 6);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 6) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0xd);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 2) = uVar18;
      *(undefined4 *)(puVar11 + 0x26) = 0;
      for (uVar16 = 0; cVar22 = *(char *)((long)&local_130 + uVar16 + 4), cVar22 != '\0';
          uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0x54) = cVar22;
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        cVar22 = *(char *)((long)&local_130 + uVar16 + 5);
        if (cVar22 == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0x55) = cVar22;
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0x54) = 0;
      *(int *)(puVar11 + 0x28) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 0x2a);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 0x2a) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0x55);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 0x26) = uVar18;
      *(undefined4 *)(puVar11 + 0x4a) = 0;
      for (uVar16 = 0; local_e4[uVar16] != '\0'; uVar16 = uVar16 + 2) {
        *(char *)((long)puVar11 + uVar16 + 0x9c) = local_e4[uVar16];
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        if (local_e4[uVar16 + 1] == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        *(char *)((long)puVar11 + uVar16 + 0x9d) = local_e4[uVar16 + 1];
      }
      *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0x9c) = 0;
      *(int *)(puVar11 + 0x4c) = (int)uVar16;
      uVar14 = (uint)*(byte *)(puVar11 + 0x4e);
      uVar18 = uVar26;
      if (*(byte *)(puVar11 + 0x4e) != 0) {
        pbVar17 = (byte *)((long)puVar11 + 0x9d);
        do {
          uVar18 = uVar18 * 0x89 ^ uVar14;
          uVar14 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar14 != 0);
      }
      *(uint *)(puVar11 + 0x4a) = uVar18;
      *plVar1 = *plVar1 + 0xdc;
    }
    else {
      FUN_7101d99320(plVar25,(undefined2 *)&local_180,(long ****)pcVar6,(byte ****)pcVar7,
                     (long ****)pcVar10,in_x5,in_x6,in_x7);
    }
    pcVar6 = "set_parts_btn_09";
    pcVar7 = "nam_goods_spirit_damage_50";
    pcVar10 = "nam_goods_help_spirit_damage_50";
    FUN_7101d99160((undefined1 *)&local_180,7,0x710434a97a,0x71042f872e,0x710425f88f);
    puVar11 = *(undefined2 **)(param_1 + 0x48);
    if (*(undefined2 **)(param_1 + 0x50) <= puVar11) goto LAB_7101d98828;
    *puVar11 = (undefined2)local_180;
    *(undefined1 *)(puVar11 + 1) = local_180._2_1_;
    *(undefined4 *)(puVar11 + 2) = 0;
    for (uVar16 = 0; cVar22 = *(char *)((long)&local_178 + uVar16 + 4), cVar22 != '\0';
        uVar16 = uVar16 + 2) {
      *(char *)((long)puVar11 + uVar16 + 0xc) = cVar22;
      if (0x3e < (int)uVar16 + 1U) {
        uVar16 = (ulong)((int)uVar16 + 1);
        break;
      }
      cVar22 = *(char *)((long)&local_178 + uVar16 + 5);
      if (cVar22 == '\0') {
        uVar16 = uVar16 + 1;
        break;
      }
      *(char *)((long)puVar11 + uVar16 + 0xd) = cVar22;
    }
    *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0xc) = 0;
    *(int *)(puVar11 + 4) = (int)uVar16;
    uVar14 = (uint)*(byte *)(puVar11 + 6);
    uVar18 = uVar26;
    if (*(byte *)(puVar11 + 6) != 0) {
      pbVar17 = (byte *)((long)puVar11 + 0xd);
      do {
        uVar18 = uVar18 * 0x89 ^ uVar14;
        uVar14 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar14 != 0);
    }
    *(uint *)(puVar11 + 2) = uVar18;
    *(undefined4 *)(puVar11 + 0x26) = 0;
    for (uVar16 = 0; cVar22 = *(char *)((long)&local_130 + uVar16 + 4), cVar22 != '\0';
        uVar16 = uVar16 + 2) {
      *(char *)((long)puVar11 + uVar16 + 0x54) = cVar22;
      if (0x3e < (int)uVar16 + 1U) {
        uVar16 = (ulong)((int)uVar16 + 1);
        break;
      }
      cVar22 = *(char *)((long)&local_130 + uVar16 + 5);
      if (cVar22 == '\0') {
        uVar16 = uVar16 + 1;
        break;
      }
      *(char *)((long)puVar11 + uVar16 + 0x55) = cVar22;
    }
    *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0x54) = 0;
    *(int *)(puVar11 + 0x28) = (int)uVar16;
    uVar14 = (uint)*(byte *)(puVar11 + 0x2a);
    uVar18 = uVar26;
    if (*(byte *)(puVar11 + 0x2a) != 0) {
      pbVar17 = (byte *)((long)puVar11 + 0x55);
      do {
        uVar18 = uVar18 * 0x89 ^ uVar14;
        uVar14 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar14 != 0);
    }
    *(uint *)(puVar11 + 0x26) = uVar18;
    *(undefined4 *)(puVar11 + 0x4a) = 0;
    for (uVar16 = 0; local_e4[uVar16] != '\0'; uVar16 = uVar16 + 2) {
      *(char *)((long)puVar11 + uVar16 + 0x9c) = local_e4[uVar16];
      if (0x3e < (int)uVar16 + 1U) {
        uVar16 = (ulong)((int)uVar16 + 1);
        break;
      }
      if (local_e4[uVar16 + 1] == '\0') {
        uVar16 = uVar16 + 1;
        break;
      }
      *(char *)((long)puVar11 + uVar16 + 0x9d) = local_e4[uVar16 + 1];
    }
    *(undefined1 *)((long)puVar11 + (uVar16 & 0xffffffff) + 0x9c) = 0;
    uVar18 = (uint)*(byte *)(puVar11 + 0x4e);
    *(int *)(puVar11 + 0x4c) = (int)uVar16;
    if (*(byte *)(puVar11 + 0x4e) != 0) {
      pbVar17 = (byte *)((long)puVar11 + 0x9d);
      do {
        uVar26 = uVar26 * 0x89 ^ uVar18;
        uVar18 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar18 != 0);
    }
LAB_7101d98984:
    *(uint *)(puVar11 + 0x4a) = uVar26;
    *plVar1 = *plVar1 + 0xdc;
  }
  lVar21 = *plVar25;
  if (*plVar1 != lVar21) {
    uVar16 = 1;
    uVar19 = 0;
    do {
      uVar12 = uVar16;
      bVar3 = *(byte *)(lVar21 + uVar19 * 0xdc);
      uVar26 = bVar3 - 1;
      if (uVar26 < 0x10) {
        bVar4 = bVar3 - 0xe;
        if (bVar3 < 0xe) {
          if (0xc < (uVar26 & 0xff)) {
LAB_7101d98f20:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar23 = (ushort)*(byte *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) +
                                    ((ulong)uVar26 & 0xff));
        }
        else {
          if (bVar4 == 0xff) goto LAB_7101d989d8;
          if (2 < bVar4) goto LAB_7101d98f20;
          uVar23 = *(ushort *)
                    (*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + (ulong)bVar4 * 2 + 0xe);
        }
        *(char *)(lVar21 + uVar19 * 0xdc + 1) = (char)uVar23;
        if ((uVar23 & 0xff) == 0) goto LAB_7101d98a4c;
      }
      else {
LAB_7101d989d8:
        *(undefined1 *)(lVar21 + uVar19 * 0xdc + 1) = 0;
LAB_7101d98a4c:
        *(undefined1 *)(*plVar25 + uVar19 * 0xdc + 2) = 0;
      }
      if (*(int *)(param_1 + 0x30) == 1) {
        lVar21 = *plVar25;
        cVar22 = *(char *)(lVar21 + uVar19 * 0xdc);
        if (cVar22 == '\b') {
          if (*(char *)(param_1 + 0x37) == '\0') goto LAB_7101d98b48;
          *(undefined1 *)(lVar21 + uVar19 * 0xdc + 2) = 0;
          lVar21 = *plVar25;
          cVar22 = *(char *)(lVar21 + uVar19 * 0xdc);
        }
        if (cVar22 == '\t') {
          if (*(char *)(param_1 + 0x36) == '\0') goto LAB_7101d98b48;
          *(undefined1 *)(lVar21 + uVar19 * 0xdc + 2) = 0;
          lVar21 = *plVar25;
          cVar22 = *(char *)(lVar21 + uVar19 * 0xdc);
        }
        if ((cVar22 == '\v') && (*(char *)(param_1 + 0x38) != '\0')) goto LAB_7101d98b40;
      }
      else if (*(int *)(param_1 + 0x30) == 0) {
        lVar21 = *plVar25;
        uVar16 = (*plVar1 - lVar21 >> 2) * 0x6fb586fb586fb587;
        if (uVar16 < uVar19 || uVar16 - uVar19 == 0) {
LAB_7101d98f18:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        if ((*(char *)(lVar21 + uVar19 * 0xdc) == '\x04') && (*(char *)(param_1 + 0x34) != '\0')) {
          *(undefined1 *)(lVar21 + uVar19 * 0xdc + 2) = 0;
          lVar21 = *plVar25;
          uVar16 = (*plVar1 - lVar21 >> 2) * 0x6fb586fb586fb587;
        }
        if (uVar16 <= uVar19) goto LAB_7101d98f18;
        if ((*(char *)(lVar21 + uVar19 * 0xdc) != '\x05') || (*(char *)(param_1 + 0x35) == '\0'))
        goto LAB_7101d98b48;
LAB_7101d98b40:
        *(undefined1 *)(lVar21 + uVar19 * 0xdc + 2) = 0;
      }
LAB_7101d98b48:
      lVar21 = *plVar25;
      uVar24 = (*plVar1 - lVar21 >> 2) * 0x6fb586fb586fb587;
      uVar16 = (ulong)((int)uVar12 + 1);
      uVar19 = uVar12;
    } while (uVar12 <= uVar24 && uVar24 - uVar12 != 0);
  }
  local_170 = 1;
  local_16c = 1;
  local_16a = 1;
  local_168 = &DAT_41f0000000000000;
  local_180 = (undefined **)0x0;
  local_178 = (long *)&DAT_00000101;
  local_160 = 0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_70 = (long *)0x0;
  local_60 = 0;
  FUN_710337df20((long)&local_180);
  plVar2 = local_100;
  local_100 = (long *)0x0;
  if (alStack_120 == plVar2) {
    pcVar13 = *(code **)(*plVar2 + 0x20);
LAB_7101d98bec:
    (*pcVar13)();
  }
  else if (plVar2 != (long *)0x0) {
    pcVar13 = *(code **)(*plVar2 + 0x28);
    goto LAB_7101d98bec;
  }
  plVar2 = local_d0;
  bVar5 = &lStack_f0 == local_d0;
  local_d0 = (long *)0x0;
  if (bVar5) {
    pcVar13 = *(code **)(*plVar2 + 0x20);
LAB_7101d98c20:
    (*pcVar13)();
  }
  else if (plVar2 != (long *)0x0) {
    pcVar13 = *(code **)(*plVar2 + 0x28);
    goto LAB_7101d98c20;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    *(undefined4 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 8) + 0x600) + 0x14) = 0xc0;
    FUN_7103770b30(plVar2,(undefined8 *)(param_1 + 0x10),(long ****)"selector_00",
                   (byte ****)&local_180,(long ****)pcVar10,in_x5,in_x6,in_x7);
    FUN_71037717d0(plVar2,0,"set_parts_btn_00",ppppbVar9,(long ****)pcVar10,in_x5,in_x6,in_x7);
    FUN_71037717d0(plVar2,1,"set_parts_btn_01",ppppbVar9,(long ****)pcVar10,in_x5,in_x6,in_x7);
    FUN_71037717d0(plVar2,2,"set_parts_btn_02",ppppbVar9,(long ****)pcVar10,in_x5,in_x6,in_x7);
    FUN_71037717d0(plVar2,3,"set_parts_btn_03",ppppbVar9,(long ****)pcVar10,in_x5,in_x6,in_x7);
    pcVar6 = "set_parts_btn_04";
  }
  else {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_7103770b30(plVar2,(undefined8 *)(param_1 + 0x10),(long ****)"selector_01",
                   (byte ****)&local_180,(long ****)pcVar10,in_x5,in_x6,in_x7);
    FUN_71037717d0(plVar2,0,"set_parts_btn_05",ppppbVar8,(long ****)pcVar10,in_x5,in_x6,in_x7);
    FUN_71037717d0(plVar2,1,"set_parts_btn_06",ppppbVar8,(long ****)pcVar10,in_x5,in_x6,in_x7);
    FUN_71037717d0(plVar2,2,"set_parts_btn_07",ppppbVar8,(long ****)pcVar10,in_x5,in_x6,in_x7);
    FUN_71037717d0(plVar2,3,"set_parts_btn_08",ppppbVar8,(long ****)pcVar10,in_x5,in_x6,in_x7);
    pcVar6 = "set_parts_btn_09";
    ppppbVar9 = ppppbVar8;
  }
  FUN_71037717d0((undefined8 *)(param_1 + 0x20),4,pcVar6,ppppbVar9,(long ****)pcVar10,in_x5,in_x6,
                 in_x7);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x70))(*(long **)(param_1 + 0x20),1);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x60))(*(long **)(param_1 + 0x20),0);
  if (alStack_90 == local_70) {
    pcVar13 = *(code **)(*local_70 + 0x20);
LAB_7101d98d90:
    (*pcVar13)();
    uVar15 = extraout_x1_00;
  }
  else {
    uVar15 = extraout_x1;
    if (local_70 != (long *)0x0) {
      pcVar13 = *(code **)(*local_70 + 0x28);
      goto LAB_7101d98d90;
    }
  }
  if (alStack_c0 == local_a0) {
    pcVar13 = *(code **)(*local_a0 + 0x20);
LAB_7101d98dc0:
    (*pcVar13)();
    uVar15 = extraout_x1_01;
  }
  else if (local_a0 != (long *)0x0) {
    pcVar13 = *(code **)(*local_a0 + 0x28);
    goto LAB_7101d98dc0;
  }
  if (&lStack_f0 == local_d0) {
    pcVar13 = *(code **)(*local_d0 + 0x20);
LAB_7101d98de8:
    (*pcVar13)();
    uVar15 = extraout_x1_02;
  }
  else if (local_d0 != (long *)0x0) {
    pcVar13 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101d98de8;
  }
  if (alStack_120 == local_100) {
    pcVar13 = *(code **)(*local_100 + 0x20);
LAB_7101d98e10:
    (*pcVar13)();
    uVar15 = extraout_x1_03;
  }
  else if (local_100 != (long *)0x0) {
    pcVar13 = *(code **)(*local_100 + 0x28);
    goto LAB_7101d98e10;
  }
  if (alStack_150 == local_130) {
    pcVar13 = *(code **)(*local_130 + 0x20);
  }
  else {
    if (local_130 == (long *)0x0) goto LAB_7101d98e44;
    pcVar13 = *(code **)(*local_130 + 0x28);
  }
  (*pcVar13)();
  uVar15 = extraout_x1_04;
LAB_7101d98e44:
  FUN_7101d98f30(param_1,uVar15,(long ****)pcVar6,ppppbVar9,(long ****)pcVar10,in_x5,in_x6,in_x7);
  FUN_7103776910(&local_180,param_1 + 0x10,(long ****)"set_txt_help",pcVar6,ppppbVar9,
                 (long ****)pcVar10,in_x5,in_x6,in_x7);
  plVar2 = local_178;
  uVar16 = (ulong)*(int *)(param_1 + 0x2c);
  if ((*(int *)(param_1 + 0x2c) < 0) ||
     (lVar21 = *plVar25, uVar19 = (*plVar1 - lVar21 >> 2) * 0x6fb586fb586fb587,
     uVar19 < uVar16 || uVar19 - uVar16 == 0)) {
    lVar21 = *local_178;
    if (lVar21 != 0) {
      *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) & 0xfe;
    }
  }
  else {
    lVar20 = *local_178;
    if (lVar20 != 0) {
      *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) | 1;
      uVar16 = (ulong)*(int *)(param_1 + 0x2c);
      lVar21 = *(long *)(param_1 + 0x40);
    }
    FUN_710377a120((long)&local_180,(char *)(lVar21 + uVar16 * 0xdc + 0x9c),pcVar6,ppppbVar9,pcVar10
                   ,in_x5,in_x6,in_x7);
  }
  local_180 = &PTR_FUN_710523d9a8;
  local_178 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar2);
  }
  return;
}

