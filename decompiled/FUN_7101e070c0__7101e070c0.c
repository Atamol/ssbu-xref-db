// addr:      7101e070c0
// offset:    0x1e070c0
// name:      FUN_7101e070c0
// mangled:   
// signature: undefined __cdecl FUN_7101e070c0(undefined * * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101e070c0(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 extraout_x1;
  char *pcVar14;
  long *********ppppppppplVar15;
  undefined8 uVar16;
  byte ****ppppbVar17;
  undefined8 uVar18;
  long ****pppplVar19;
  undefined2 *puVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long *plVar29;
  undefined **ppuVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined **local_248;
  ulong local_240 [8];
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined **local_1d8;
  ulong local_1d0;
  undefined **local_1c8;
  ulong local_1c0;
  undefined **local_1b8;
  ulong local_1b0;
  undefined **local_1a8;
  ulong local_1a0;
  undefined **local_198;
  ulong local_190;
  undefined **local_188;
  byte *local_180;
  long local_178;
  undefined ***local_170;
  undefined **local_140;
  ulong local_138;
  undefined **local_130;
  byte *local_128 [8];
  undefined **local_e8;
  ulong local_e0;
  byte local_d8 [4];
  undefined8 local_d4;
  undefined8 local_c8;
  undefined8 local_c0;
  ushort local_b8;
  ushort local_b0 [2];
  int local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  ushort local_9c;
  
  uVar22 = (long)*(int *)(param_1 + 0xb2) + (long)(char)-(*(byte *)(param_1 + 0x6c) & 1);
  if ((((int)uVar22 < 0) || ((ulong)((long)param_1[4] - (long)param_1[3] >> 3) <= uVar22)) ||
     (lVar28 = *(long *)(param_1[3] + uVar22 * 8), lVar28 == 0)) {
LAB_7101e07198:
    if (*(char *)((long)param_1 + 0x596) != '\0') {
      FUN_7103778300(0x3f800000,(long)param_1[0xa3],0x7104319347);
    }
    *(undefined1 *)((long)param_1 + 0x596) = 0;
    return;
  }
  uVar3 = *(ushort *)(lVar28 + 2);
  if ((ulong)uVar3 == 0xffff) goto LAB_7101e07198;
  if (uVar3 >> 4 < 0x177) {
    puVar20 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar3 * 0x50 + 72000);
  }
  else {
    puVar20 = &DAT_710532a878;
    if (((ushort)(uVar3 + 0xe890) < 100) &&
       (lVar23 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar3 + 0xe890) * 0x50,
       *(short *)(lVar23 + 0x88cc8) != -1)) {
      puVar20 = (undefined2 *)(lVar23 + 0x88cc0);
    }
  }
  lVar24 = (long)(short)puVar20[4];
  lVar23 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
  if (lVar24 == -1) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(lVar23 + lVar24 * 2 + 0x60);
  }
  lVar26 = *(long *)(lVar23 + 0x20);
  uVar6 = (int)((ulong)(*(long *)(lVar23 + 0x28) - lVar26) >> 6) * -0x33333333;
  if ((uVar8 < uVar6) && (*(char *)(lVar26 + (ulong)uVar8 * 0x140 + 0x6c) == '\x01')) {
    if (*(char *)((long)param_1 + 0x596) == '\0') {
      FUN_7103778300(0x3f800000,(long)param_1[0xa3],0x71043f0dd8);
    }
    lVar23 = 0;
    if (DAT_7105325da0 == (long *)0x0) goto LAB_7101e07484;
    plVar29 = DAT_7105325da0;
    plVar25 = (long *)&DAT_7105325da0;
    do {
      while (plVar21 = plVar29, 0 < *(int *)((long)plVar21 + 0x1c)) {
        plVar29 = (long *)*plVar21;
        plVar25 = plVar21;
        if ((long *)*plVar21 == (long *)0x0) goto LAB_7101e07480;
      }
      if (-1 < *(int *)((long)plVar21 + 0x1c)) break;
      plVar25 = plVar21 + 1;
      plVar29 = (long *)*plVar25;
    } while ((long *)*plVar25 != (long *)0x0);
LAB_7101e07480:
    lVar23 = *plVar25;
  }
  else if (puVar20[4] == -1) {
LAB_7101e0740c:
    cVar2 = *(char *)((long)param_1 + 0x596);
joined_r0x007101e07418:
    if (cVar2 == '\0') {
      FUN_7103778300(0x3f800000,(long)param_1[0xa3],0x71043f0dd8);
    }
    lVar23 = 0;
    if (DAT_7105325da0 != (long *)0x0) {
      plVar29 = DAT_7105325da0;
      plVar25 = (long *)&DAT_7105325da0;
      do {
        while (plVar21 = plVar29, 3 < *(int *)((long)plVar21 + 0x1c)) {
          plVar29 = (long *)*plVar21;
          plVar25 = plVar21;
          if ((long *)*plVar21 == (long *)0x0) goto LAB_7101e07480;
        }
        if (*(int *)((long)plVar21 + 0x1c) == 3) break;
        plVar25 = plVar21 + 1;
        plVar29 = (long *)*plVar25;
      } while ((long *)*plVar25 != (long *)0x0);
      goto LAB_7101e07480;
    }
  }
  else {
    lVar23 = lVar23 + lVar24 * 2;
    uVar3 = *(ushort *)(lVar23 + 0x60);
    if ((uVar6 <= uVar3) || (*(char *)(lVar26 + (ulong)uVar3 * 0x140 + 0x6c) != '\x03')) {
      uVar3 = *(ushort *)(lVar23 + 0x60);
      if (uVar6 <= uVar3) goto LAB_7101e0740c;
      cVar2 = *(char *)((long)param_1 + 0x596);
      if (*(char *)(lVar26 + (ulong)uVar3 * 0x140 + 0x6c) == '\x02') {
        if (cVar2 == '\0') {
          FUN_7103778300(0x3f800000,(long)param_1[0xa3],0x71043f0dd8);
        }
        lVar23 = 0;
        if (DAT_7105325da0 != (long *)0x0) {
          plVar29 = DAT_7105325da0;
          plVar25 = (long *)&DAT_7105325da0;
          do {
            while (plVar21 = plVar29, 2 < *(int *)((long)plVar21 + 0x1c)) {
              plVar29 = (long *)*plVar21;
              plVar25 = plVar21;
              if ((long *)*plVar21 == (long *)0x0) goto LAB_7101e07480;
            }
            if (*(int *)((long)plVar21 + 0x1c) == 2) break;
            plVar25 = plVar21 + 1;
            plVar29 = (long *)*plVar25;
          } while ((long *)*plVar25 != (long *)0x0);
          goto LAB_7101e07480;
        }
        goto LAB_7101e07484;
      }
      goto joined_r0x007101e07418;
    }
    if (*(char *)((long)param_1 + 0x596) == '\0') {
      FUN_7103778300(0x3f800000,(long)param_1[0xa3],0x71043f0dd8);
    }
    lVar23 = 0;
    if (DAT_7105325da0 != (long *)0x0) {
      plVar29 = DAT_7105325da0;
      plVar25 = (long *)&DAT_7105325da0;
      do {
        while (plVar21 = plVar29, 1 < *(int *)((long)plVar21 + 0x1c)) {
          plVar29 = (long *)*plVar21;
          plVar25 = plVar21;
          if ((long *)*plVar21 == (long *)0x0) goto LAB_7101e07480;
        }
        if (*(int *)((long)plVar21 + 0x1c) == 1) break;
        plVar25 = plVar21 + 1;
        plVar29 = (long *)*plVar25;
      } while ((long *)*plVar25 != (long *)0x0);
      goto LAB_7101e07480;
    }
  }
LAB_7101e07484:
  FUN_7103778430((long)(param_1 + 0xa2),(char *)(lVar23 + 0x28),param_3,param_4,param_5,param_6,
                 param_7,param_8);
  *(undefined1 *)((long)param_1 + 0x596) = 1;
  local_b0[0] = 0xffff;
  local_ac = 0;
  local_a8 = 0x52ffff0000000000;
  local_a0 = 0xffffffff;
  local_9c = 0xffff;
  FUN_71025cae70(local_b0,lVar28);
  uVar3 = local_b0[0];
  lVar28 = (long)(short)local_b0[0];
  local_d8[0] = 0;
  local_d4 = 0;
  local_c8 = 0x52ffff0000000000;
  local_c0 = 0;
  local_b8 = 0;
  FUN_71025caab0((long)local_d8,local_b0[0],local_ac);
  if (lVar28 != -1 && 1999 >= lVar28) {
    lVar23 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar4 = *(ushort *)(lVar23 + lVar28 * 2 + 0x60);
    uVar22 = (ulong)uVar4;
    uVar27 = (*(long *)(lVar23 + 0x28) - *(long *)(lVar23 + 0x20) >> 6) * -0x3333333333333333;
    if ((uint)uVar4 < (uint)uVar27) {
      puVar20 = (undefined2 *)(*(long *)(lVar23 + 0x20) + uVar22 * 0x140);
      if (uVar27 < uVar22 || uVar27 - uVar22 == 0) {
        puVar20 = &DAT_7105182b08;
      }
      local_d8[0] = *(byte *)(puVar20 + 0x36);
      local_c0 = CONCAT62(CONCAT42(local_c0._4_4_,puVar20[0x48]),puVar20[0x35]);
    }
  }
  ppppppppplVar15 = (long *********)(ulong)local_a0._2_2_;
  local_c8 = local_a8;
  ppppbVar17 = (byte ****)(ulong)local_9c;
  FUN_71025cad00((long)local_d8,(ushort)local_a0,local_a0._2_2_,local_9c);
  lVar24 = *(long *)(DAT_710532f730 + 8);
  lVar23 = lVar24 + 0x210;
  ppuVar1 = param_1 + 0xa2;
  FUN_7103776640(&local_e8,(long)ppuVar1,(byte ****)"set_parts_super",ppppppppplVar15,ppppbVar17,
                 param_5,param_6,param_7,param_8);
  uVar22 = local_e0;
  if (lVar28 == -1 || 1999 < lVar28) {
LAB_7101e07720:
    if (local_c0._2_2_ != 0) {
      FUN_7103778300(0x3f800000,local_e0,0x710438b28f);
      FUN_7103778300(0x3f800000,local_e0,0x710446392a);
      lVar26 = *(long *)(DAT_710532f730 + 8);
      ppppppppplVar15 = (long *********)(ulong)local_c0._2_2_;
      FUN_71032a0c90((uint *)&local_130,lVar26 + 0x210,local_c0._2_2_,ppppbVar17,param_5,param_6,
                     param_7,param_8);
      uVar27 = FUN_71032a1630(*(long *)(lVar26 + 0x218),local_c0._2_2_);
      plVar29 = (long *)param_1[1];
      local_188 = (undefined **)FUN_7103238e70(uVar27,0x13);
      if (((ulong)local_188 & 0xffffffffff) != 0) {
        lVar26 = *plVar29;
        ppppppppplVar15 = (long *********)(long)*(int *)(lVar26 + 0x70);
        ppppbVar17 = (byte ****)(ulong)*(uint *)(lVar26 + 0x68);
        FUN_710323c4e0(lVar26,(ulong *)&local_188,ppppppppplVar15,ppppbVar17,param_5,param_6,param_7
                       ,param_8);
      }
      plVar29 = FUN_710323f760((long *)param_1[1],uVar27,(long ****)ppppppppplVar15,ppppbVar17,
                               param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_188,(long)&local_e8,(byte ****)"set_parts_it_skill",ppppppppplVar15,
                     ppppbVar17,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_248,(long)&local_188,(long ****)"set_pic_icon",ppppppppplVar15,
                     ppppbVar17,param_5,param_6,param_7,param_8);
      uVar27 = local_240[0];
      FUN_7103778b80(local_240[0],(long)plVar29,ppppppppplVar15,ppppbVar17,param_5,param_6,param_7,
                     param_8);
      local_248 = &PTR_FUN_710523d9a8;
      local_240[0] = 0;
      if (uVar27 != 0) {
        FUN_710392eb40(uVar27);
      }
      FUN_7103776910(&local_248,(long)&local_188,(long ****)"set_txt_help",ppppppppplVar15,
                     ppppbVar17,param_5,param_6,param_7,param_8);
      FUN_710377a120((long)&local_248,(char *)local_128,ppppppppplVar15,ppppbVar17,param_5,param_6,
                     param_7,param_8);
      uVar27 = local_240[0];
      local_248 = &PTR_FUN_710523d9a8;
      local_240[0] = 0;
      if (uVar27 != 0) {
        FUN_710392eb40(uVar27);
      }
      pbVar7 = local_180;
      local_188 = &PTR_FUN_710523d988;
      local_180 = (byte *)0x0;
      goto joined_r0x007101e07850;
    }
    FUN_7103778300(0x3f800000,local_e0,0x7104348100);
  }
  else {
    lVar26 = *(long *)(lVar24 + 0x1d8);
    uVar4 = *(ushort *)(lVar26 + lVar28 * 2 + 0x60);
    uVar8 = (int)((ulong)(*(long *)(lVar26 + 0x28) - *(long *)(lVar26 + 0x20)) >> 6) * -0x33333333;
    if (((uVar8 <= uVar4) ||
        (uVar4 = *(ushort *)(lVar26 + (ulong)uVar4 * 2 + 0x1000), uVar8 <= uVar4)) ||
       (*(short *)(*(long *)(lVar26 + 0x20) + (ulong)uVar4 * 0x140) == -1)) goto LAB_7101e07720;
    FUN_7103778300(0x3f800000,local_e0,0x710438b28f);
    FUN_7103778300(0x3f800000,local_e0,0x710437a53a);
    plVar29 = (long *)param_1[1];
    local_130 = (undefined **)FUN_7103238e70(0x71ffff14e11d26c7,0x13);
    if (((ulong)local_130 & 0xffffffffff) != 0) {
      lVar26 = *plVar29;
      ppppppppplVar15 = (long *********)(long)*(int *)(lVar26 + 0x70);
      ppppbVar17 = (byte ****)(ulong)*(uint *)(lVar26 + 0x68);
      FUN_710323c4e0(lVar26,(ulong *)&local_130,ppppppppplVar15,ppppbVar17,param_5,param_6,param_7,
                     param_8);
    }
    plVar29 = FUN_710323f760((long *)param_1[1],0x71ffff14e11d26c7,(long ****)ppppppppplVar15,
                             ppppbVar17,param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_130,(long)&local_e8,(byte ****)"set_parts_it_skill",ppppppppplVar15,
                   ppppbVar17,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_188,(long)&local_130,(long ****)"set_pic_icon",ppppppppplVar15,ppppbVar17,
                   param_5,param_6,param_7,param_8);
    pbVar7 = local_180;
    FUN_7103778b80((long)local_180,(long)plVar29,ppppppppplVar15,ppppbVar17,param_5,param_6,param_7,
                   param_8);
    local_188 = &PTR_FUN_710523d9a8;
    local_180 = (byte *)0x0;
    if (pbVar7 != (byte *)0x0) {
      FUN_710392eb40((ulong)pbVar7);
    }
    FUN_7103776910(&local_188,(long)&local_130,(long ****)"set_txt_help",ppppppppplVar15,ppppbVar17,
                   param_5,param_6,param_7,param_8);
    FUN_710377a120((long)&local_188,"mnu_spirits_select_grade_up_99",ppppppppplVar15,ppppbVar17,
                   param_5,param_6,param_7,param_8);
    pbVar7 = local_180;
    local_188 = &PTR_FUN_710523d9a8;
    local_180 = (byte *)0x0;
    if (pbVar7 != (byte *)0x0) {
      FUN_710392eb40((ulong)pbVar7);
    }
    pbVar7 = local_128[0];
    local_130 = &PTR_FUN_710523d988;
    local_128[0] = (byte *)0x0;
joined_r0x007101e07850:
    if (pbVar7 != (byte *)0x0) {
      uVar27 = *(ulong *)(pbVar7 + 0x18);
      *(undefined ***)(pbVar7 + 0x10) = &PTR_FUN_710523d9a8;
      pbVar7[0x18] = 0;
      pbVar7[0x19] = 0;
      pbVar7[0x1a] = 0;
      pbVar7[0x1b] = 0;
      pbVar7[0x1c] = 0;
      pbVar7[0x1d] = 0;
      pbVar7[0x1e] = 0;
      pbVar7[0x1f] = 0;
      if (uVar27 != 0) {
        FUN_710392eb40(uVar27);
      }
      FUN_710392eb40((ulong)pbVar7);
    }
  }
  uVar5 = (undefined1)(0x20301 >> (ulong)((local_d8[0] - 1 & 3) << 3));
  if (2 < local_d8[0] - 1) {
    uVar5 = 0;
  }
  ppppppppplVar15 = (long *********)0x0;
  FUN_710339dde0((uint *)&local_130,uVar5,'\0');
  FUN_7103776640(&local_140,(long)ppuVar1,(byte ****)"set_parts_individual",ppppppppplVar15,
                 ppppbVar17,param_5,param_6,param_7,param_8);
  uVar27 = local_138;
  if ((ushort)local_c0 == 0) {
    FUN_7103778300(0x3f800000,local_138,0x7104348100);
  }
  else {
    FUN_7103778300(0x3f800000,local_138,0x710438b28f);
    FUN_7103778300(0x3f800000,local_138,(long)local_128);
    ppppppppplVar15 = (long *********)(local_c0 & 0xffff);
    FUN_71032a0c90((uint *)&local_188,lVar23,(ushort)local_c0,ppppbVar17,param_5,param_6,param_7,
                   param_8);
    FUN_7103776290(&local_248,extraout_x1,(long ****)ppppppppplVar15,ppppbVar17,param_5,param_6,
                   param_7,param_8);
    switch(local_d8[0]) {
    case 0:
      pcVar14 = "set_parts_it_non_00";
      break;
    default:
      pcVar14 = "set_parts_it_offense_00";
      break;
    case 2:
      pcVar14 = "set_parts_it_throw_00";
      break;
    case 3:
      pcVar14 = "set_parts_it_defense_00";
    }
    FUN_7103776640(&local_198,(long)&local_140,(byte ****)pcVar14,ppppppppplVar15,ppppbVar17,param_5
                   ,param_6,param_7,param_8);
    uVar31 = local_190;
    uVar10 = local_240[0];
    local_190 = 0;
    local_240[0] = uVar31;
    if (uVar10 != 0) {
      uVar9 = *(ulong *)(uVar10 + 0x18);
      *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar10 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40(uVar10);
    }
    local_198 = &PTR_FUN_710523d988;
    local_190 = 0;
    uVar10 = FUN_71032a1630(*(long *)(lVar24 + 0x218),(ushort)local_c0);
    plVar29 = (long *)param_1[1];
    local_198 = (undefined **)FUN_7103238e70(uVar10,0x13);
    if (((ulong)local_198 & 0xffffffffff) != 0) {
      lVar26 = *plVar29;
      ppppppppplVar15 = (long *********)(long)*(int *)(lVar26 + 0x70);
      ppppbVar17 = (byte ****)(ulong)*(uint *)(lVar26 + 0x68);
      FUN_710323c4e0(lVar26,(ulong *)&local_198,ppppppppplVar15,ppppbVar17,param_5,param_6,param_7,
                     param_8);
    }
    plVar29 = FUN_710323f760((long *)param_1[1],uVar10,(long ****)ppppppppplVar15,ppppbVar17,param_5
                             ,param_6,param_7,param_8);
    FUN_7103776910(&local_198,(long)&local_248,(long ****)"set_pic_icon",ppppppppplVar15,ppppbVar17,
                   param_5,param_6,param_7,param_8);
    uVar10 = local_190;
    FUN_7103778b80(local_190,(long)plVar29,ppppppppplVar15,ppppbVar17,param_5,param_6,param_7,
                   param_8);
    local_198 = &PTR_FUN_710523d9a8;
    local_190 = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_7103776910(&local_198,(long)&local_248,(long ****)"set_txt_help",ppppppppplVar15,ppppbVar17,
                   param_5,param_6,param_7,param_8);
    FUN_710377a120((long)&local_198,(char *)&local_180,ppppppppplVar15,ppppbVar17,param_5,param_6,
                   param_7,param_8);
    uVar10 = local_190;
    local_198 = &PTR_FUN_710523d9a8;
    local_190 = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    local_248 = &PTR_FUN_710523d988;
    local_240[0] = 0;
    if (uVar31 != 0) {
      uVar10 = *(ulong *)(uVar31 + 0x18);
      *(undefined ***)(uVar31 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar31 + 0x18) = 0;
      if (uVar10 != 0) {
        FUN_710392eb40(uVar10);
      }
      FUN_710392eb40(uVar31);
    }
  }
  uVar8 = FUN_71025cb980((long)local_d8);
  lVar26 = *(long *)(lVar24 + 0x1d8);
  uVar31 = (ulong)uVar8;
  uVar10 = FUN_71032a9470(lVar26,uVar3);
  uVar8 = FUN_71032a7800(lVar26,uVar10 & 0xffffffffff);
  if (uVar8 < (uint)((int)((ulong)(*(long *)(lVar26 + 0x28) - *(long *)(lVar26 + 0x20)) >> 6) *
                    -0x33333333)) {
    uVar10 = *(ulong *)(*(long *)(lVar26 + 0x20) + (ulong)uVar8 * 0x140 + 0x60);
  }
  else {
    uVar10 = 0x2dffff0000000000;
  }
  lVar26 = *(long *)(DAT_710532f730 + 8);
  FUN_7103776640(&local_198,(long)ppuVar1,(byte ****)"set_parts_series",ppppppppplVar15,ppppbVar17,
                 param_5,param_6,param_7,param_8);
  uVar9 = FUN_710329a390(*(long *)(*(long *)(lVar26 + 0x188) + 8),0xda9120d1c);
  if ((((uVar10 & 0xff00000000000000) == 0x2d00000000000000) && ((uVar10 & 0xffffffffff) != 0)) &&
     (((uVar9 & 0xff00000000000000) == 0x2d00000000000000 && ((uVar9 & 0xffffffffff) != 0)))) {
    if (((uVar9 ^ uVar10) & 0xffffffffff) != 0) goto LAB_7101e07b80;
LAB_7101e07c20:
    uVar10 = local_190;
    if ((*(long *)(local_190 + 8) != 0) &&
       (lVar28 = *(long *)(*(long *)(local_190 + 8) + 0x18), lVar28 != 0)) {
      *(byte *)(lVar28 + 0x58) = *(byte *)(lVar28 + 0x58) & 0xfe;
    }
  }
  else {
    if (((uVar9 & 0xffffffffff) != 0 && (uVar9 & 0xff00000000000000) == 0x2d00000000000000) ==
        ((uVar10 & 0xff00000000000000) == 0x2d00000000000000 && (uVar10 & 0xffffffffff) != 0))
    goto LAB_7101e07c20;
LAB_7101e07b80:
    plVar29 = (long *)param_1[1];
    local_188 = (undefined **)FUN_7103238d60(uVar10,0x11);
    if (((ulong)local_188 & 0xffffffffff) != 0) {
      lVar26 = *plVar29;
      ppppbVar17 = (byte ****)(ulong)*(uint *)(lVar26 + 0x68);
      FUN_710323c4e0(lVar26,(ulong *)&local_188,(long *********)(long)*(int *)(lVar26 + 0x70),
                     ppppbVar17,param_5,param_6,param_7,param_8);
    }
    ppppppppplVar15 = (long *********)&DAT_00000011;
    plVar29 = FUN_710323f600((long *)param_1[1],uVar10,(long ****)&DAT_00000011,ppppbVar17,param_5,
                             param_6,param_7,param_8);
    lVar26 = *(long *)(lVar24 + 0x1d8);
    if (uVar3 == 0xffff) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (ulong)*(ushort *)(lVar26 + lVar28 * 2 + 0x60);
    }
    uVar9 = (*(long *)(lVar26 + 0x28) - *(long *)(lVar26 + 0x20) >> 6) * -0x3333333333333333;
    puVar20 = (undefined2 *)(*(long *)(lVar26 + 0x20) + uVar10 * 0x140);
    if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
      puVar20 = &DAT_7105182b08;
    }
    FUN_7103776910(&local_188,(long)&local_198,(long ****)"set_rep_series",ppppppppplVar15,
                   ppppbVar17,param_5,param_6,param_7,param_8);
    pbVar7 = local_180;
    FUN_7103778b80((long)local_180,(long)plVar29,ppppppppplVar15,ppppbVar17,param_5,param_6,param_7,
                   param_8);
    local_188 = &PTR_FUN_710523d9a8;
    local_180 = (byte *)0x0;
    if (pbVar7 != (byte *)0x0) {
      FUN_710392eb40((ulong)pbVar7);
    }
    uVar10 = local_190;
    switch(*(undefined1 *)(puVar20 + 0x36)) {
    case 0:
      pcVar14 = "spirit_attacker_non";
      break;
    case 1:
      pcVar14 = "spirit_attacker_offense";
      break;
    case 2:
      pcVar14 = "spirit_attacker_throw";
      break;
    case 3:
      pcVar14 = "spirit_attacker_defense";
      break;
    default:
      lVar28 = *(long *)(local_190 + 8);
      if (lVar28 == 0) goto LAB_7101e07d4c;
      goto LAB_7101e07d38;
    }
    FUN_7103778300(0x3f800000,local_190,(long)pcVar14);
    lVar28 = *(long *)(uVar10 + 8);
    if (lVar28 != 0) {
LAB_7101e07d38:
      lVar28 = *(long *)(lVar28 + 0x18);
      if (lVar28 != 0) {
        *(byte *)(lVar28 + 0x58) = *(byte *)(lVar28 + 0x58) | 1;
      }
    }
  }
LAB_7101e07d4c:
  ppuVar30 = param_1 + 1;
  FUN_7103776640(&local_188,(long)ppuVar1,(byte ****)"set_parts_set_power",ppppppppplVar15,
                 ppppbVar17,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_248,(long)&local_188,(long ****)"set_txt_power",ppppppppplVar15,ppppbVar17,
                 param_5,param_6,param_7,param_8);
  uVar16 = 1;
  uVar12 = uVar31;
  FUN_710377a280((long)&local_248,(byte *)"mnu_spirits_setorg_sel_strength_n",1);
  uVar9 = local_240[0];
  local_248 = &PTR_FUN_710523d9a8;
  local_240[0] = 0;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
  }
  FUN_7103776910(&local_248,(long)&local_188,(long ****)"set_txt_power_sdw",uVar16,uVar12,param_5,
                 param_6,param_7,param_8);
  uVar16 = 1;
  FUN_710377a280((long)&local_248,(byte *)"mnu_spirits_setorg_sel_strength_n",1);
  uVar9 = local_240[0];
  local_248 = &PTR_FUN_710523d9a8;
  local_240[0] = 0;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
  }
  pbVar7 = local_180;
  FUN_7103778300(0x3f800000,(long)local_180,(long)local_128);
  FUN_7103776640(&local_248,(long)&local_188,(byte ****)"set_parts_atr",uVar16,uVar31,param_5,
                 param_6,param_7,param_8);
  uVar16 = 0xffffffff;
  uVar18 = 0;
  pppplVar19 = (long ****)0x0;
  FUN_71025b12c0((long)&local_248,uVar5,-1,0,0,param_6,param_7,param_8);
  FUN_7103776910(&local_1a8,(long)&local_188,(long ****)"set_txt_offense",uVar16,uVar18,pppplVar19,
                 param_6,param_7,param_8);
  uVar9 = (ulong)(uint)(int)(float)local_d4;
  uVar16 = 1;
  FUN_710377a280((long)&local_1a8,(byte *)"mnu_spirits_setorg_org_attack_n",1);
  uVar31 = local_1a0;
  local_1a8 = &PTR_FUN_710523d9a8;
  local_1a0 = 0;
  if (uVar31 != 0) {
    FUN_710392eb40(uVar31);
  }
  FUN_7103776910(&local_1a8,(long)&local_188,(long ****)"set_txt_defense",uVar16,uVar9,pppplVar19,
                 param_6,param_7,param_8);
  fVar37 = local_d4._4_4_;
  ppppbVar17 = (byte ****)(ulong)(uint)(int)local_d4._4_4_;
  uVar16 = 1;
  FUN_710377a280((long)&local_1a8,(byte *)"mnu_spirits_setorg_org_defense_n",1);
  uVar31 = local_1a0;
  local_1a8 = &PTR_FUN_710523d9a8;
  local_1a0 = 0;
  if (uVar31 != 0) {
    FUN_710392eb40(uVar31);
    fVar37 = local_d4._4_4_;
  }
  fVar35 = fVar37 / 10000.0;
  if (fVar37 <= (float)local_d4) {
    fVar37 = (float)local_d4;
  }
  fVar36 = fVar35;
  if (1.0 < fVar35) {
    fVar36 = 1.0;
  }
  fVar34 = (float)local_d4 / 10000.0;
  fVar33 = fVar34;
  if (1.0 < fVar34) {
    fVar33 = 1.0;
  }
  fVar32 = 0.0;
  if (0.0 <= fVar34) {
    fVar32 = fVar33;
  }
  fVar33 = 0.0;
  if (0.0 <= fVar35) {
    fVar33 = fVar36;
  }
  if (1.0 <= fVar37) {
    if (10000.0 < fVar37) {
      fVar37 = 10000.0;
    }
    fVar37 = fVar37 / 10000.0;
  }
  else {
    fVar37 = 0.0001;
  }
  fVar35 = *(float *)(*DAT_7105329fa0 + 0x2d0);
  if (*(float *)(*DAT_7105329fa0 + 0x2d0) <= 0.001) {
    fVar35 = 0.001;
  }
  fVar36 = powf(ABS(1.0 - fVar37),fVar35);
  fVar35 = powf(fVar37,1.0 / fVar35);
  fVar37 = (((1.0 - fVar36) + fVar35) * 0.5) / fVar37;
  fVar32 = fVar32 * fVar37;
  fVar33 = fVar33 * fVar37;
  fVar37 = fVar32;
  if (1.0 < fVar32) {
    fVar37 = 1.0;
  }
  fVar35 = fVar33;
  if (1.0 < fVar33) {
    fVar35 = 1.0;
  }
  FUN_7103776910(&local_1a8,(long)&local_188,(long ****)"set_bar_offense",uVar16,ppppbVar17,
                 pppplVar19,param_6,param_7,param_8);
  FUN_7103776910(&local_1b8,(long)&local_188,(long ****)"set_bar_offense_sdw",uVar16,ppppbVar17,
                 pppplVar19,param_6,param_7,param_8);
  FUN_7103776910(&local_1c8,(long)&local_188,(long ****)"set_bar_defense",uVar16,ppppbVar17,
                 pppplVar19,param_6,param_7,param_8);
  FUN_7103776910(&local_1d8,(long)&local_188,(long ****)"set_bar_defense_sdw",uVar16,ppppbVar17,
                 pppplVar19,param_6,param_7,param_8);
  uVar31 = local_1a0;
  if (*(long **)(local_1a0 + 8) == (long *)0x0) {
    uVar9 = _ConstantZero;
    if (((*(long *)(local_1a0 + 0x18) != 0) &&
        (lVar28 = *(long *)(*(long *)(local_1a0 + 0x18) + 0x118), lVar28 != 0)) &&
       ((*(byte *)(lVar28 + 0x14) & 3) != 0)) {
      plVar29 = *(long **)(*(long *)(lVar28 + 0x18) + 8);
      goto joined_r0x007101e08038;
    }
  }
  else {
    lVar28 = FUN_71000597e0(*(long **)(local_1a0 + 8));
    uVar9 = _ConstantZero;
    if ((lVar28 != 0) && ((*(byte *)(lVar28 + 0x14) & 3) != 0)) {
      plVar29 = *(long **)(*(long *)(lVar28 + 0x18) + 8);
joined_r0x007101e08038:
      _ConstantZero = uVar9;
      if (plVar29 != (long *)0x0) {
        (**(code **)(*plVar29 + 0x20))(&local_1f0);
        uVar8 = NEON_ucvtf((uint)local_1f0 & 0xffff);
        NEON_ucvtf((uint)local_1f0 >> 0x10);
        uVar9 = (ulong)uVar8;
      }
    }
  }
  uStack_1e8 = uRam0000007107459008;
  fVar36 = 0.93;
  if (0.0 <= fVar32) {
    fVar36 = 1.0 - (fVar37 * 0.93 + 0.07);
  }
  local_1f0 = CONCAT44((int)(_ConstantZero >> 0x20),-(fVar36 * (float)uVar9));
  FUN_7103779770(1.0,uVar31,&local_1f0);
  uVar11 = local_1b0;
  FUN_7103779770(1.0,local_1b0,&local_1f0);
  uVar12 = local_1c0;
  fVar37 = 0.93;
  if (0.0 <= fVar33) {
    fVar37 = 1.0 - (fVar35 * 0.93 + 0.07);
  }
  uStack_1f8 = uRam0000007107459008;
  local_200 = CONCAT44((int)(_ConstantZero >> 0x20),-(fVar37 * (float)uVar9));
  FUN_7103779770(1.0,local_1c0,&local_200);
  uVar9 = local_1d0;
  FUN_7103779770(1.0,local_1d0,&local_200);
  local_1d8 = &PTR_FUN_710523d9a8;
  local_1d0 = 0;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
  }
  local_1c8 = &PTR_FUN_710523d9a8;
  local_1c0 = 0;
  if (uVar12 != 0) {
    FUN_710392eb40(uVar12);
  }
  local_1b8 = &PTR_FUN_710523d9a8;
  local_1b0 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  local_1a8 = &PTR_FUN_710523d9a8;
  local_1a0 = 0;
  if (uVar31 != 0) {
    FUN_710392eb40(uVar31);
  }
  uVar31 = local_240[0];
  local_248 = &PTR_FUN_710523d988;
  local_240[0] = 0;
  if (uVar31 != 0) {
    uVar9 = *(ulong *)(uVar31 + 0x18);
    *(undefined ***)(uVar31 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar31 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar31);
  }
  local_188 = &PTR_FUN_710523d988;
  local_180 = (byte *)0x0;
  if (pbVar7 != (byte *)0x0) {
    uVar31 = *(ulong *)(pbVar7 + 0x18);
    *(undefined ***)(pbVar7 + 0x10) = &PTR_FUN_710523d9a8;
    pbVar7[0x18] = 0;
    pbVar7[0x19] = 0;
    pbVar7[0x1a] = 0;
    pbVar7[0x1b] = 0;
    pbVar7[0x1c] = 0;
    pbVar7[0x1d] = 0;
    pbVar7[0x1e] = 0;
    pbVar7[0x1f] = 0;
    if (uVar31 != 0) {
      FUN_710392eb40(uVar31);
    }
    FUN_710392eb40((ulong)pbVar7);
  }
  uVar16 = 0;
  FUN_7103776640(&local_1a8,(long)ppuVar1,(byte ****)"set_parts_skill_%02d",0,ppppbVar17,pppplVar19,
                 param_6,param_7,param_8);
  uVar31 = local_1a0;
  uVar3 = local_c0._4_2_;
  ppppppppplVar15 = (long *********)(ulong)local_c0._4_2_;
  if (local_c0._4_2_ == 0) {
    FUN_7103778300(0x3f800000,local_1a0,0x7104348100);
    uVar8 = 0;
  }
  else {
    FUN_7103778300(0x3f800000,local_1a0,0x710438b28f);
    uVar31 = FUN_71032a0fd0(*(long *)(lVar24 + 0x218),uVar3);
    uVar8 = (uint)uVar31;
    FUN_71003a4ca0((uint *)&local_188,"cost_%02d",(ulong)(uVar8 & 0xff),uVar16,ppppbVar17,pppplVar19
                   ,param_6,param_7,param_8);
    uVar31 = local_1a0;
    FUN_7103778300(0x3f800000,local_1a0,(long)&local_180);
    FUN_71032a0c90((uint *)&local_248,lVar23,uVar3,ppppbVar17,pppplVar19,param_6,param_7,param_8);
    uVar9 = FUN_71032a1630(*(long *)(lVar24 + 0x218),uVar3);
    plVar29 = (long *)*ppuVar30;
    local_1b8 = (undefined **)FUN_7103238e70(uVar9,0x13);
    if (((ulong)local_1b8 & 0xffffffffff) != 0) {
      lVar28 = *plVar29;
      ppppppppplVar15 = (long *********)(long)*(int *)(lVar28 + 0x70);
      ppppbVar17 = (byte ****)(ulong)*(uint *)(lVar28 + 0x68);
      FUN_710323c4e0(lVar28,(ulong *)&local_1b8,ppppppppplVar15,ppppbVar17,pppplVar19,param_6,
                     param_7,param_8);
    }
    FUN_7103776640(&local_1c8,(long)&local_1a8,(byte ****)"set_parts_skill",ppppppppplVar15,
                   ppppbVar17,pppplVar19,param_6,param_7,param_8);
    FUN_7103776910(&local_1b8,(long)&local_1c8,(long ****)"set_txt_help",ppppppppplVar15,ppppbVar17,
                   pppplVar19,param_6,param_7,param_8);
    uVar12 = local_1c0;
    local_1c8 = &PTR_FUN_710523d988;
    local_1c0 = 0;
    if (uVar12 != 0) {
      uVar11 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar12);
    }
    FUN_710377a120((long)&local_1b8,(char *)local_240,ppppppppplVar15,ppppbVar17,pppplVar19,param_6,
                   param_7,param_8);
    FUN_7103776640(&local_1d8,(long)&local_1a8,(byte ****)"set_parts_skill",ppppppppplVar15,
                   ppppbVar17,pppplVar19,param_6,param_7,param_8);
    FUN_7103776910(&local_1c8,(long)&local_1d8,(long ****)"set_pic_icon",ppppppppplVar15,ppppbVar17,
                   pppplVar19,param_6,param_7,param_8);
    uVar12 = local_1d0;
    local_1d8 = &PTR_FUN_710523d988;
    local_1d0 = 0;
    if (uVar12 != 0) {
      uVar11 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar12);
    }
    plVar29 = FUN_710323f760((long *)*ppuVar30,uVar9,(long ****)ppppppppplVar15,ppppbVar17,
                             pppplVar19,param_6,param_7,param_8);
    uVar9 = local_1c0;
    FUN_7103778b80(local_1c0,(long)plVar29,ppppppppplVar15,ppppbVar17,pppplVar19,param_6,param_7,
                   param_8);
    local_1c8 = &PTR_FUN_710523d9a8;
    local_1c0 = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = local_1b0;
    local_1b8 = &PTR_FUN_710523d9a8;
    local_1b0 = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  local_1a0 = 0;
  local_1a8 = &PTR_FUN_710523d988;
  if (uVar31 != 0) {
    local_1a0 = 0;
    local_1a8 = &PTR_FUN_710523d988;
    uVar9 = *(ulong *)(uVar31 + 0x18);
    *(undefined ***)(uVar31 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar31 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar31);
  }
  uVar16 = 1;
  FUN_7103776640(&local_1a8,(long)ppuVar1,(byte ****)"set_parts_skill_%02d",1,ppppbVar17,pppplVar19,
                 param_6,param_7,param_8);
  uVar31 = local_1a0;
  if ((uVar8 & 0xff) == 1) {
    uVar3 = local_c0._6_2_;
    ppppppppplVar15 = (long *********)(ulong)local_c0._6_2_;
    if (local_c0._6_2_ != 0) {
      FUN_7103778300(0x3f800000,local_1a0,0x710438b28f);
      uVar9 = FUN_71032a0fd0(*(long *)(lVar24 + 0x218),uVar3);
      FUN_71003a4ca0((uint *)&local_188,"cost_%02d",(ulong)((uint)uVar9 & 0xff),uVar16,ppppbVar17,
                     pppplVar19,param_6,param_7,param_8);
      uVar31 = local_1a0;
      FUN_7103778300(0x3f800000,local_1a0,(long)&local_180);
      FUN_71032a0c90((uint *)&local_248,lVar23,uVar3,ppppbVar17,pppplVar19,param_6,param_7,param_8);
      uVar12 = FUN_71032a1630(*(long *)(lVar24 + 0x218),uVar3);
      plVar29 = (long *)*ppuVar30;
      local_1b8 = (undefined **)FUN_7103238e70(uVar12,0x13);
      if (((ulong)local_1b8 & 0xffffffffff) != 0) {
        lVar28 = *plVar29;
        ppppppppplVar15 = (long *********)(long)*(int *)(lVar28 + 0x70);
        ppppbVar17 = (byte ****)(ulong)*(uint *)(lVar28 + 0x68);
        FUN_710323c4e0(lVar28,(ulong *)&local_1b8,ppppppppplVar15,ppppbVar17,pppplVar19,param_6,
                       param_7,param_8);
      }
      FUN_7103776640(&local_1c8,(long)&local_1a8,(byte ****)"set_parts_skill",ppppppppplVar15,
                     ppppbVar17,pppplVar19,param_6,param_7,param_8);
      FUN_7103776910(&local_1b8,(long)&local_1c8,(long ****)"set_txt_help",ppppppppplVar15,
                     ppppbVar17,pppplVar19,param_6,param_7,param_8);
      uVar11 = local_1c0;
      local_1c8 = &PTR_FUN_710523d988;
      local_1c0 = 0;
      if (uVar11 != 0) {
        uVar13 = *(ulong *)(uVar11 + 0x18);
        *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar11 + 0x18) = 0;
        if (uVar13 != 0) {
          FUN_710392eb40(uVar13);
        }
        FUN_710392eb40(uVar11);
      }
      FUN_710377a120((long)&local_1b8,(char *)local_240,ppppppppplVar15,ppppbVar17,pppplVar19,
                     param_6,param_7,param_8);
      FUN_7103776640(&local_1d8,(long)&local_1a8,(byte ****)"set_parts_skill",ppppppppplVar15,
                     ppppbVar17,pppplVar19,param_6,param_7,param_8);
      FUN_7103776910(&local_1c8,(long)&local_1d8,(long ****)"set_pic_icon",ppppppppplVar15,
                     ppppbVar17,pppplVar19,param_6,param_7,param_8);
      uVar11 = local_1d0;
      local_1d8 = &PTR_FUN_710523d988;
      local_1d0 = 0;
      if (uVar11 != 0) {
        uVar13 = *(ulong *)(uVar11 + 0x18);
        *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar11 + 0x18) = 0;
        if (uVar13 != 0) {
          FUN_710392eb40(uVar13);
        }
        FUN_710392eb40(uVar11);
      }
      plVar29 = FUN_710323f760((long *)*ppuVar30,uVar12,(long ****)ppppppppplVar15,ppppbVar17,
                               pppplVar19,param_6,param_7,param_8);
      uVar12 = local_1c0;
      FUN_7103778b80(local_1c0,(long)plVar29,ppppppppplVar15,ppppbVar17,pppplVar19,param_6,param_7,
                     param_8);
      local_1c8 = &PTR_FUN_710523d9a8;
      local_1c0 = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      uVar12 = local_1b0;
      uVar8 = (uint)uVar9 + 1;
      local_1b8 = &PTR_FUN_710523d9a8;
      local_1b0 = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      goto joined_r0x007101e08570;
    }
  }
  FUN_7103778300(0x3f800000,local_1a0,0x7104348100);
joined_r0x007101e08570:
  local_1a0 = 0;
  local_1a8 = &PTR_FUN_710523d988;
  if (uVar31 != 0) {
    local_1a0 = 0;
    local_1a8 = &PTR_FUN_710523d988;
    uVar9 = *(ulong *)(uVar31 + 0x18);
    *(undefined ***)(uVar31 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar31 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar31);
  }
  uVar16 = 2;
  FUN_7103776640(&local_1a8,(long)ppuVar1,(byte ****)"set_parts_skill_%02d",2,ppppbVar17,pppplVar19,
                 param_6,param_7,param_8);
  uVar3 = local_b8;
  uVar31 = local_1a0;
  if (((uVar8 & 0xff) == 2) && (ppppppppplVar15 = (long *********)(ulong)local_b8, local_b8 != 0)) {
    FUN_7103778300(0x3f800000,local_1a0,0x710438b28f);
    uVar9 = FUN_71032a0fd0(*(long *)(lVar24 + 0x218),uVar3);
    FUN_71003a4ca0((uint *)&local_188,"cost_%02d",(ulong)((uint)uVar9 & 0xff),uVar16,ppppbVar17,
                   pppplVar19,param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,uVar31,(long)&local_180);
    FUN_71032a0c90((uint *)&local_248,lVar23,uVar3,ppppbVar17,pppplVar19,param_6,param_7,param_8);
    uVar9 = FUN_71032a1630(*(long *)(lVar24 + 0x218),uVar3);
    plVar29 = (long *)*ppuVar30;
    local_1b8 = (undefined **)FUN_7103238e70(uVar9,0x13);
    if (((ulong)local_1b8 & 0xffffffffff) != 0) {
      lVar28 = *plVar29;
      ppppppppplVar15 = (long *********)(long)*(int *)(lVar28 + 0x70);
      ppppbVar17 = (byte ****)(ulong)*(uint *)(lVar28 + 0x68);
      FUN_710323c4e0(lVar28,(ulong *)&local_1b8,ppppppppplVar15,ppppbVar17,pppplVar19,param_6,
                     param_7,param_8);
    }
    FUN_7103776640(&local_1c8,(long)&local_1a8,(byte ****)"set_parts_skill",ppppppppplVar15,
                   ppppbVar17,pppplVar19,param_6,param_7,param_8);
    FUN_7103776910(&local_1b8,(long)&local_1c8,(long ****)"set_txt_help",ppppppppplVar15,ppppbVar17,
                   pppplVar19,param_6,param_7,param_8);
    uVar12 = local_1c0;
    local_1c8 = &PTR_FUN_710523d988;
    local_1c0 = 0;
    if (uVar12 != 0) {
      uVar11 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar12);
    }
    FUN_710377a120((long)&local_1b8,(char *)local_240,ppppppppplVar15,ppppbVar17,pppplVar19,param_6,
                   param_7,param_8);
    FUN_7103776640(&local_1d8,(long)&local_1a8,(byte ****)"set_parts_skill",ppppppppplVar15,
                   ppppbVar17,pppplVar19,param_6,param_7,param_8);
    FUN_7103776910(&local_1c8,(long)&local_1d8,(long ****)"set_pic_icon",ppppppppplVar15,ppppbVar17,
                   pppplVar19,param_6,param_7,param_8);
    uVar12 = local_1d0;
    local_1d8 = &PTR_FUN_710523d988;
    local_1d0 = 0;
    if (uVar12 != 0) {
      uVar11 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar12);
    }
    plVar29 = FUN_710323f760((long *)*ppuVar30,uVar9,(long ****)ppppppppplVar15,ppppbVar17,
                             pppplVar19,param_6,param_7,param_8);
    uVar9 = local_1c0;
    FUN_7103778b80(local_1c0,(long)plVar29,ppppppppplVar15,ppppbVar17,pppplVar19,param_6,param_7,
                   param_8);
    local_1c8 = &PTR_FUN_710523d9a8;
    local_1c0 = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar9 = local_1b0;
    local_1b8 = &PTR_FUN_710523d9a8;
    local_1b0 = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  else {
    FUN_7103778300(0x3f800000,local_1a0,0x7104348100);
  }
  local_1a0 = 0;
  local_1a8 = &PTR_FUN_710523d988;
  if (uVar31 != 0) {
    local_1a0 = 0;
    local_1a8 = &PTR_FUN_710523d988;
    uVar9 = *(ulong *)(uVar31 + 0x18);
    *(undefined ***)(uVar31 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar31 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar31);
  }
  local_180 = local_d8;
  local_170 = &local_1a8;
  local_1a8 = (undefined **)((ulong)local_1a8 & 0xffffffff00000000);
  local_188 = param_1;
  local_178 = lVar23;
  FUN_7101e08870(&local_188,(ushort)local_a0,0,ppppbVar17,pppplVar19,param_6,param_7,param_8);
  FUN_7101e08870(&local_188,local_a0._2_2_,1,ppppbVar17,pppplVar19,param_6,param_7,param_8);
  FUN_7101e08870(&local_188,local_9c,2,ppppbVar17,pppplVar19,param_6,param_7,param_8);
  if ((int)local_1a8 != 0) {
    snprintf((char *)&local_248,0x20,"view_spt_%02d",(int)local_1a8);
    FUN_7103778300(0x3f800000,(long)param_1[0xa3],(long)&local_248);
  }
  local_198 = &PTR_FUN_710523d988;
  local_190 = 0;
  if (uVar10 != 0) {
    uVar31 = *(ulong *)(uVar10 + 0x18);
    *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar10 + 0x18) = 0;
    if (uVar31 != 0) {
      FUN_710392eb40(uVar31);
    }
    FUN_710392eb40(uVar10);
  }
  local_140 = &PTR_FUN_710523d988;
  local_138 = 0;
  if (uVar27 != 0) {
    uVar10 = *(ulong *)(uVar27 + 0x18);
    *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar27 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar27);
  }
  local_e8 = &PTR_FUN_710523d988;
  local_e0 = 0;
  if (uVar22 != 0) {
    uVar27 = *(ulong *)(uVar22 + 0x18);
    *(undefined ***)(uVar22 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar22 + 0x18) = 0;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
    FUN_710392eb40(uVar22);
  }
  return;
}

