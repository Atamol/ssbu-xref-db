// addr:      7101828e60
// offset:    0x1828e60
// name:      FUN_7101828e60
// mangled:   
// signature: undefined __cdecl FUN_7101828e60(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101828e60(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 uVar10;
  byte bVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  char cVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined2 uVar22;
  long *plVar23;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar24;
  undefined8 uVar25;
  int iVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  ulong uVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 *puVar34;
  int *__dest;
  long lVar35;
  undefined8 *puVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  float fVar39;
  undefined **local_270;
  long *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined2 local_220;
  undefined4 uStack_21e;
  undefined2 uStack_21a;
  undefined6 uStack_218;
  undefined2 local_212;
  undefined6 uStack_210;
  undefined2 uStack_20a;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
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
  undefined6 local_128;
  undefined2 uStack_122;
  undefined6 uStack_120;
  undefined2 local_11a;
  undefined4 uStack_118;
  undefined2 uStack_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  FUN_710377cc80(*(long *)(*(long *)(*(long *)(param_1 + 0xf8) + 0x80) + 400),1);
  FUN_7101af86a0(*(long *)(param_1 + 0xf0),1,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar35 = *(long *)(*(long *)(param_1 + 0x100) + 0x80);
  if (*(int *)(lVar35 + 8) != -1) {
    puVar34 = *(undefined8 **)(lVar35 + 0x18);
    *(undefined4 *)(lVar35 + 8) = 0xffffffff;
    uVar24 = extraout_x1;
    if (puVar34 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar35 + 0x18) = 0;
      FUN_7103375760(puVar34);
      FUN_710392eb40((ulong)puVar34);
      uVar24 = extraout_x1_00;
    }
    puVar34 = *(undefined8 **)(lVar35 + 0x10);
    if (puVar34 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar35 + 0x10) = 0;
      puVar36 = (undefined8 *)*puVar34;
      *puVar34 = 0;
      if (puVar36 != (undefined8 *)0x0) {
        FUN_7103773770(puVar36,uVar24,param_3,param_4,param_5,param_6,param_7,param_8);
        FUN_710392eb40((ulong)puVar36);
      }
      FUN_710392eb40((ulong)puVar34);
    }
  }
  iVar26 = *(int *)(param_1 + 0x108);
  if (iVar26 != 6) {
    if (iVar26 == 5) {
      FUN_71032eb270(*(long *)(DAT_710532f7f0 + 8),0,param_3,param_4,param_5,param_6,param_7,param_8
                    );
      if (DAT_71052c35a0 != 0) {
        __dest = *(int **)(DAT_71052c35a0 + 8);
        lVar35 = *(long *)(*(long *)(param_1 + 0xf8) + 0x80);
        memset(&local_270,0,0x208);
        uStack_210 = 0;
        local_270 = (undefined **)CONCAT44(local_270._4_4_,0xffffffff);
        local_220 = 0;
        uStack_21e = 0;
        uStack_21a = 0;
        uStack_218 = 0;
        local_212 = 0;
        local_268 = (long *)0x0;
        local_208 = 0;
        local_230 = 0;
        local_228 = 0;
        local_240 = 0;
        local_238 = 0;
        local_250 = 0;
        local_248 = 0;
        local_260 = 0;
        local_258 = 0;
        local_150 = 0;
        local_148 = 0;
        local_160 = 0;
        local_158 = 0;
        local_170 = 0;
        local_168 = 0;
        local_180 = 0;
        local_178 = 0;
        local_190 = 0;
        local_188 = 0;
        local_1a0 = 0;
        local_198 = 0;
        local_1b0 = 0;
        local_1a8 = 0;
        local_1c0 = 0;
        local_1b8 = 0;
        local_1d0 = 0;
        local_1c8 = 0;
        local_1e0 = 0;
        local_1d8 = 0;
        local_1f0 = 0;
        local_1e8 = 0;
        local_200 = 0;
        local_1f8 = 0;
        FUN_71004f5770(&local_200);
        local_110 = (ulong)local_110._4_4_ << 0x20;
        uStack_118 = 0;
        uStack_114 = 0;
        local_128 = 0;
        uStack_122 = 0;
        uStack_120 = 0;
        local_11a = 0;
        local_140 = 0;
        local_70 = 0;
        local_78 = 0;
        local_80 = 0;
        local_88 = 0;
        local_90 = 0;
        local_98 = 0;
        local_a0 = 0;
        local_a8 = 0;
        local_138 = 0;
        local_130 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_108 = 0;
        uStack_100 = 0;
        memcpy(__dest,&local_270,0x208);
        iVar26 = *(int *)(*(long *)(lVar35 + 0x240) + 0x2f8);
        uVar27 = (ulong)iVar26;
        if ((iVar26 < 0) ||
           (uVar31 = (*(long *)(lVar35 + 0x280) - *(long *)(lVar35 + 0x278) >> 6) *
                     -0x1111111111111111, uVar31 < uVar27 || uVar31 - uVar27 == 0)) {
          uStack_218 = 0;
          local_270 = (undefined **)0x0;
          local_228 = 0;
          local_220 = 0;
          uStack_21e = 0;
          uStack_21a = 0;
          uStack_210 = 0;
          uStack_20a = 0;
          local_238 = 0;
          local_230 = 0;
          local_248 = 0;
          local_240 = 0;
          local_258 = 0;
          local_250 = 0;
          local_268 = (long *)0x0;
          local_260 = 0;
          local_158 = 0;
          local_150 = 0;
          local_168 = 0;
          local_160 = 0;
          local_178 = 0;
          local_170 = 0;
          local_188 = 0;
          local_180 = 0;
          local_198 = 0;
          local_190 = 0;
          local_1a8 = 0;
          local_1a0 = 0;
          local_1b8 = 0;
          local_1b0 = 0;
          local_1c8 = 0;
          local_1c0 = 0;
          local_1d8 = 0;
          local_1d0 = 0;
          local_1e8 = 0;
          local_1e0 = 0;
          local_1f8 = 0;
          local_1f0 = 0;
          local_208 = 0;
          local_200 = 0;
          FUN_71004f5770(&local_208);
          uStack_118 = 0;
          uStack_120 = 0;
          local_130 = 0;
          local_128 = 0;
          uStack_122 = 0;
          local_148 = 0;
          local_78 = 0;
          local_80 = 0;
          local_88 = 0;
          local_90 = 0;
          local_98 = 0;
          local_a0 = 0;
          local_a8 = 0;
          local_110 = 0;
          local_140 = 0;
          local_138 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_108 = 0;
          uStack_100 = 0;
          memcpy(__dest + 2,&local_270,0x200);
        }
        else {
          lVar32 = *(long *)(lVar35 + 0x278) + uVar27 * 0x3c0;
          local_270 = *(undefined ***)(lVar32 + 0x14);
          local_268 = *(long **)(lVar32 + 0x1c);
          local_260 = *(undefined8 *)(lVar32 + 0x24);
          iVar26 = *(int *)(lVar32 + 0x10);
          local_258 = *(undefined8 *)(lVar32 + 0x2c);
          local_250 = *(undefined8 *)(lVar32 + 0x34);
          local_248 = *(undefined8 *)(lVar32 + 0x3c);
          local_240 = *(undefined8 *)(lVar32 + 0x44);
          local_238 = *(undefined8 *)(lVar32 + 0x4c);
          local_230 = *(undefined8 *)(lVar32 + 0x54);
          local_228 = *(undefined8 *)(lVar32 + 0x5c);
          local_220 = *(undefined2 *)(lVar32 + 100);
          uVar10 = *(undefined1 *)(lVar32 + 0x79);
          bVar11 = *(byte *)(lVar32 + 0x7a);
          uVar12 = *(undefined1 *)(lVar32 + 0x224);
          uVar28 = *(undefined8 *)(lVar32 + 0x260);
          iVar1 = *(int *)(lVar32 + 0x270);
          uVar13 = *(undefined1 *)(lVar32 + 0x274);
          uVar29 = *(undefined8 *)(lVar32 + 0x2b0);
          iVar2 = *(int *)(lVar32 + 0x2c0);
          uVar14 = *(undefined1 *)(lVar32 + 0x2c4);
          iVar3 = *(int *)(lVar32 + 0x68);
          cVar15 = *(char *)(lVar32 + 0x6c);
          uVar22 = *(undefined2 *)(lVar32 + 0x6e);
          uVar16 = *(undefined1 *)(lVar32 + 0x78);
          uVar33 = *(undefined8 *)(lVar32 + 0x80);
          iVar4 = *(int *)(lVar32 + 0x90);
          uVar17 = *(undefined1 *)(lVar32 + 0x94);
          uVar24 = *(undefined8 *)(lVar32 + 0xd0);
          iVar5 = *(int *)(lVar32 + 0xe0);
          uVar18 = *(undefined1 *)(lVar32 + 0xe4);
          uVar25 = *(undefined8 *)(lVar32 + 0x120);
          iVar6 = *(int *)(lVar32 + 0x130);
          uVar19 = *(undefined1 *)(lVar32 + 0x134);
          uVar37 = *(undefined8 *)(lVar32 + 0x170);
          iVar7 = *(int *)(lVar32 + 0x180);
          uVar20 = *(undefined1 *)(lVar32 + 0x184);
          uVar38 = *(undefined8 *)(lVar32 + 0x1c0);
          uVar21 = *(undefined1 *)(lVar32 + 0x1d0);
          uVar8 = *(undefined4 *)(lVar32 + 0x1d1);
          uVar30 = *(undefined8 *)(lVar32 + 0x210);
          iVar9 = *(int *)(lVar32 + 0x220);
          fVar39 = *(float *)(lVar32 + 0x308);
          uVar27 = *(ulong *)(lVar32 + 0x300);
          *(undefined8 *)(__dest + 2) = *(undefined8 *)(lVar32 + 8);
          __dest[4] = iVar26;
          *(undefined8 *)(__dest + 9) = local_260;
          *(long **)(__dest + 7) = local_268;
          *(undefined ***)(__dest + 5) = local_270;
          *(undefined8 *)(__dest + 0x11) = local_240;
          *(undefined8 *)(__dest + 0xf) = local_248;
          *(undefined8 *)(__dest + 0xd) = local_250;
          *(undefined8 *)(__dest + 0xb) = local_258;
          *(undefined8 *)(__dest + 0x13) = local_238;
          iVar26 = -3;
          if (cVar15 == '\x12') {
            iVar26 = -2;
          }
          __dest[0x1a] = iVar26 + iVar3;
          *(undefined1 *)(__dest + 0x3f) = uVar12;
          *(undefined8 *)(__dest + 0x40) = uVar28;
          __dest[0x44] = iVar1;
          *(undefined1 *)(__dest + 0x45) = uVar13;
          *(undefined8 *)(__dest + 0x46) = uVar29;
          __dest[0x4a] = iVar2;
          *(undefined1 *)(__dest + 0x4b) = uVar14;
          __dest[0x4e] = (int)fVar39;
          *(undefined2 *)(__dest + 0x19) = local_220;
          *(undefined8 *)(__dest + 0x17) = local_228;
          *(undefined8 *)(__dest + 0x15) = local_230;
          *(char *)(__dest + 0x1b) = cVar15;
          *(undefined2 *)((long)__dest + 0x6d) = uVar22;
          *(undefined1 *)((long)__dest + 0x6f) = uVar16;
          *(undefined8 *)(__dest + 0x1c) = uVar33;
          __dest[0x20] = iVar4;
          *(undefined1 *)(__dest + 0x21) = uVar17;
          *(undefined8 *)(__dest + 0x22) = uVar24;
          __dest[0x26] = iVar5;
          *(undefined1 *)(__dest + 0x27) = uVar18;
          *(undefined8 *)(__dest + 0x28) = uVar25;
          __dest[0x2c] = iVar6;
          *(undefined1 *)(__dest + 0x2d) = uVar19;
          *(undefined8 *)(__dest + 0x2e) = uVar37;
          __dest[0x32] = iVar7;
          *(undefined1 *)(__dest + 0x33) = uVar20;
          *(undefined8 *)(__dest + 0x34) = uVar38;
          *(undefined1 *)(__dest + 0x38) = uVar21;
          *(undefined4 *)((long)__dest + 0xe1) = uVar8;
          *(undefined8 *)(__dest + 0x3a) = uVar30;
          __dest[0x3e] = iVar9;
          *(undefined1 *)(__dest + 0x50) = uVar10;
          *(ulong *)(__dest + 0x4c) = uVar27;
          if (((int)uVar27 == 0x145) || ((uVar27 & 0xffffffff00000000) == 0x14500000000)) {
            bVar11 = bVar11 >> 2 & 1;
            *(byte *)((long)__dest + 0x141) = bVar11;
            *(byte *)((long)__dest + 0x142) = bVar11 ^ 1;
          }
          uVar24 = *(undefined8 *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x78) + 0x5e048);
          *(undefined8 *)(__dest + 0x51) =
               *(undefined8 *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x78) + 0x5e040);
          *(undefined8 *)(__dest + 0x53) = uVar24;
        }
        lVar35 = *(long *)(lVar35 + 0x240);
        *(byte *)(__dest + 0x4f) = *(byte *)(lVar35 + 0x32f) ^ 1;
        *(byte *)((long)__dest + 0x13d) = *(byte *)(lVar35 + 0x330) ^ 1;
        *(byte *)((long)__dest + 0x13e) = *(byte *)(lVar35 + 0x331) ^ 1;
        *(byte *)((long)__dest + 0x13f) = *(byte *)(lVar35 + 0x332) ^ 1;
        lVar35 = *(long *)(*(long *)(*(long *)(param_1 + 0xf8) + 0x80) + 0x240);
        *(undefined2 *)(__dest + 5) = *(undefined2 *)(lVar35 + 0x350);
        *(undefined2 *)((long)__dest + 0x16) = *(undefined2 *)(lVar35 + 0x352);
        *(undefined2 *)(__dest + 6) = *(undefined2 *)(lVar35 + 0x354);
        *(undefined2 *)((long)__dest + 0x1a) = *(undefined2 *)(lVar35 + 0x356);
        *(undefined2 *)(__dest + 7) = *(undefined2 *)(lVar35 + 0x358);
        *(undefined2 *)((long)__dest + 0x1e) = *(undefined2 *)(lVar35 + 0x35a);
        *(undefined2 *)(__dest + 8) = *(undefined2 *)(lVar35 + 0x35c);
        *(undefined2 *)((long)__dest + 0x22) = *(undefined2 *)(lVar35 + 0x35e);
        *(undefined2 *)(__dest + 9) = *(undefined2 *)(lVar35 + 0x360);
        *(undefined2 *)((long)__dest + 0x26) = *(undefined2 *)(lVar35 + 0x362);
        *(undefined2 *)(__dest + 10) = *(undefined2 *)(lVar35 + 0x364);
        *(undefined2 *)((long)__dest + 0x2a) = *(undefined2 *)(lVar35 + 0x366);
        *(undefined2 *)(__dest + 0xb) = *(undefined2 *)(lVar35 + 0x368);
        *(undefined2 *)((long)__dest + 0x2e) = *(undefined2 *)(lVar35 + 0x36a);
        *(undefined2 *)(__dest + 0xc) = *(undefined2 *)(lVar35 + 0x36c);
        *(undefined2 *)((long)__dest + 0x32) = *(undefined2 *)(lVar35 + 0x36e);
        *(undefined2 *)(__dest + 0xd) = *(undefined2 *)(lVar35 + 0x370);
        *(undefined2 *)((long)__dest + 0x36) = *(undefined2 *)(lVar35 + 0x372);
        *(undefined2 *)(__dest + 0xe) = *(undefined2 *)(lVar35 + 0x374);
        *(undefined2 *)((long)__dest + 0x3a) = *(undefined2 *)(lVar35 + 0x376);
        *(undefined2 *)(__dest + 0xf) = *(undefined2 *)(lVar35 + 0x378);
        *(undefined2 *)((long)__dest + 0x3e) = *(undefined2 *)(lVar35 + 0x37a);
        *(undefined2 *)(__dest + 0x10) = *(undefined2 *)(lVar35 + 0x37c);
        *(undefined2 *)((long)__dest + 0x42) = *(undefined2 *)(lVar35 + 0x37e);
        *(undefined2 *)(__dest + 0x11) = *(undefined2 *)(lVar35 + 0x380);
        *(undefined2 *)((long)__dest + 0x46) = *(undefined2 *)(lVar35 + 0x382);
        *(undefined2 *)(__dest + 0x12) = *(undefined2 *)(lVar35 + 900);
        *(undefined2 *)((long)__dest + 0x4a) = *(undefined2 *)(lVar35 + 0x386);
        *(undefined2 *)(__dest + 0x13) = *(undefined2 *)(lVar35 + 0x388);
        *(undefined2 *)((long)__dest + 0x4e) = *(undefined2 *)(lVar35 + 0x38a);
        *(undefined2 *)(__dest + 0x14) = *(undefined2 *)(lVar35 + 0x38c);
        *(undefined2 *)((long)__dest + 0x52) = *(undefined2 *)(lVar35 + 0x38e);
        *(undefined2 *)(__dest + 0x15) = *(undefined2 *)(lVar35 + 0x390);
        *(undefined2 *)((long)__dest + 0x56) = *(undefined2 *)(lVar35 + 0x392);
        *(undefined2 *)(__dest + 0x16) = *(undefined2 *)(lVar35 + 0x394);
        *(undefined2 *)((long)__dest + 0x5a) = *(undefined2 *)(lVar35 + 0x396);
        *(undefined2 *)(__dest + 0x17) = *(undefined2 *)(lVar35 + 0x398);
        *(undefined2 *)((long)__dest + 0x5e) = *(undefined2 *)(lVar35 + 0x39a);
        *(undefined2 *)(__dest + 0x18) = *(undefined2 *)(lVar35 + 0x39c);
        *(undefined2 *)((long)__dest + 0x62) = *(undefined2 *)(lVar35 + 0x39e);
        *(undefined2 *)(__dest + 0x19) = *(undefined2 *)(lVar35 + 0x3a0);
        iVar26 = *(int *)(*(long *)(*(long *)(*(long *)(param_1 + 0xf8) + 0x80) + 0x240) + 0x348);
        if (iVar26 == 0) {
          iVar26 = -1;
        }
        *__dest = iVar26;
      }
    }
    else if (iVar26 == 1) {
      FUN_71032eb270(*(long *)(DAT_710532f7f0 + 8),0,param_3,param_4,param_5,param_6,param_7,param_8
                    );
    }
    FUN_7103726af0(*(long *)(param_2 + 8),*(undefined4 *)(param_1 + 0x108));
    return;
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  lVar32 = *(long *)(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8) + 0x80);
  FUN_7103776910(&local_270,**(long **)(lVar32 + 0x130) + 8,(long ****)"set_txt_key",param_3,param_4
                 ,param_5,param_6,param_7,param_8);
  plVar23 = local_268;
  lVar35 = *local_268;
  if (lVar35 != 0) {
    *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) | 1;
  }
  local_270 = &PTR_FUN_710523d9a8;
  local_268 = (long *)0x0;
  if (plVar23 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar23);
  }
  *(undefined1 *)(lVar32 + 0x200) = 1;
  if (*(uint *)(param_1 + 0xd4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xd4) * 4 + 0x88) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

