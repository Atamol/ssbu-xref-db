// addr:      710143b0f0
// offset:    0x143b0f0
// name:      FUN_710143b0f0
// mangled:   
// signature: undefined __cdecl FUN_710143b0f0(undefined8 * param_1, undefined4 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710143b0f0(undefined8 *param_1,undefined4 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  long ***ppplVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined2 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  uint uVar30;
  long ****pppplVar31;
  uint uVar32;
  char cVar33;
  byte bVar34;
  long lVar35;
  uint uVar36;
  byte *pbVar37;
  undefined1 uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  undefined1 *puVar43;
  uint uVar44;
  undefined8 *puVar45;
  uint uVar46;
  uint uVar47;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined7 local_1f0;
  undefined1 uStack_1e9;
  undefined7 local_1e8;
  undefined1 uStack_1e1;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  puVar18 = (undefined8 *)FUN_710392e290(0x10,0x3c8,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar18 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8._0_4_ = 0;
      local_338 = (long ***)0x3c8;
      pppplVar31 = (long ****)&local_338;
      uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar19 & 1) != 0) &&
         (puVar18 = (undefined8 *)
                    FUN_710392e290(0x10,0x3c8,pppplVar31,param_4,param_5,param_6,param_7,param_8),
         puVar18 != (undefined8 *)0x0)) goto LAB_710143b174;
    }
    puVar18 = (undefined8 *)0x0;
  }
LAB_710143b174:
  puVar45 = puVar18 + 3;
  *puVar18 = &DAT_7105067ac8;
  puVar43 = &DAT_c1ffff0000000000;
  puVar18[1] = 0;
  puVar18[2] = 0;
  memset(puVar45,0,0x3b0);
  FUN_710143c4d0(puVar18 + 0x12);
  puVar18[0x65] = &DAT_c1ffff0000000000;
  puVar18[0x67] = &DAT_c1ffff0000000000;
  puVar18[0x69] = &DAT_c1ffff0000000000;
  puVar18[0x6b] = &DAT_c1ffff0000000000;
  puVar18[0x6d] = &DAT_c1ffff0000000000;
  puVar18[0x6f] = &DAT_c1ffff0000000000;
  puVar18[0x71] = &DAT_c1ffff0000000000;
  puVar18[0x73] = &DAT_c1ffff0000000000;
  puVar18[0x75] = &DAT_c1ffff0000000000;
  puVar18[0x77] = &DAT_c1ffff0000000000;
  *param_1 = puVar45;
  param_1[1] = puVar18;
  if (((DAT_71053144d8 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_71053144d8), iVar17 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_338);
  ppplVar14 = local_338;
  memset(puVar45,0,0x3b0);
  local_338 = (long ***)0x0;
  FUN_7103741810(ppplVar14,&local_338);
  *puVar45 = local_338;
  if (((DAT_71052b92e0 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_71052b92e0), iVar17 != 0)) {
    __cxa_guard_release(&DAT_71052b92e0);
  }
  *(undefined4 *)(puVar18 + 4) = 0xd005;
  *(undefined4 *)(puVar18 + 0xf) = param_2;
  if (((DAT_71053144d8 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_71053144d8), iVar17 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  cVar33 = '\0';
  if ((int)DAT_71053050f0 < 0x4020300) {
    if ((int)DAT_71053050f0 < 0x2040000) {
      if ((int)DAT_71053050f0 < 0x2030200) {
        if (DAT_71053050f0 == 0x2020000) {
          cVar33 = *(byte *)*DAT_71052c3628 + 9;
          if (2 < *(byte *)*DAT_71052c3628) {
            cVar33 = '\0';
          }
        }
        else if (DAT_71053050f0 == 0x2030100) {
          cVar33 = '\x01';
        }
      }
      else if (DAT_71053050f0 == 0x2030200) {
        cVar33 = '\x02';
      }
      else if (DAT_71053050f0 == 0x2030300) {
        cVar33 = '\x03';
      }
    }
    else if ((int)DAT_71053050f0 < 0x3020000) {
      if (DAT_71053050f0 == 0x2040000) {
        cVar33 = '\f';
      }
      else if (DAT_71053050f0 == 0x3010000) {
        cVar33 = '\a';
      }
    }
    else if (DAT_71053050f0 == 0x3020000) {
      cVar33 = '\b';
    }
    else if (DAT_71053050f0 == 0x4020100) {
      cVar33 = '\x04';
    }
    else if (DAT_71053050f0 == 0x4020200) {
      cVar33 = '\x05';
    }
  }
  else if ((int)DAT_71053050f0 < 0x7010100) {
    if ((int)DAT_71053050f0 < 0x4030200) {
      if (DAT_71053050f0 == 0x4020300) {
        cVar33 = '\x06';
      }
      else {
        uVar30 = 0x100;
LAB_710143b3cc:
        if (DAT_71053050f0 == (uVar30 | 0x4030000)) goto LAB_710143b3d8;
      }
    }
    else {
      if (DAT_71053050f0 != 0x4030200) {
        uVar30 = 0x300;
        goto LAB_710143b3cc;
      }
LAB_710143b3d8:
      cVar33 = '\x12';
    }
  }
  else if ((int)DAT_71053050f0 < 0x7010200) {
    if (DAT_71053050f0 + 0xf8feff00 < 3) {
LAB_710143b290:
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar17 = __cxa_guard_acquire(&DAT_71053144d8), iVar17 != 0)) {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      cVar33 = '\x0f';
      if (DAT_71052c51b0 != 0x10) {
        cVar33 = '\r';
      }
    }
  }
  else if (DAT_71053050f0 == 0x7010200) {
    cVar33 = '\x0e';
  }
  else if (DAT_71053050f0 == 0x7010300) {
    cVar33 = '\x10';
  }
  else if (DAT_71053050f0 == 0x7010400) goto LAB_710143b290;
  *(char *)((long)puVar18 + 0x7c) = cVar33;
  if (((DAT_71053144d8 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_71053144d8), iVar17 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar30 = DAT_71052c51b0 - 0xe;
  if ((uVar30 < 0x18) && ((0x8007f7U >> (ulong)(uVar30 & 0x1f) & 1) != 0)) {
    bVar34 = 2;
  }
  else {
    uVar30 = DAT_71052c51b0 - 1;
    if (uVar30 < 0x24) {
      bVar34 = (byte)(0x800000495 >> ((ulong)uVar30 & 0x3f)) & 1;
    }
    else {
      bVar34 = 0;
    }
  }
  *(byte *)((long)puVar18 + 0x7d) = bVar34;
  *(undefined1 *)((long)puVar18 + 0x7e) = DAT_71052c51b2;
  *(undefined1 *)((long)puVar18 + 0x7f) = DAT_71052c51e8;
  puVar20 = (undefined2 *)
            FUN_71037a4450((long *)*DAT_710593bc60,(byte *)"mnu_replay_data_title_default");
  *(undefined2 *)((long)puVar18 + 0x24) = *puVar20;
  *(undefined2 *)((long)puVar18 + 0x26) = puVar20[1];
  *(undefined2 *)(puVar18 + 5) = puVar20[2];
  *(undefined2 *)((long)puVar18 + 0x2a) = puVar20[3];
  *(undefined2 *)((long)puVar18 + 0x2c) = puVar20[4];
  *(undefined2 *)((long)puVar18 + 0x2e) = puVar20[5];
  *(undefined2 *)(puVar18 + 6) = puVar20[6];
  *(undefined2 *)((long)puVar18 + 0x32) = puVar20[7];
  *(undefined2 *)((long)puVar18 + 0x34) = puVar20[8];
  *(undefined2 *)((long)puVar18 + 0x36) = puVar20[9];
  *(undefined2 *)(puVar18 + 7) = puVar20[10];
  *(undefined2 *)((long)puVar18 + 0x3a) = puVar20[0xb];
  *(undefined2 *)((long)puVar18 + 0x3c) = puVar20[0xc];
  *(undefined2 *)((long)puVar18 + 0x3e) = puVar20[0xd];
  *(undefined2 *)(puVar18 + 8) = puVar20[0xe];
  *(undefined2 *)((long)puVar18 + 0x42) = puVar20[0xf];
  *(undefined2 *)((long)puVar18 + 0x44) = puVar20[0x10];
  *(undefined2 *)((long)puVar18 + 0x46) = puVar20[0x11];
  *(undefined2 *)(puVar18 + 9) = puVar20[0x12];
  *(undefined2 *)((long)puVar18 + 0x4a) = puVar20[0x13];
  *(undefined2 *)((long)puVar18 + 0x4c) = puVar20[0x14];
  *(undefined2 *)((long)puVar18 + 0x4e) = puVar20[0x15];
  *(undefined2 *)(puVar18 + 10) = puVar20[0x16];
  *(undefined2 *)((long)puVar18 + 0x52) = puVar20[0x17];
  *(undefined2 *)((long)puVar18 + 0x54) = puVar20[0x18];
  *(undefined2 *)((long)puVar18 + 0x56) = puVar20[0x19];
  *(undefined2 *)(puVar18 + 0xb) = puVar20[0x1a];
  *(undefined2 *)((long)puVar18 + 0x5a) = puVar20[0x1b];
  *(undefined2 *)((long)puVar18 + 0x5c) = puVar20[0x1c];
  *(undefined2 *)((long)puVar18 + 0x5e) = puVar20[0x1d];
  *(undefined2 *)(puVar18 + 0xc) = puVar20[0x1e];
  *(undefined2 *)((long)puVar18 + 0x62) = puVar20[0x1f];
  *(undefined2 *)((long)puVar18 + 100) = puVar20[0x20];
  *(undefined2 *)((long)puVar18 + 0x66) = puVar20[0x21];
  *(undefined2 *)(puVar18 + 0xd) = puVar20[0x22];
  *(undefined2 *)((long)puVar18 + 0x6a) = puVar20[0x23];
  *(undefined2 *)((long)puVar18 + 0x6c) = puVar20[0x24];
  *(undefined2 *)((long)puVar18 + 0x6e) = puVar20[0x25];
  *(undefined2 *)(puVar18 + 0xe) = puVar20[0x26];
  *(undefined2 *)((long)puVar18 + 0x72) = puVar20[0x27];
  *(undefined4 *)(puVar18 + 0x10) = DAT_71052c51f8;
  *(undefined4 *)((long)puVar18 + 0x84) = _DAT_71052c51fc;
  *(undefined1 *)(puVar18 + 0x11) = DAT_71052c51d9;
  *(char *)((long)puVar18 + 0x89) = (char)DAT_710523d00c;
  FUN_710143c4d0(&local_338);
  FUN_710143ad70(&local_b8,0);
  local_330 = local_b0;
  local_338 = (long ***)CONCAT44(local_b8._4_4_,(undefined4)local_b8);
  local_310 = local_90;
  local_318 = local_98;
  local_320 = local_a0;
  local_328 = local_a8;
  local_2f0 = local_70;
  local_2f8 = local_78;
  local_300 = local_80;
  local_308 = local_88;
  FUN_710143ad70(&local_b8,1);
  local_2e0 = local_b0;
  local_2e8 = CONCAT44(local_b8._4_4_,(undefined4)local_b8);
  local_2c0 = local_90;
  local_2c8 = local_98;
  local_2d0 = local_a0;
  local_2d8 = local_a8;
  local_2a0 = local_70;
  local_2a8 = local_78;
  local_2b0 = local_80;
  local_2b8 = local_88;
  FUN_710143ad70(&local_b8,2);
  local_290 = local_b0;
  local_298 = CONCAT44(local_b8._4_4_,(undefined4)local_b8);
  local_270 = local_90;
  local_278 = local_98;
  local_280 = local_a0;
  local_288 = local_a8;
  local_250 = local_70;
  local_258 = local_78;
  local_260 = local_80;
  local_268 = local_88;
  FUN_710143ad70(&local_b8,3);
  local_240 = local_b0;
  local_248 = CONCAT44(local_b8._4_4_,(undefined4)local_b8);
  local_220 = local_90;
  local_228 = local_98;
  local_230 = local_a0;
  local_238 = local_a8;
  local_200 = (undefined4)local_70;
  uStack_1fc = (undefined4)((ulong)local_70 >> 0x20);
  local_208 = (undefined4)local_78;
  uStack_204 = (undefined4)((ulong)local_78 >> 0x20);
  local_210 = local_80;
  local_218 = local_88;
  FUN_710143ad70(&local_b8,4);
  local_1f0 = (undefined7)local_b0;
  uStack_1e9 = (undefined1)((ulong)local_b0 >> 0x38);
  local_1f8 = CONCAT44(local_b8._4_4_,(undefined4)local_b8);
  local_1d0 = local_90;
  local_1d8 = local_98;
  local_1e0 = local_a0;
  local_1e8 = (undefined7)local_a8;
  uStack_1e1 = (undefined1)((ulong)local_a8 >> 0x38);
  local_1b0 = local_70;
  local_1b8 = local_78;
  local_1c0 = local_80;
  local_1c8 = local_88;
  FUN_710143ad70(&local_b8,5);
  local_1a0 = local_b0;
  local_1a8 = CONCAT44(local_b8._4_4_,(undefined4)local_b8);
  local_180 = local_90;
  local_188 = local_98;
  local_190 = local_a0;
  local_198 = local_a8;
  local_160 = local_70;
  local_168 = local_78;
  local_170 = local_80;
  local_178 = local_88;
  FUN_710143ad70(&local_b8,6);
  local_150 = local_b0;
  local_158 = CONCAT44(local_b8._4_4_,(undefined4)local_b8);
  local_130 = local_90;
  local_138 = local_98;
  local_140 = local_a0;
  local_148 = local_a8;
  local_110 = local_70;
  local_118 = local_78;
  local_120 = local_80;
  local_128 = local_88;
  FUN_710143ad70(&local_b8,7);
  local_100 = local_b0;
  local_108 = CONCAT44(local_b8._4_4_,(undefined4)local_b8);
  local_e0 = local_90;
  local_e8 = local_98;
  local_f0 = local_a0;
  local_f8 = local_a8;
  local_c0 = local_70;
  local_c8 = local_78;
  local_d0 = local_80;
  local_d8 = local_88;
  memcpy(puVar18 + 0x12,&local_338,0x280);
  if (((DAT_71053144d8 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_71053144d8), iVar17 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  puVar18[0x62] = CONCAT44(DAT_71052c5680,DAT_71052c55d0);
  local_338 = (long ***)((ulong)local_338 & 0xffff000000000000);
  if (((DAT_71053144d8 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_71053144d8), iVar17 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if ((DAT_71053050f0 & 0x7fff0000) == 0x2020000) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_71053144d8), iVar17 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (DAT_71052c51e9 == '\x03') {
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar17 = __cxa_guard_acquire(&DAT_71053144d8), iVar17 != 0)) {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      puVar21 = FUN_7103263e20(*(long *)(DAT_710532f730 + 8) + 0x160,(int)DAT_71052cadd0);
      bVar34 = DAT_71052cade1;
      puVar22 = FUN_7103263e20(*(long *)(DAT_710532f730 + 8) + 0x160,(int)DAT_71052cb038);
      bVar6 = DAT_71052cb049;
      puVar23 = FUN_7103263e20(*(long *)(DAT_710532f730 + 8) + 0x160,(int)DAT_71052cb2a0);
      bVar7 = DAT_71052cb2b1;
      puVar24 = FUN_7103263e20(*(long *)(DAT_710532f730 + 8) + 0x160,(int)DAT_71052cb508);
      bVar8 = DAT_71052cb519;
      puVar25 = FUN_7103263e20(*(long *)(DAT_710532f730 + 8) + 0x160,(int)DAT_71052cb770);
      bVar9 = DAT_71052cb781;
      puVar26 = FUN_7103263e20(*(long *)(DAT_710532f730 + 8) + 0x160,(int)DAT_71052cb9d8);
      bVar10 = DAT_71052cb9e9;
      puVar27 = FUN_7103263e20(*(long *)(DAT_710532f730 + 8) + 0x160,(int)DAT_71052cbc40);
      bVar11 = DAT_71052cbc51;
      puVar28 = FUN_7103263e20(*(long *)(DAT_710532f730 + 8) + 0x160,(int)DAT_71052cbea8);
      bVar12 = DAT_71052cbeb9;
      puVar29 = FUN_7103263e20(*(long *)(DAT_710532f730 + 8) + 0x160,(int)DAT_71052cc110);
      bVar13 = DAT_71052cc121;
      puVar43 = FUN_7103263e20(*(long *)(DAT_710532f730 + 8) + 0x160,(int)DAT_71052cc378);
      pbVar37 = &DAT_71052cc389;
      lVar35 = *DAT_71052c3628;
    }
    else {
      lVar35 = *DAT_71052c3628;
      bVar12 = *(byte *)(lVar35 + 0x10d9);
      puVar21 = *(undefined1 **)(lVar35 + 0x10);
      bVar34 = *(byte *)(lVar35 + 0x29);
      puVar22 = *(undefined1 **)(lVar35 + 0x270);
      bVar6 = *(byte *)(lVar35 + 0x289);
      puVar23 = *(undefined1 **)(lVar35 + 0x4d0);
      bVar7 = *(byte *)(lVar35 + 0x4e9);
      puVar24 = *(undefined1 **)(lVar35 + 0x730);
      bVar8 = *(byte *)(lVar35 + 0x749);
      puVar25 = *(undefined1 **)(lVar35 + 0x990);
      bVar9 = *(byte *)(lVar35 + 0x9a9);
      puVar26 = *(undefined1 **)(lVar35 + 0xc00);
      bVar10 = *(byte *)(lVar35 + 0xc19);
      puVar27 = *(undefined1 **)(lVar35 + 0xe60);
      bVar11 = *(byte *)(lVar35 + 0xe79);
      puVar28 = *(undefined1 **)(lVar35 + 0x10c0);
      puVar29 = *(undefined1 **)(lVar35 + 0x1320);
      puVar43 = *(undefined1 **)(lVar35 + 0x1580);
      bVar13 = *(byte *)(lVar35 + 0x1339);
      pbVar37 = (byte *)(lVar35 + 0x1599);
    }
    uVar39 = (uint)bVar34;
    uVar40 = (uint)bVar6;
    uVar41 = (uint)bVar7;
    uVar42 = (uint)bVar8;
    uVar30 = (uint)bVar9;
    uVar32 = (uint)bVar10;
    uVar46 = (uint)bVar13;
    uVar44 = (uint)bVar11;
    uVar47 = (uint)bVar12;
    uVar38 = (undefined1)*(undefined4 *)(lVar35 + 8);
    uVar36 = (uint)*pbVar37;
    bVar15 = *(int *)(lVar35 + 4) == 1;
  }
  else {
    uVar47 = 0;
    uVar44 = 0;
    uVar46 = 0;
    uVar32 = 0;
    uVar30 = 0;
    uVar36 = 0;
    uVar42 = 0;
    bVar15 = false;
    uVar41 = 0;
    uVar38 = 0;
    uVar40 = 0;
    uVar39 = 0;
    puVar24 = puVar43;
    puVar25 = puVar43;
    puVar21 = puVar43;
    puVar22 = puVar43;
    puVar23 = puVar43;
    puVar28 = puVar43;
    puVar26 = puVar43;
    puVar27 = puVar43;
    puVar29 = puVar43;
  }
  *(undefined1 *)(puVar18 + 100) = uVar38;
  *(bool *)((long)puVar18 + 0x321) = bVar15;
  *(undefined2 *)((long)puVar18 + 0x326) = local_338._4_2_;
  *(undefined4 *)((long)puVar18 + 0x322) = (undefined4)local_338;
  puVar18[0x65] = puVar21;
  *(uint *)(puVar18 + 0x66) = uVar39;
  *(undefined4 *)((long)puVar18 + 0x334) = 0;
  puVar18[0x67] = puVar22;
  *(uint *)(puVar18 + 0x68) = uVar40;
  *(undefined4 *)((long)puVar18 + 0x344) = 0;
  puVar18[0x69] = puVar23;
  *(uint *)(puVar18 + 0x6a) = uVar41;
  *(undefined4 *)((long)puVar18 + 0x354) = 0;
  puVar18[0x6b] = puVar24;
  *(uint *)(puVar18 + 0x6c) = uVar42;
  *(undefined4 *)((long)puVar18 + 0x364) = 0;
  puVar18[0x6d] = puVar25;
  *(uint *)(puVar18 + 0x6e) = uVar30;
  *(undefined4 *)((long)puVar18 + 0x374) = 0;
  puVar18[0x6f] = puVar26;
  *(uint *)(puVar18 + 0x70) = uVar32;
  *(undefined4 *)((long)puVar18 + 900) = 0;
  puVar18[0x71] = puVar27;
  *(uint *)(puVar18 + 0x72) = uVar44;
  *(undefined4 *)((long)puVar18 + 0x394) = 0;
  puVar18[0x73] = puVar28;
  *(uint *)(puVar18 + 0x74) = uVar47;
  *(undefined4 *)((long)puVar18 + 0x3a4) = 0;
  puVar18[0x75] = puVar29;
  *(uint *)(puVar18 + 0x76) = uVar46;
  *(undefined4 *)((long)puVar18 + 0x3b4) = 0;
  puVar18[0x77] = puVar43;
  *(uint *)(puVar18 + 0x78) = uVar36;
  *(undefined4 *)((long)puVar18 + 0x3c4) = 0;
  if (((DAT_71053144d8 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_71053144d8), iVar17 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_71053144d8), iVar17 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if ((DAT_71052c51b0 & 0xfe) == 10) {
    iVar16 = DAT_71052cfde4;
    if (DAT_71052cc63a != '\0') {
      iVar16 = 0;
    }
    iVar1 = DAT_71052d3644;
    if (DAT_71052cfe9a != '\0') {
      iVar1 = 0;
    }
    iVar2 = DAT_71052d6ea4;
    if (DAT_71052d36fa != '\0') {
      iVar2 = 0;
    }
    iVar3 = DAT_71052da704;
    if (DAT_71052d6f5a != '\0') {
      iVar3 = 0;
    }
    iVar4 = DAT_71052ddf64;
    if (DAT_71052da7ba != '\0') {
      iVar4 = 0;
    }
    iVar5 = DAT_71052e17c4;
    if (DAT_71052de01a != '\0') {
      iVar5 = 0;
    }
    iVar17 = DAT_71052e5024;
    if (DAT_71052e187a != '\0') {
      iVar17 = 0;
    }
    iVar17 = iVar16 + iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar17;
    if (DAT_71052e50da == '\0') {
      iVar17 = DAT_71052e8884 + iVar17;
    }
  }
  else if (DAT_71052c51b0 == 9) {
    iVar17 = (int)*(float *)(**(long **)(*DAT_71052c36c0 + 8) + 0x120);
  }
  else if (DAT_71052c3950 == (undefined8 *)0x0) {
    iVar17 = 0;
  }
  else {
    iVar17 = FUN_71015922f0((long *)*DAT_71052c3950);
  }
  *(byte *)((long)puVar18 + 0x8a) = *(byte *)((long)puVar18 + 0x8a) & 0xfd;
  *(float *)(puVar18 + 99) = (float)iVar17;
  if (((DAT_71053144d8 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_71053144d8), iVar17 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_71053144d8), iVar17 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  iVar17 = DAT_71052c5680;
  if (DAT_71052c55d0 == 0x145) {
    if (DAT_71052c51b6 == '\0') {
      uVar30 = DAT_71052c51b0 - 1;
      if ((0x24 < uVar30) || ((0x1801fee495U >> ((ulong)uVar30 & 0x3f) & 1) == 0))
      goto LAB_710143be74;
    }
    else if (DAT_71052c51b0 != 0x19) {
LAB_710143be74:
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(&DAT_71053144d8), iVar16 != 0)) {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (DAT_710530a974 == '\x01') {
        if (0x11 < *(uint *)(*DAT_7105328e18 + 0x39c)) goto LAB_710143c4c8;
        puVar45 = (undefined8 *)
                  ((long)&DAT_71052c5180 + (long)(int)*(uint *)(*DAT_7105328e18 + 0x39c) * 4);
        uVar30 = 0x82d8;
      }
      else {
        puVar45 = (undefined8 *)&DAT_71052c51b5;
        if (DAT_71052c51b5 < '\x02') {
          uVar30 = 0x5747;
        }
        else {
          if (2 < DAT_710530a968) goto LAB_710143c4c8;
          puVar45 = &DAT_71052c5180 + (long)(int)DAT_710530a968 * 6;
          uVar30 = 0x577c;
        }
      }
      uVar30 = *(uint *)((long)puVar45 + (ulong)(uVar30 | 0x40000));
      puVar45 = *(undefined8 **)(*DAT_7105314510 + 0x298);
      local_338 = (long ***)((ulong)local_338 & 0xffffffff00000000);
      memset(&local_330,0,0x10a);
      uStack_204 = 1;
      local_200 = 0;
      local_1e8 = 0;
      local_1f8 = 0xd9ffff0000000000;
      local_1f0 = 0;
      uStack_1e9 = 0;
      local_1b0 = 0;
      local_1a8 = 0;
      local_1c0 = 0;
      local_1b8 = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1e0 = 0;
      local_1d8 = 0;
      if ((((uVar30 != 0) &&
           (uVar19 = FUN_71017ceba0(puVar45,uVar30,(undefined4 *)&local_338), (uVar19 & 1) != 0)) &&
          (local_330._4_1_ != '\x01')) && ((local_330._5_1_ >> 2 & 1) == 0)) goto LAB_710143bf88;
    }
    goto LAB_710143c0ec;
  }
LAB_710143bf88:
  if (iVar17 == 0x145) {
    if (DAT_71052c51b6 == '\0') {
      uVar30 = DAT_71052c51b0 - 1;
      if ((0x24 < uVar30) || ((0x1801fee495U >> ((ulong)uVar30 & 0x3f) & 1) == 0))
      goto LAB_710143bfd0;
    }
    else if (DAT_71052c51b0 != 0x19) {
LAB_710143bfd0:
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar17 = __cxa_guard_acquire(&DAT_71053144d8), iVar17 != 0)) {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (DAT_710530a974 == '\x01') {
        if (0x11 < *(uint *)(*DAT_7105328e18 + 0x39c)) {
LAB_710143c4c8:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        puVar45 = (undefined8 *)
                  ((long)&DAT_71052c5180 + (long)(int)*(uint *)(*DAT_7105328e18 + 0x39c) * 4);
        uVar30 = 0x82d8;
      }
      else {
        puVar45 = (undefined8 *)&DAT_71052c51b5;
        if (DAT_71052c51b5 < '\x02') {
          uVar30 = 0x5777;
        }
        else {
          if (2 < DAT_710530a968) goto LAB_710143c4c8;
          puVar45 = &DAT_71052c5180 + (long)(int)DAT_710530a968 * 6;
          uVar30 = 0x577c;
        }
      }
      uVar30 = *(uint *)((long)puVar45 + (ulong)(uVar30 | 0x40000));
      puVar45 = *(undefined8 **)(*DAT_7105314510 + 0x298);
      local_338 = (long ***)((ulong)local_338 & 0xffffffff00000000);
      memset(&local_330,0,0x10a);
      uStack_204 = 1;
      local_200 = 0;
      local_1e8 = 0;
      local_1f8 = 0xd9ffff0000000000;
      local_1f0 = 0;
      uStack_1e9 = 0;
      local_1b0 = 0;
      local_1a8 = 0;
      local_1c0 = 0;
      local_1b8 = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1e0 = 0;
      local_1d8 = 0;
      if ((((uVar30 != 0) &&
           (uVar19 = FUN_71017ceba0(puVar45,uVar30,(undefined4 *)&local_338), (uVar19 & 1) != 0)) &&
          (local_330._4_1_ != '\x01')) && ((local_330._5_1_ >> 2 & 1) == 0)) goto LAB_710143c0e4;
    }
LAB_710143c0ec:
    bVar34 = 0;
  }
  else {
LAB_710143c0e4:
    bVar34 = 4;
  }
  *(byte *)((long)puVar18 + 0x8a) = *(byte *)((long)puVar18 + 0x8a) & 0xfb | bVar34;
  return;
}

