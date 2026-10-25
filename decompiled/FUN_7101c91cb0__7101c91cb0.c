// addr:      7101c91cb0
// offset:    0x1c91cb0
// name:      FUN_7101c91cb0
// mangled:   
// signature: undefined __cdecl FUN_7101c91cb0(long param_1, long param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c91cb0(long param_1,long param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   ulong param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  byte ****ppppbVar11;
  long ****pppplVar12;
  ulong uVar13;
  uint uVar14;
  char *pcVar15;
  ulong uVar16;
  byte *pbVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  long *plVar23;
  uint uVar24;
  undefined8 *puVar25;
  char cVar26;
  uint local_268;
  undefined4 local_264;
  byte local_260 [64];
  uint local_220;
  undefined4 local_21c;
  byte local_218 [64];
  undefined8 local_1d8;
  byte local_1d0 [64];
  undefined8 local_190;
  byte local_188 [64];
  undefined **local_148;
  undefined8 *local_140;
  undefined **local_138;
  undefined8 *local_130;
  undefined **local_128;
  ulong local_120;
  undefined **local_118;
  ulong local_110;
  undefined **local_108;
  ulong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined8 local_de;
  undefined4 local_d6;
  undefined2 local_d2;
  ulong local_d0;
  uint local_c8;
  undefined1 local_c4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined8 local_96;
  undefined4 local_8e;
  undefined2 local_8a;
  ulong local_88;
  uint local_80;
  undefined1 local_7c;
  
  uVar24 = (uint)param_4;
  uVar19 = (uint)param_3;
  uVar9 = param_3;
  ppppbVar11 = param_4;
  pppplVar12 = param_5;
  uVar13 = param_6;
  FUN_7103776910(&local_108,param_2,(long ****)"set_txt_filter_00",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_118,param_2,(long ****)"set_txt_filter_00_old",uVar9,ppppbVar11,pppplVar12,
                 uVar13,param_7,param_8);
  FUN_7103776910(&local_128,param_2,(long ****)"set_txt_filter",uVar9,ppppbVar11,pppplVar12,uVar13,
                 param_7,param_8);
  plVar1 = (long *)(param_1 + 0x100);
  FUN_7103771d60(&local_138,*(long *)(param_1 + 0x100),(long ****)0x0,ppppbVar11,pppplVar12,uVar13,
                 param_7,param_8);
  puVar10 = (undefined1 *)0x1;
  FUN_7103771d60(&local_148,*(long *)(param_1 + 0x100),(long ****)0x1,ppppbVar11,pppplVar12,uVar13,
                 param_7,param_8);
  uVar21 = (uint)param_5;
  local_1d0[0] = 0;
  local_1d8 = 0;
  local_188[0] = 0;
  local_190 = 0;
  cVar3 = (char)param_3;
  cVar2 = (char)param_4;
  switch((ulong)param_5 & 0xffffffff) {
  case 0:
    if ('\a' < cVar3) {
      uVar19 = 8;
    }
    if ((char)uVar19 < '\x03') {
      uVar19 = 2;
    }
    if ('\a' < cVar2) {
      uVar24 = 8;
    }
    ppppbVar11 = (byte ****)(ulong)(uVar19 & 0xff);
    bVar18 = (byte)uVar19;
    puVar10 = (undefined1 *)0x1;
    if ((char)uVar24 < '\x03') {
      uVar24 = 2;
    }
    FUN_710377a280((long)&local_108,(byte *)"mnu_online_room_player_number_n",1);
    if ((uVar19 & 0xff) != (uVar24 & 0xff)) {
      ppppbVar11 = (byte ****)(ulong)(uVar24 & 0xff);
      FUN_710377a280((long)&local_118,(byte *)"mnu_online_room_player_number_n",1);
      puVar10 = &DAT_7104401d83;
      if ((char)bVar18 <= (char)uVar24) {
        puVar10 = &DAT_710438b71d;
      }
      FUN_7103778430(param_2,"txt_move_%s",puVar10,ppppbVar11,pppplVar12,uVar13,param_7,param_8);
    }
    if ((param_6 & 1) != 0) {
      if ((bVar18 & 0x7f) == 8) {
        plVar23 = (long *)*local_140;
        if (plVar23 != (long *)0x0) {
          (**(code **)(*plVar23 + 0x208))(plVar23,0);
          uVar22 = (**(code **)(*plVar23 + 0x200))(plVar23);
          if ((uVar22 & 1) == 0) {
            uVar19 = 1;
          }
          else {
            uVar19 = (**(code **)(*plVar23 + 0x210))(plVar23);
            uVar19 = uVar19 ^ 1;
          }
          puVar10 = (undefined1 *)0x0;
          (**(code **)(*plVar23 + 0x388))(plVar23,uVar19 & 1);
        }
LAB_7101c938c0:
        plVar23 = (long *)*local_130;
        if (plVar23 != (long *)0x0) {
          uVar19 = 1;
          (**(code **)(*plVar23 + 0x208))(plVar23,1);
          uVar22 = (**(code **)(*plVar23 + 0x200))(plVar23);
          if ((uVar22 & 1) != 0) {
            uVar19 = (**(code **)(*plVar23 + 0x210))(plVar23);
            uVar19 = uVar19 ^ 1;
          }
          puVar10 = (undefined1 *)0x0;
          (**(code **)(*plVar23 + 0x388))(plVar23,uVar19 & 1);
        }
      }
      else {
        if ((bVar18 & 0x7f) != 2) {
          plVar23 = (long *)*local_140;
          if (plVar23 != (long *)0x0) {
            uVar19 = 1;
            (**(code **)(*plVar23 + 0x208))(plVar23,1);
            uVar22 = (**(code **)(*plVar23 + 0x200))(plVar23);
            if ((uVar22 & 1) != 0) {
              uVar19 = (**(code **)(*plVar23 + 0x210))(plVar23);
              uVar19 = uVar19 ^ 1;
            }
            puVar10 = (undefined1 *)0x0;
            (**(code **)(*plVar23 + 0x388))(plVar23,uVar19 & 1);
          }
          goto LAB_7101c938c0;
        }
        plVar23 = (long *)*local_140;
        if (plVar23 != (long *)0x0) {
          uVar19 = 1;
          (**(code **)(*plVar23 + 0x208))(plVar23,1);
          uVar22 = (**(code **)(*plVar23 + 0x200))(plVar23);
          if ((uVar22 & 1) != 0) {
            uVar19 = (**(code **)(*plVar23 + 0x210))(plVar23);
            uVar19 = uVar19 ^ 1;
          }
          puVar10 = (undefined1 *)0x0;
          (**(code **)(*plVar23 + 0x388))(plVar23,uVar19 & 1);
        }
        plVar23 = (long *)*local_130;
        if (plVar23 != (long *)0x0) {
          (**(code **)(*plVar23 + 0x208))(plVar23,0);
          uVar22 = (**(code **)(*plVar23 + 0x200))(plVar23);
          if ((uVar22 & 1) == 0) {
            uVar19 = 1;
          }
          else {
            uVar19 = (**(code **)(*plVar23 + 0x210))(plVar23);
            uVar19 = uVar19 ^ 1;
          }
          puVar10 = (undefined1 *)0x0;
          (**(code **)(*plVar23 + 0x388))(plVar23,uVar19 & 1);
        }
      }
      FUN_7101c83c40(plVar1,1,puVar10,ppppbVar11,pppplVar12,uVar13,param_7,param_8);
    }
    FUN_7103778760(*(long *)(param_2 + 8),0x71043196af);
    *(byte *)(param_1 + 0x110) = bVar18;
    goto LAB_7101c936b0;
  case 1:
    if ('\x03' < cVar3) {
      uVar19 = 4;
    }
    uVar19 = uVar19 & ((int)(char)uVar19 >> 7 ^ 0xffffffffU);
    uVar22 = (ulong)uVar19;
    if ('\x03' < cVar2) {
      uVar24 = 4;
    }
    if (4 < (uVar19 & 0xff)) goto LAB_7101c93948;
    uVar24 = uVar24 & ((int)(char)uVar24 >> 7 ^ 0xffffffffU);
    uVar14 = 0x811c9dc5;
    uVar19 = uVar14;
    switch((&DAT_71045452a2)[uVar22 & 0xff]) {
    case 4:
      uVar20 = 0x6d;
      local_b0 = 0x1c00000000;
      local_a8 = &DAT_696c6e6f5f756e6d;
      local_a0 = 0x5f6d6f6f725f656e;
      local_98 = 0x7473;
      local_96 = 0x646e61725f656761;
      local_8e = CONCAT13(local_8e._3_1_,0x6d6f);
      pbVar17 = (byte *)((long)&local_a8 + 1);
      do {
        uVar19 = uVar19 * 0x89 ^ uVar20;
        uVar20 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar20 != 0);
      break;
    case 5:
      local_b0 = 0x2c00000000;
      uVar20 = 0x6d;
      local_a8 = &DAT_696c6e6f5f756e6d;
      local_a0 = 0x5f6d6f6f725f656e;
      local_98 = 0x7473;
      local_96 = 0x646e61725f656761;
      local_8e = 0x625f6d6f;
      local_8a = 0x7461;
      local_88 = 0x646c656966656c74;
      local_80 = 0x646e655f;
      local_7c = 0;
      pbVar17 = (byte *)((long)&local_a8 + 1);
      do {
        uVar19 = uVar19 * 0x89 ^ uVar20;
        uVar20 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar20 != 0);
      break;
    case 6:
      local_b0 = 0x2800000000;
      uVar20 = 0x6d;
      local_a8 = &DAT_696c6e6f5f756e6d;
      local_a0 = 0x5f6d6f6f725f656e;
      local_98 = 0x7473;
      local_96 = 0x646e61725f656761;
      local_8e = 0x625f6d6f;
      local_8a = 0x7461;
      local_88 = 0x646c656966656c74;
      local_80 = local_80 & 0xffffff00;
      pbVar17 = (byte *)((long)&local_a8 + 1);
      do {
        uVar19 = uVar19 * 0x89 ^ uVar20;
        uVar20 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar20 != 0);
      break;
    case 7:
      local_b0 = 0x2000000000;
      uVar20 = 0x6d;
      local_a8 = &DAT_696c6e6f5f756e6d;
      local_a0 = 0x5f6d6f6f725f656e;
      local_98 = 0x7473;
      local_96 = 0x646e61725f656761;
      local_8e = 0x655f6d6f;
      local_8a = 0x646e;
      local_88 = local_88 & 0xffffffffffffff00;
      pbVar17 = (byte *)((long)&local_a8 + 1);
      do {
        uVar19 = uVar19 * 0x89 ^ uVar20;
        uVar20 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar20 != 0);
      break;
    default:
      local_b0 = 0x2700000000;
      local_a8 = &DAT_696c6e6f5f756e6d;
      local_a0 = 0x5f6d6f6f725f656e;
      local_98 = 0x7473;
      local_96 = 0x766572705f656761;
      local_8e = 0x73756f69;
      local_8a = 0x796c;
      local_88 = 0x7463656c65735f;
      uVar20 = 0x6d;
      pbVar17 = (byte *)((long)&local_a8 + 1);
      do {
        uVar19 = uVar19 * 0x89 ^ uVar20;
        uVar20 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar20 != 0);
    }
    local_98 = 0x7473;
    local_a0 = 0x5f6d6f6f725f656e;
    local_a8 = &DAT_696c6e6f5f756e6d;
    local_b0 = CONCAT44(local_b0._4_4_,uVar19);
    if (4 < (uVar24 & 0xff)) goto LAB_7101c93948;
    uVar19 = uVar14;
    switch((&DAT_71045452a2)[(ulong)uVar24 & 0xff]) {
    case 4:
      local_f8 = 0x1c00000000;
      local_f0 = &DAT_696c6e6f5f756e6d;
      local_e8 = 0x5f6d6f6f725f656e;
      local_e0 = 0x7473;
      local_de = 0x646e61725f656761;
      uVar20 = 0x6d;
      local_d6 = CONCAT13(local_d6._3_1_,0x6d6f);
      pbVar17 = (byte *)((long)&local_f0 + 1);
      do {
        uVar19 = uVar19 * 0x89 ^ uVar20;
        uVar20 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar20 != 0);
      break;
    case 5:
      local_f8 = 0x2c00000000;
      local_f0 = &DAT_696c6e6f5f756e6d;
      local_e8 = 0x5f6d6f6f725f656e;
      local_e0 = 0x7473;
      local_de = 0x646e61725f656761;
      local_d6 = 0x625f6d6f;
      local_d2 = 0x7461;
      local_d0 = 0x646c656966656c74;
      local_c8 = 0x646e655f;
      uVar20 = 0x6d;
      local_c4 = 0;
      pbVar17 = (byte *)((long)&local_f0 + 1);
      do {
        uVar19 = uVar19 * 0x89 ^ uVar20;
        uVar20 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar20 != 0);
      break;
    case 6:
      local_f8 = 0x2800000000;
      local_f0 = &DAT_696c6e6f5f756e6d;
      local_e8 = 0x5f6d6f6f725f656e;
      local_e0 = 0x7473;
      local_de = 0x646e61725f656761;
      local_d6 = 0x625f6d6f;
      local_d2 = 0x7461;
      local_d0 = 0x646c656966656c74;
      uVar20 = 0x6d;
      local_c8 = local_c8 & 0xffffff00;
      pbVar17 = (byte *)((long)&local_f0 + 1);
      do {
        uVar19 = uVar19 * 0x89 ^ uVar20;
        uVar20 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar20 != 0);
      break;
    case 7:
      local_f8 = 0x2000000000;
      local_f0 = &DAT_696c6e6f5f756e6d;
      local_e8 = 0x5f6d6f6f725f656e;
      local_e0 = 0x7473;
      local_de = 0x646e61725f656761;
      local_d6 = 0x655f6d6f;
      local_d2 = 0x646e;
      uVar20 = 0x6d;
      local_d0 = local_d0 & 0xffffffffffffff00;
      pbVar17 = (byte *)((long)&local_f0 + 1);
      do {
        uVar19 = uVar19 * 0x89 ^ uVar20;
        uVar20 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar20 != 0);
      break;
    default:
      local_f8 = 0x2700000000;
      local_f0 = &DAT_696c6e6f5f756e6d;
      local_e8 = 0x5f6d6f6f725f656e;
      local_e0 = 0x7473;
      local_de = 0x766572705f656761;
      local_d6 = 0x73756f69;
      local_d2 = 0x796c;
      local_d0 = 0x7463656c65735f;
      uVar20 = 0x6d;
      pbVar17 = (byte *)((long)&local_f0 + 1);
      do {
        uVar19 = uVar19 * 0x89 ^ uVar20;
        uVar20 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar20 != 0);
    }
    local_e0 = 0x7473;
    local_e8 = 0x5f6d6f6f725f656e;
    local_f0 = &DAT_696c6e6f5f756e6d;
    local_f8 = CONCAT44(local_f8._4_4_,uVar19);
    uVar16 = 0;
    bVar18 = 0x6d;
    do {
      local_260[uVar16] = bVar18;
      if (0x3e < (int)uVar16 + 1U) {
        uVar16 = (ulong)((int)uVar16 + 1);
        break;
      }
      bVar18 = *(byte *)((long)&local_a8 + uVar16 + 1);
      if (bVar18 == 0) {
        uVar16 = uVar16 + 1;
        break;
      }
      local_260[uVar16 + 1] = bVar18;
      bVar18 = *(byte *)((long)&local_a8 + uVar16 + 2);
      uVar16 = uVar16 + 2;
    } while (bVar18 != 0);
    local_260[uVar16 & 0xffffffff] = 0;
    local_264 = (undefined4)uVar16;
    uVar19 = (uint)local_260[0];
    local_268 = uVar14;
    if (uVar19 != 0) {
      pbVar17 = local_260;
      do {
        pbVar17 = pbVar17 + 1;
        local_268 = local_268 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar17;
      } while (uVar19 != 0);
    }
    uVar16 = 0;
    bVar18 = 0x6d;
    local_220 = 0;
    do {
      local_218[uVar16] = bVar18;
      if (0x3e < (int)uVar16 + 1U) {
        uVar16 = (ulong)((int)uVar16 + 1);
        break;
      }
      bVar18 = *(byte *)((long)&local_f0 + uVar16 + 1);
      if (bVar18 == 0) {
        uVar16 = uVar16 + 1;
        break;
      }
      local_218[uVar16 + 1] = bVar18;
      bVar18 = *(byte *)((long)&local_f0 + uVar16 + 2);
      uVar16 = uVar16 + 2;
    } while (bVar18 != 0);
    local_218[uVar16 & 0xffffffff] = 0;
    local_21c = (int)uVar16;
    uVar19 = (uint)local_218[0];
    local_220 = uVar14;
    if (uVar19 != 0) {
      pbVar17 = local_218;
      do {
        pbVar17 = pbVar17 + 1;
        local_220 = local_220 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar17;
      } while (uVar19 != 0);
    }
    if (local_260[0] == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      do {
        local_1d0[uVar16] = local_260[0];
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        local_260[0] = local_260[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (local_260[0] != 0);
    }
    local_1d0[uVar16 & 0xffffffff] = 0;
    uVar20 = (uint)local_1d0[0];
    local_1d8 = CONCAT44((int)uVar16,(undefined4)local_1d8);
    uVar19 = uVar14;
    if (local_1d0[0] != 0) {
      pbVar17 = local_1d0;
      do {
        pbVar17 = pbVar17 + 1;
        uVar19 = uVar19 * 0x89 ^ uVar20;
        uVar20 = (uint)*pbVar17;
      } while (uVar20 != 0);
    }
    local_1d8 = CONCAT44((int)uVar16,uVar19);
    if (local_218[0] == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      do {
        local_188[uVar16] = local_218[0];
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        local_218[0] = local_218[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (local_218[0] != 0);
    }
    local_188[uVar16 & 0xffffffff] = 0;
    uVar19 = (uint)local_188[0];
    local_190 = CONCAT44((int)uVar16,(undefined4)local_190);
    if (local_188[0] != 0) {
      pbVar17 = local_188;
      do {
        pbVar17 = pbVar17 + 1;
        uVar14 = uVar14 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar17;
      } while (uVar19 != 0);
    }
    local_190 = CONCAT44((int)uVar16,uVar14);
    uVar19 = 4;
    goto LAB_7101c93378;
  case 2:
    if ('\0' < cVar3) {
      uVar19 = 1;
    }
    uVar19 = uVar19 & ((int)(char)uVar19 >> 7 ^ 0xffffffffU);
    uVar22 = (ulong)uVar19;
    if ('\0' < cVar2) {
      uVar24 = 1;
    }
    if (1 < (uVar19 & 0xff)) goto LAB_7101c93948;
    cVar3 = *(char *)(param_1 + 0x111);
    uVar24 = uVar24 & ((int)(char)uVar24 >> 7 ^ 0xffffffffU);
    uVar16 = 0;
    pcVar15 = "mnu_online_room_stgcreate_on";
    if ((&DAT_7104545280)[uVar22 & 0xff] != '\x02') {
      pcVar15 = "mnu_online_room_stgcreate_off";
    }
    while( true ) {
      cVar2 = pcVar15[uVar16];
      if (cVar2 == '\0') break;
      *(char *)((long)&local_a8 + uVar16) = cVar2;
      if (0x3e < (int)uVar16 + 1U) {
        uVar16 = (ulong)((int)uVar16 + 1);
        break;
      }
      cVar2 = (pcVar15 + uVar16)[1];
      if (cVar2 == '\0') {
        uVar16 = uVar16 + 1;
        break;
      }
      *(char *)((long)&local_a8 + uVar16 + 1) = cVar2;
      uVar16 = uVar16 + 2;
    }
    uVar14 = 0x811c9dc5;
    *(undefined1 *)((long)&local_a8 + (uVar16 & 0xffffffff)) = 0;
    local_b0 = uVar16 << 0x20;
    bVar18 = (byte)local_a8;
    uVar20 = (uint)(byte)local_a8;
    uVar19 = uVar14;
    if (uVar20 != 0) {
      pbVar17 = (byte *)((long)&local_a8 + 1);
      do {
        uVar19 = uVar19 * 0x89 ^ uVar20;
        uVar20 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar20 != 0);
    }
    local_b0 = CONCAT44((int)uVar16,uVar19);
    if (1 < (uVar24 & 0xff)) goto LAB_7101c93948;
    uVar16 = 0;
    pcVar15 = "mnu_online_room_stgcreate_on";
    if ((&DAT_7104545280)[(ulong)uVar24 & 0xff] != '\x02') {
      pcVar15 = "mnu_online_room_stgcreate_off";
    }
    while( true ) {
      cVar2 = pcVar15[uVar16];
      if (cVar2 == '\0') break;
      *(char *)((long)&local_f0 + uVar16) = cVar2;
      if (0x3e < (int)uVar16 + 1U) {
        uVar16 = (ulong)((int)uVar16 + 1);
        break;
      }
      cVar2 = (pcVar15 + uVar16)[1];
      if (cVar2 == '\0') {
        uVar16 = uVar16 + 1;
        break;
      }
      *(char *)((long)&local_f0 + uVar16 + 1) = cVar2;
      uVar16 = uVar16 + 2;
    }
    *(undefined1 *)((long)&local_f0 + (uVar16 & 0xffffffff)) = 0;
    bVar4 = (byte)local_f0;
    local_f8 = uVar16 << 0x20;
    uVar20 = (uint)(byte)local_f0;
    uVar19 = uVar14;
    if (uVar20 != 0) {
      pbVar17 = (byte *)((long)&local_f0 + 1);
      do {
        uVar19 = uVar19 * 0x89 ^ uVar20;
        uVar20 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar20 != 0);
    }
    local_f8 = CONCAT44((int)uVar16,uVar19);
    uVar16 = 0;
    while (bVar18 != 0) {
      local_260[uVar16] = bVar18;
      if (0x3e < (int)uVar16 + 1U) {
        uVar16 = (ulong)((int)uVar16 + 1);
        break;
      }
      bVar18 = *(byte *)((long)&local_a8 + uVar16 + 1);
      if (bVar18 == 0) {
        uVar16 = uVar16 + 1;
        break;
      }
      local_260[uVar16 + 1] = bVar18;
      lVar6 = uVar16 + 2;
      uVar16 = uVar16 + 2;
      bVar18 = *(byte *)((long)&local_a8 + lVar6);
    }
    local_260[uVar16 & 0xffffffff] = 0;
    local_264 = (undefined4)uVar16;
    uVar19 = (uint)local_260[0];
    local_268 = uVar14;
    if (uVar19 != 0) {
      pbVar17 = local_260;
      do {
        pbVar17 = pbVar17 + 1;
        local_268 = local_268 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar17;
      } while (uVar19 != 0);
    }
    uVar16 = 0;
    local_220 = 0;
    while (bVar4 != 0) {
      local_218[uVar16] = bVar4;
      if (0x3e < (int)uVar16 + 1U) {
        uVar16 = (ulong)((int)uVar16 + 1);
        break;
      }
      bVar18 = *(byte *)((long)&local_f0 + uVar16 + 1);
      if (bVar18 == 0) {
        uVar16 = uVar16 + 1;
        break;
      }
      local_218[uVar16 + 1] = bVar18;
      lVar6 = uVar16 + 2;
      uVar16 = uVar16 + 2;
      bVar4 = *(byte *)((long)&local_f0 + lVar6);
    }
    local_218[uVar16 & 0xffffffff] = 0;
    local_21c = (int)uVar16;
    uVar19 = (uint)local_218[0];
    local_220 = uVar14;
    if (uVar19 != 0) {
      pbVar17 = local_218;
      do {
        pbVar17 = pbVar17 + 1;
        local_220 = local_220 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar17;
      } while (uVar19 != 0);
    }
    if (local_260[0] == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      do {
        local_1d0[uVar16] = local_260[0];
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        local_260[0] = local_260[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (local_260[0] != 0);
    }
    local_1d0[uVar16 & 0xffffffff] = 0;
    uVar20 = (uint)local_1d0[0];
    local_1d8 = CONCAT44((int)uVar16,(undefined4)local_1d8);
    uVar19 = uVar14;
    if (local_1d0[0] != 0) {
      pbVar17 = local_1d0;
      do {
        pbVar17 = pbVar17 + 1;
        uVar19 = uVar19 * 0x89 ^ uVar20;
        uVar20 = (uint)*pbVar17;
      } while (uVar20 != 0);
    }
    local_1d8 = CONCAT44((int)uVar16,uVar19);
    if (local_218[0] == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      do {
        local_188[uVar16] = local_218[0];
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        local_218[0] = local_218[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (local_218[0] != 0);
    }
    local_188[uVar16 & 0xffffffff] = 0;
    uVar19 = (uint)local_188[0];
    local_190 = CONCAT44((int)uVar16,(undefined4)local_190);
    if (local_188[0] != 0) {
      pbVar17 = local_188;
      do {
        pbVar17 = pbVar17 + 1;
        uVar14 = uVar14 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar17;
      } while (uVar19 != 0);
    }
    local_190 = CONCAT44((int)uVar16,uVar14);
    if (cVar3 == '\0') goto LAB_7101c92b5c;
    FUN_7103778760(*(long *)(param_2 + 8),0x7104412ad1);
    bVar5 = false;
    bVar8 = true;
LAB_7101c92a7c:
    FUN_7103778760(*(long *)(param_2 + 8),0x71043bedce);
    uVar19 = 1;
    goto LAB_7101c93398;
  case 3:
    bVar8 = FUN_7101704ba0(*(long *)(DAT_71052c4c58 + 8) + 0xa0);
    if (bVar8) {
      pcVar15 = *(char **)(*(long *)(param_1 + 0x170) + 0x438);
      if (*(char **)(*(long *)(param_1 + 0x170) + 0x440) == pcVar15) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      cVar26 = '\x06';
    }
    else {
      FUN_7101797350(0);
      pcVar15 = *(char **)(*(long *)(param_1 + 0x170) + 0x438);
      if (*(char **)(*(long *)(param_1 + 0x170) + 0x440) == pcVar15) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      cVar26 = '\x05';
    }
    if ('\0' < cVar3) {
      uVar19 = 1;
    }
    cVar3 = *pcVar15;
    uVar19 = uVar19 & ((int)(char)uVar19 >> 7 ^ 0xffffffffU);
    uVar22 = (ulong)uVar19;
    if ('\0' < cVar2) {
      uVar24 = 1;
    }
    uVar24 = uVar24 & ((int)(char)uVar24 >> 7 ^ 0xffffffffU);
    puVar10 = (undefined1 *)(ulong)uVar24;
    FUN_7101c91730(&local_268,(byte)uVar19,(byte)uVar24);
    uVar16 = 0;
    while( true ) {
      if (local_260[uVar16] == 0) break;
      local_1d0[uVar16] = local_260[uVar16];
      if (0x3e < (int)uVar16 + 1U) {
        uVar16 = (ulong)((int)uVar16 + 1);
        break;
      }
      if (local_260[uVar16 + 1] == 0) {
        uVar16 = uVar16 + 1;
        break;
      }
      local_1d0[uVar16 + 1] = local_260[uVar16 + 1];
      uVar16 = uVar16 + 2;
    }
    uVar14 = 0x811c9dc5;
    local_1d0[uVar16 & 0xffffffff] = 0;
    local_1d8 = CONCAT44((int)uVar16,(undefined4)local_1d8);
    uVar20 = (uint)local_1d0[0];
    uVar19 = uVar14;
    if (local_1d0[0] != 0) {
      pbVar17 = local_1d0;
      do {
        pbVar17 = pbVar17 + 1;
        uVar19 = uVar19 * 0x89 ^ uVar20;
        uVar20 = (uint)*pbVar17;
      } while (uVar20 != 0);
    }
    local_1d8 = CONCAT44((int)uVar16,uVar19);
    for (uVar16 = 0; local_218[uVar16] != 0; uVar16 = uVar16 + 2) {
      local_188[uVar16] = local_218[uVar16];
      if (0x3e < (int)uVar16 + 1U) {
        uVar16 = (ulong)((int)uVar16 + 1);
        break;
      }
      if (local_218[uVar16 + 1] == 0) {
        uVar16 = uVar16 + 1;
        break;
      }
      local_188[uVar16 + 1] = local_218[uVar16 + 1];
    }
    local_188[uVar16 & 0xffffffff] = 0;
    local_190 = CONCAT44((int)uVar16,(undefined4)local_190);
    uVar19 = (uint)local_188[0];
    if (local_188[0] != 0) {
      pbVar17 = local_188;
      do {
        pbVar17 = pbVar17 + 1;
        uVar14 = uVar14 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar17;
      } while (uVar19 != 0);
    }
    local_190 = CONCAT44((int)uVar16,uVar14);
    if (cVar3 == cVar26) {
      FUN_7103778760(*(long *)(param_2 + 8),0x710433a225);
      bVar8 = false;
      bVar5 = true;
      goto LAB_7101c92a7c;
    }
    goto LAB_7101c92b5c;
  case 4:
    if ('\0' < cVar3) {
      uVar19 = 1;
    }
    uVar19 = uVar19 & ((int)(char)uVar19 >> 7 ^ 0xffffffffU);
    uVar22 = (ulong)uVar19;
    if ('\0' < cVar2) {
      uVar24 = 1;
    }
    uVar24 = uVar24 & ((int)(char)uVar24 >> 7 ^ 0xffffffffU);
    puVar10 = (undefined1 *)(ulong)uVar24;
    FUN_7101c919f0(&local_268,(byte)uVar19,(byte)uVar24);
    uVar16 = 0;
    while( true ) {
      if (local_260[uVar16] == 0) break;
      local_1d0[uVar16] = local_260[uVar16];
      if (0x3e < (int)uVar16 + 1U) {
        uVar16 = (ulong)((int)uVar16 + 1);
        break;
      }
      if (local_260[uVar16 + 1] == 0) {
        uVar16 = uVar16 + 1;
        break;
      }
      local_1d0[uVar16 + 1] = local_260[uVar16 + 1];
      uVar16 = uVar16 + 2;
    }
    uVar14 = 0x811c9dc5;
    local_1d0[uVar16 & 0xffffffff] = 0;
    local_1d8 = CONCAT44((int)uVar16,(undefined4)local_1d8);
    uVar20 = (uint)local_1d0[0];
    uVar19 = uVar14;
    if (local_1d0[0] != 0) {
      pbVar17 = local_1d0;
      do {
        pbVar17 = pbVar17 + 1;
        uVar19 = uVar19 * 0x89 ^ uVar20;
        uVar20 = (uint)*pbVar17;
      } while (uVar20 != 0);
    }
    local_1d8 = CONCAT44((int)uVar16,uVar19);
    for (uVar16 = 0; local_218[uVar16] != 0; uVar16 = uVar16 + 2) {
      local_188[uVar16] = local_218[uVar16];
      if (0x3e < (int)uVar16 + 1U) {
        uVar16 = (ulong)((int)uVar16 + 1);
        break;
      }
      if (local_218[uVar16 + 1] == 0) {
        uVar16 = uVar16 + 1;
        break;
      }
      local_188[uVar16 + 1] = local_218[uVar16 + 1];
    }
    local_188[uVar16 & 0xffffffff] = 0;
    local_190._4_4_ = (int)uVar16;
    uVar19 = (uint)local_188[0];
    if (local_188[0] != 0) {
      pbVar17 = local_188;
      do {
        pbVar17 = pbVar17 + 1;
        uVar14 = uVar14 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar17;
      } while (uVar19 != 0);
    }
    break;
  case 5:
    if ('\0' < cVar3) {
      uVar19 = 1;
    }
    uVar19 = uVar19 & ((int)(char)uVar19 >> 7 ^ 0xffffffffU);
    uVar22 = (ulong)uVar19;
    if ('\0' < cVar2) {
      uVar24 = 1;
    }
    if (1 < (uVar19 & 0xff)) goto LAB_7101c93948;
    uVar24 = uVar24 & ((int)(char)uVar24 >> 7 ^ 0xffffffffU);
    uVar16 = 0;
    pcVar15 = "mnu_online_room_voicechat_on";
    if ((&DAT_7104545280)[uVar22 & 0xff] != '\x02') {
      pcVar15 = "mnu_online_room_voicechat_off";
    }
    while( true ) {
      cVar3 = pcVar15[uVar16];
      if (cVar3 == '\0') break;
      *(char *)((long)&local_a8 + uVar16) = cVar3;
      if (0x3e < (int)uVar16 + 1U) {
        uVar16 = (ulong)((int)uVar16 + 1);
        break;
      }
      cVar3 = (pcVar15 + uVar16)[1];
      if (cVar3 == '\0') {
        uVar16 = uVar16 + 1;
        break;
      }
      *(char *)((long)&local_a8 + uVar16 + 1) = cVar3;
      uVar16 = uVar16 + 2;
    }
    uVar14 = 0x811c9dc5;
    *(undefined1 *)((long)&local_a8 + (uVar16 & 0xffffffff)) = 0;
    local_b0 = uVar16 << 0x20;
    bVar18 = (byte)local_a8;
    uVar20 = (uint)(byte)local_a8;
    uVar19 = uVar14;
    if (uVar20 != 0) {
      pbVar17 = (byte *)((long)&local_a8 + 1);
      do {
        uVar19 = uVar19 * 0x89 ^ uVar20;
        uVar20 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar20 != 0);
    }
    local_b0 = CONCAT44((int)uVar16,uVar19);
    if (1 < (uVar24 & 0xff)) goto LAB_7101c93948;
    uVar16 = 0;
    pcVar15 = "mnu_online_room_voicechat_on";
    if ((&DAT_7104545280)[(ulong)uVar24 & 0xff] != '\x02') {
      pcVar15 = "mnu_online_room_voicechat_off";
    }
    while( true ) {
      cVar3 = pcVar15[uVar16];
      if (cVar3 == '\0') break;
      *(char *)((long)&local_f0 + uVar16) = cVar3;
      if (0x3e < (int)uVar16 + 1U) {
        uVar16 = (ulong)((int)uVar16 + 1);
        break;
      }
      cVar3 = (pcVar15 + uVar16)[1];
      if (cVar3 == '\0') {
        uVar16 = uVar16 + 1;
        break;
      }
      *(char *)((long)&local_f0 + uVar16 + 1) = cVar3;
      uVar16 = uVar16 + 2;
    }
    *(undefined1 *)((long)&local_f0 + (uVar16 & 0xffffffff)) = 0;
    bVar4 = (byte)local_f0;
    local_f8 = uVar16 << 0x20;
    uVar20 = (uint)(byte)local_f0;
    uVar19 = uVar14;
    if (uVar20 != 0) {
      pbVar17 = (byte *)((long)&local_f0 + 1);
      do {
        uVar19 = uVar19 * 0x89 ^ uVar20;
        uVar20 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar20 != 0);
    }
    local_f8 = CONCAT44((int)uVar16,uVar19);
    uVar16 = 0;
    while (bVar18 != 0) {
      local_260[uVar16] = bVar18;
      if (0x3e < (int)uVar16 + 1U) {
        uVar16 = (ulong)((int)uVar16 + 1);
        break;
      }
      bVar18 = *(byte *)((long)&local_a8 + uVar16 + 1);
      if (bVar18 == 0) {
        uVar16 = uVar16 + 1;
        break;
      }
      local_260[uVar16 + 1] = bVar18;
      lVar6 = uVar16 + 2;
      uVar16 = uVar16 + 2;
      bVar18 = *(byte *)((long)&local_a8 + lVar6);
    }
    local_260[uVar16 & 0xffffffff] = 0;
    local_264 = (undefined4)uVar16;
    uVar19 = (uint)local_260[0];
    local_268 = uVar14;
    if (uVar19 != 0) {
      pbVar17 = local_260;
      do {
        pbVar17 = pbVar17 + 1;
        local_268 = local_268 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar17;
      } while (uVar19 != 0);
    }
    uVar16 = 0;
    local_220 = 0;
    while (bVar4 != 0) {
      local_218[uVar16] = bVar4;
      if (0x3e < (int)uVar16 + 1U) {
        uVar16 = (ulong)((int)uVar16 + 1);
        break;
      }
      bVar18 = *(byte *)((long)&local_f0 + uVar16 + 1);
      if (bVar18 == 0) {
        uVar16 = uVar16 + 1;
        break;
      }
      local_218[uVar16 + 1] = bVar18;
      lVar6 = uVar16 + 2;
      uVar16 = uVar16 + 2;
      bVar4 = *(byte *)((long)&local_f0 + lVar6);
    }
    local_218[uVar16 & 0xffffffff] = 0;
    local_21c = (int)uVar16;
    uVar19 = (uint)local_218[0];
    local_220 = uVar14;
    if (uVar19 != 0) {
      pbVar17 = local_218;
      do {
        pbVar17 = pbVar17 + 1;
        local_220 = local_220 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar17;
      } while (uVar19 != 0);
    }
    if (local_260[0] == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      do {
        local_1d0[uVar16] = local_260[0];
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        local_260[0] = local_260[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (local_260[0] != 0);
    }
    local_1d0[uVar16 & 0xffffffff] = 0;
    uVar20 = (uint)local_1d0[0];
    local_1d8 = CONCAT44((int)uVar16,(undefined4)local_1d8);
    uVar19 = uVar14;
    if (local_1d0[0] != 0) {
      pbVar17 = local_1d0;
      do {
        pbVar17 = pbVar17 + 1;
        uVar19 = uVar19 * 0x89 ^ uVar20;
        uVar20 = (uint)*pbVar17;
      } while (uVar20 != 0);
    }
    local_1d8 = CONCAT44((int)uVar16,uVar19);
    if (local_218[0] == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      do {
        local_188[uVar16] = local_218[0];
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        local_218[0] = local_218[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (local_218[0] != 0);
    }
    local_188[uVar16 & 0xffffffff] = 0;
    uVar19 = (uint)local_188[0];
    local_190._4_4_ = (int)uVar16;
    if (local_188[0] != 0) {
      pbVar17 = local_188;
      do {
        pbVar17 = pbVar17 + 1;
        uVar14 = uVar14 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar17;
      } while (uVar19 != 0);
    }
    break;
  default:
    if ((param_6 & 1) != 0) {
      FUN_7101c83c40(plVar1,0,puVar10,ppppbVar11,pppplVar12,uVar13,param_7,param_8);
    }
    FUN_7103778760(*(long *)(param_2 + 8),0x71043196af);
    goto LAB_7101c936b0;
  }
  local_190 = CONCAT44(local_190._4_4_,uVar14);
LAB_7101c92b5c:
  uVar19 = 1;
LAB_7101c93378:
  FUN_7103778760(*(long *)(param_2 + 8),0x71043196af);
  bVar8 = true;
  bVar5 = true;
LAB_7101c93398:
  FUN_710377a120((long)&local_108,(char *)local_1d0,puVar10,ppppbVar11,pppplVar12,uVar13,param_7,
                 param_8);
  if (((uint)uVar22 & 0xff) != (uVar24 & 0xff)) {
    FUN_710377a120((long)&local_118,(char *)local_188,puVar10,ppppbVar11,pppplVar12,uVar13,param_7,
                   param_8);
    puVar10 = &DAT_7104401d83;
    if ((char)uVar22 <= (char)uVar24) {
      puVar10 = &DAT_710438b71d;
    }
    FUN_7103778430(param_2,"txt_move_%s",puVar10,ppppbVar11,pppplVar12,uVar13,param_7,param_8);
  }
  FUN_710377a120((long)&local_128,(char *)local_1d0,puVar10,ppppbVar11,pppplVar12,uVar13,param_7,
                 param_8);
  puVar7 = local_140;
  if ((param_6 & 1) == 0) {
LAB_7101c93698:
    if (6 < uVar21) {
LAB_7101c93948:
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    if ((uVar22 & 0xff) == 0) {
      plVar23 = (long *)*local_140;
      if (plVar23 != (long *)0x0) {
        uVar19 = 1;
        (**(code **)(*plVar23 + 0x208))(plVar23,1);
        uVar16 = (**(code **)(*plVar23 + 0x200))(plVar23);
        if ((uVar16 & 1) != 0) {
          uVar19 = (**(code **)(*plVar23 + 0x210))(plVar23);
          uVar19 = uVar19 ^ 1;
        }
        puVar10 = (undefined1 *)0x0;
        (**(code **)(*plVar23 + 0x388))(plVar23,uVar19 & 1);
      }
      puVar25 = local_130;
      plVar23 = (long *)*local_130;
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x208))(plVar23,0);
        uVar16 = (**(code **)(*plVar23 + 0x200))(plVar23);
        if ((uVar16 & 1) == 0) {
          uVar19 = 1;
        }
        else {
          uVar19 = (**(code **)(*plVar23 + 0x210))(plVar23);
          uVar19 = uVar19 ^ 1;
        }
        puVar10 = (undefined1 *)0x0;
        (**(code **)(*plVar23 + 0x388))(plVar23,uVar19 & 1);
      }
    }
    else {
      plVar23 = (long *)*local_140;
      if (((uint)uVar22 & 0xff) == uVar19) {
        if (plVar23 != (long *)0x0) {
          (**(code **)(*plVar23 + 0x208))(plVar23,0);
          uVar16 = (**(code **)(*plVar23 + 0x200))(plVar23);
          if ((uVar16 & 1) == 0) {
            uVar19 = 1;
          }
          else {
            uVar19 = (**(code **)(*plVar23 + 0x210))(plVar23);
            uVar19 = uVar19 ^ 1;
          }
          puVar10 = (undefined1 *)0x0;
          (**(code **)(*plVar23 + 0x388))(plVar23,uVar19 & 1);
        }
      }
      else if (plVar23 != (long *)0x0) {
        uVar19 = 1;
        (**(code **)(*plVar23 + 0x208))(plVar23,1);
        uVar16 = (**(code **)(*plVar23 + 0x200))(plVar23);
        if ((uVar16 & 1) != 0) {
          uVar19 = (**(code **)(*plVar23 + 0x210))(plVar23);
          uVar19 = uVar19 ^ 1;
        }
        puVar10 = (undefined1 *)0x0;
        (**(code **)(*plVar23 + 0x388))(plVar23,uVar19 & 1);
      }
      puVar25 = local_130;
      plVar23 = (long *)*local_130;
      if (plVar23 != (long *)0x0) {
        uVar19 = 1;
        (**(code **)(*plVar23 + 0x208))(plVar23,1);
        uVar16 = (**(code **)(*plVar23 + 0x200))(plVar23);
        if ((uVar16 & 1) != 0) {
          uVar19 = (**(code **)(*plVar23 + 0x210))(plVar23);
          uVar19 = uVar19 ^ 1;
        }
        puVar10 = (undefined1 *)0x0;
        (**(code **)(*plVar23 + 0x388))(plVar23,uVar19 & 1);
      }
    }
    FUN_7101c83c40(plVar1,1,puVar10,ppppbVar11,pppplVar12,uVar13,param_7,param_8);
    if ((uVar21 != 3) && (bVar8 = bVar5, uVar21 != 2)) goto LAB_7101c93698;
    if (!bVar8) {
      plVar23 = (long *)*puVar7;
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x208))(plVar23,0);
        uVar16 = (**(code **)(*plVar23 + 0x200))(plVar23);
        if ((uVar16 & 1) == 0) {
          uVar19 = 1;
        }
        else {
          uVar19 = (**(code **)(*plVar23 + 0x210))(plVar23);
          uVar19 = uVar19 ^ 1;
        }
        puVar10 = (undefined1 *)0x0;
        (**(code **)(*plVar23 + 0x388))(plVar23,uVar19 & 1);
      }
      plVar23 = (long *)*puVar25;
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x208))(plVar23,0);
        uVar16 = (**(code **)(*plVar23 + 0x200))(plVar23);
        if ((uVar16 & 1) == 0) {
          uVar19 = 1;
        }
        else {
          uVar19 = (**(code **)(*plVar23 + 0x210))(plVar23);
          uVar19 = uVar19 ^ 1;
        }
        puVar10 = (undefined1 *)0x0;
        (**(code **)(*plVar23 + 0x388))(plVar23,uVar19 & 1);
      }
      FUN_7101c83c40(plVar1,0,puVar10,ppppbVar11,pppplVar12,uVar13,param_7,param_8);
    }
  }
  *(char *)(param_1 + (int)uVar21 + 0x110) = (char)uVar22;
LAB_7101c936b0:
  puVar7 = local_140;
  local_148 = &PTR_FUN_710523d9c8;
  local_140 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar7);
  }
  puVar7 = local_130;
  local_138 = &PTR_FUN_710523d9c8;
  local_130 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar7);
  }
  uVar13 = local_120;
  local_128 = &PTR_FUN_710523d9a8;
  local_120 = 0;
  if (uVar13 != 0) {
    FUN_710392eb40(uVar13);
  }
  uVar13 = local_110;
  local_118 = &PTR_FUN_710523d9a8;
  local_110 = 0;
  if (uVar13 != 0) {
    FUN_710392eb40(uVar13);
  }
  uVar13 = local_100;
  local_108 = &PTR_FUN_710523d9a8;
  local_100 = 0;
  if (uVar13 != 0) {
    FUN_710392eb40(uVar13);
  }
  return;
}

