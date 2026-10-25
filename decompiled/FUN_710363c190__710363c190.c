// addr:      710363c190
// offset:    0x363c190
// name:      FUN_710363c190
// mangled:   
// signature: undefined __cdecl FUN_710363c190(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 * param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_710363c190(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  long ***ppplVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  long ****pppplVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  uint local_160;
  undefined2 uStack_15c;
  undefined1 uStack_15a;
  undefined1 uStack_159;
  undefined1 uStack_158;
  undefined2 local_157;
  undefined1 uStack_155;
  undefined2 uStack_154;
  undefined1 uStack_152;
  undefined1 uStack_151;
  undefined1 uStack_150;
  undefined2 uStack_14f;
  undefined1 uStack_14d;
  undefined4 uStack_14c;
  long ***local_148;
  ulong local_140;
  long *local_138;
  long local_130;
  long ***local_128;
  undefined8 uStack_120;
  void *local_118;
  ulong local_110;
  undefined8 local_108;
  void *local_100;
  ulong local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  ulong local_e0;
  undefined8 local_d8;
  void *local_d0;
  ulong local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  ulong local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  
  if ((param_3 == (long ****)0x0) || ((byte ****)*param_3 != param_4)) {
    *(undefined8 *)(param_1 + 0x28) = 0;
LAB_710363c1e0:
    uVar10 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    *(long *)(param_1 + 0x28) = param_2;
    if (param_2 == 0) goto LAB_710363c1e0;
    puVar9 = *(undefined8 **)(param_2 + 8);
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    uVar10 = *puVar9;
  }
  *(undefined8 *)(param_1 + 0x38) = uVar10;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x12a0,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_148 = (long ***)((ulong)local_148 & 0xffffffff00000000);
      local_128 = (long ***)0x12a0;
      pppplVar8 = &local_128;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_148);
      if (((uVar5 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x12a0,pppplVar8,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_710363c248;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_710363c248:
  FUN_710364e1f0(puVar9);
  uVar5 = *(ulong *)(param_1 + 0x50);
  *(undefined8 **)(param_1 + 0x50) = puVar9;
  if (uVar5 != 0) {
    FUN_710364e460(uVar5);
    FUN_710392eb40(uVar5);
  }
  local_88 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  local_d0 = (void *)0x0;
  local_e8 = (void *)0x0;
  local_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  local_100 = (void *)0x0;
  local_118 = (void *)0x0;
  local_110 = 0;
  local_128 = (long ***)0x0;
  uStack_120 = 0;
  local_98 = 1;
  uStack_90 = 0x100000000;
  local_74 = 1;
  local_6c = 0xf;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  FUN_71002c51f0((ulong *)&local_128,"VsmWithGaussVS",0xe,param_4,param_5,param_6,param_7,param_8);
  FUN_71002c51f0(&local_110,"VsmWithGaussPS",0xe,param_4,param_5,param_6,param_7,param_8);
  FUN_71002c51f0(&local_e0,"VSM_GAUSS",9,param_4,param_5,param_6,param_7,param_8);
  FUN_71002c51f0(&local_f8,"VSM_GAUSS",9,param_4,param_5,param_6,param_7,param_8);
  pppplVar8 = (long ****)&DAT_00000010;
  FUN_71002c51f0(&local_c8,"NODE_POST_EFFECT",0x10,param_4,param_5,param_6,param_7,param_8);
  local_98 = 1;
  uStack_90 = 0x100000000;
  local_88 = 0;
  local_74 = 0;
  FUN_710364e730(*(long *)(param_1 + 0x50),(ulong *)&local_128,pppplVar8,param_4,param_5,param_6,
                 param_7,param_8);
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x1b0,pppplVar8,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_160 = 0;
      local_148 = (long ***)&DAT_000001b0;
      pppplVar8 = &local_148;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_160);
      if (((uVar5 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x1b0,pppplVar8,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_710363c3ac;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_710363c3ac:
  memset(puVar9,0,0x1b0);
  puVar9[4] = &PTR_FUN_7105238428;
  puVar9[5] = 0;
  *puVar9 = &PTR_FUN_710522fea0;
  puVar9[8] = &PTR_FUN_7105231f88;
  puVar9[9] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[0x15] = 0;
  puVar9[0x23] = 0;
  puVar9[0x31] = 0;
  puVar9[10] = 0;
  puVar9[0xb] = 0;
  puVar9[0x18] = 0;
  puVar9[0x19] = 0;
  puVar9[0x13] = 0;
  puVar9[0x14] = 0;
  puVar9[0x11] = 0;
  puVar9[0x12] = 0;
  puVar9[0xf] = 0;
  puVar9[0x10] = 0;
  puVar9[0xd] = 0;
  puVar9[0xe] = 0;
  puVar9[0x16] = &PTR_FUN_7105231d58;
  puVar9[0x17] = 0;
  puVar9[0x26] = 0;
  puVar9[0x27] = 0;
  puVar9[0x24] = &PTR_FUN_7105231d58;
  puVar9[0x25] = 0;
  puVar9[0x21] = 0;
  puVar9[0x22] = 0;
  puVar9[0x1f] = 0;
  puVar9[0x20] = 0;
  puVar9[0x1d] = 0;
  puVar9[0x1e] = 0;
  puVar9[0x1b] = 0;
  puVar9[0x1c] = 0;
  puVar9[0x34] = 0;
  puVar9[0x35] = 0;
  puVar9[0x32] = &PTR_FUN_7105231d58;
  puVar9[0x33] = 0;
  puVar9[0x2f] = 0;
  puVar9[0x30] = 0;
  puVar9[0x2d] = 0;
  puVar9[0x2e] = 0;
  puVar9[0x2b] = 0;
  puVar9[0x2c] = 0;
  puVar9[0x29] = 0;
  puVar9[0x2a] = 0;
  uVar5 = *(ulong *)(param_1 + 0x40);
  *(undefined8 **)(param_1 + 0x40) = puVar9;
  if (uVar5 != 0) {
    FUN_710363bfc0(uVar5 + 0x60);
    FUN_710392eb40(uVar5);
  }
  uStack_151 = 0;
  uStack_150 = 0;
  uStack_14f = 0;
  uStack_14d = 0;
  uStack_14c = 0;
  uStack_152 = 0;
  local_157 = 0x574f;
  uStack_155 = 0x4d;
  uStack_154 = 0x5041;
  local_160 = 0x4d53561a;
  uStack_15c = 0x535f;
  uStack_15a = 0x48;
  uStack_159 = 0x41;
  uStack_158 = 0x44;
  FUN_7103864d90(&local_148,*(long *)(param_1 + 0x28),(byte *)&local_160);
  lVar11 = *(long *)(param_1 + 0x40);
  if ((local_138 == (long *)0x0) || (*local_138 != local_130)) {
    *(undefined8 *)(lVar11 + 8) = 0;
LAB_710363c4d8:
    uVar10 = 0;
    *(undefined8 *)(lVar11 + 0x10) = 0;
  }
  else {
    *(ulong *)(lVar11 + 8) = local_140;
    if (local_140 == 0) goto LAB_710363c4d8;
    puVar9 = *(undefined8 **)(local_140 + 8);
    *(undefined8 **)(lVar11 + 0x10) = puVar9;
    uVar10 = *puVar9;
  }
  *(undefined8 *)(lVar11 + 0x18) = uVar10;
  uStack_154 = 0;
  uStack_152 = 0;
  uStack_151 = 0;
  local_160 = 0x50534414;
  uStack_15c = 0x535f;
  uStack_15a = 0x48;
  uStack_159 = 0x41;
  uStack_158 = 0x44;
  uStack_150 = 0;
  uStack_14f = 0;
  uStack_14d = 0;
  uStack_14c = 0;
  local_157 = 0x574f;
  uStack_155 = 0;
  FUN_71038566c0(&local_148,*(long *)(*(long *)(param_1 + 0x40) + 8),(byte *)&local_160);
  if (local_140 == 0) {
    lVar11 = *(long *)(param_1 + 0x40) + 0x20;
LAB_710363c558:
    uVar10 = 0;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined8 *)(lVar11 + 0x10) = 0;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x40);
    lVar11 = lVar12 + 0x20;
    if (*(long *)(local_140 + 8) == 0) goto LAB_710363c558;
    *(ulong *)(lVar12 + 0x28) = local_140;
    puVar9 = *(undefined8 **)(local_140 + 8);
    *(undefined8 **)(lVar12 + 0x30) = puVar9;
    uVar10 = *puVar9;
  }
  *(undefined8 *)(lVar11 + 0x18) = uVar10;
  uStack_150 = 0;
  uStack_14f = 0;
  uStack_14d = 0;
  uStack_14c = 0;
  uStack_151 = 0;
  local_157 = 0x7765;
  uStack_155 = 0x70;
  uStack_154 = 0x726f;
  uStack_152 = 0x74;
  local_160 = 0x6168531c;
  uStack_15c = 0x6f64;
  uStack_15a = 0x77;
  uStack_159 = 0x56;
  uStack_158 = 0x69;
  FUN_7103856830(&local_148,*(long *)(*(long *)(param_1 + 0x40) + 8),(byte *)&local_160);
  if (local_140 == 0) {
    lVar11 = *(long *)(param_1 + 0x40) + 0x40;
LAB_710363c5d4:
    uVar10 = 0;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined8 *)(lVar11 + 0x10) = 0;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x40);
    lVar11 = lVar12 + 0x40;
    if (*(long *)(local_140 + 8) == 0) goto LAB_710363c5d4;
    *(ulong *)(lVar12 + 0x48) = local_140;
    puVar9 = *(undefined8 **)(local_140 + 8);
    *(undefined8 **)(lVar12 + 0x50) = puVar9;
    uVar10 = *puVar9;
  }
  *(undefined8 *)(lVar11 + 0x18) = uVar10;
  lVar11 = *(long *)(param_1 + 0x40);
  plVar15 = (long *)((ulong)&local_148 | 1);
  puVar9 = (undefined8 *)(lVar11 + 0xc0);
  uVar14 = 0x100;
  do {
    *(float *)(puVar9 + -0xc) = (float)uVar14;
    *(float *)((long)puVar9 + -0x5c) = (float)uVar14;
    std::to_string(uVar14);
    puVar6 = (ulong *)std::string::insert((ulong)&local_160,(char *)0x0);
    ppplVar1 = (long ***)*puVar6;
    local_140 = puVar6[1];
    plVar13 = (long *)puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    uVar5 = (ulong)ppplVar1 >> 1 & 0x7f;
    plVar2 = plVar15;
    if (((ulong)ppplVar1 & 1) != 0) {
      uVar5 = local_140;
      plVar2 = plVar13;
    }
    local_148 = ppplVar1;
    local_138 = plVar13;
    FUN_71002c51f0(puVar9 + -0xb,plVar2,uVar5,param_4,param_5,param_6,param_7,param_8);
    if ((((ulong)ppplVar1 & 1) != 0) && (plVar13 != (long *)0x0)) {
      FUN_710392eb40((ulong)plVar13);
    }
    if (((local_160 & 1) != 0) &&
       (uVar5 = CONCAT44(uStack_14c,CONCAT13(uStack_14d,CONCAT21(uStack_14f,uStack_150))),
       uVar5 != 0)) {
      FUN_710392eb40(uVar5);
    }
    std::to_string(uVar14);
    puVar6 = (ulong *)std::string::insert((ulong)&local_160,(char *)0x0);
    ppplVar1 = (long ***)*puVar6;
    local_140 = puVar6[1];
    plVar13 = (long *)puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    uVar5 = (ulong)ppplVar1 >> 1 & 0x7f;
    plVar2 = plVar15;
    if (((ulong)ppplVar1 & 1) != 0) {
      uVar5 = local_140;
      plVar2 = plVar13;
    }
    local_148 = ppplVar1;
    local_138 = plVar13;
    FUN_71002c51f0(puVar9 + -8,plVar2,uVar5,param_4,param_5,param_6,param_7,param_8);
    if ((((ulong)ppplVar1 & 1) != 0) && (plVar13 != (long *)0x0)) {
      FUN_710392eb40((ulong)plVar13);
    }
    if (((local_160 & 1) != 0) &&
       (uVar5 = CONCAT44(uStack_14c,CONCAT13(uStack_14d,CONCAT21(uStack_14f,uStack_150))),
       uVar5 != 0)) {
      FUN_710392eb40(uVar5);
    }
    std::to_string(uVar14);
    puVar7 = (undefined8 *)std::string::insert((ulong)&local_160,(char *)0x0);
    ppplVar1 = (long ***)*puVar7;
    local_140 = puVar7[1];
    plVar13 = (long *)puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    uVar5 = (ulong)ppplVar1 >> 1 & 0x7f;
    plVar2 = plVar15;
    if (((ulong)ppplVar1 & 1) != 0) {
      uVar5 = local_140;
      plVar2 = plVar13;
    }
    local_148 = ppplVar1;
    local_138 = plVar13;
    FUN_71002c51f0(puVar9 + -5,plVar2,uVar5,param_4,param_5,param_6,param_7,param_8);
    if ((((ulong)ppplVar1 & 1) != 0) && (plVar13 != (long *)0x0)) {
      FUN_710392eb40((ulong)plVar13);
    }
    if (((local_160 & 1) != 0) &&
       (uVar5 = CONCAT44(uStack_14c,CONCAT13(uStack_14d,CONCAT21(uStack_14f,uStack_150))),
       uVar5 != 0)) {
      FUN_710392eb40(uVar5);
    }
    pppplVar8 = (long ****)(puVar9 + -5);
    FUN_710385c280(&local_148,*(long *)(param_1 + 0x28),(byte *)pppplVar8);
    if ((local_138 == (long *)0x0) || (*local_138 != local_130)) {
      puVar9[-1] = 0;
LAB_710363c7d0:
      uVar10 = 0;
      *puVar9 = 0;
    }
    else {
      puVar9[-1] = local_140;
      if (local_140 == 0) goto LAB_710363c7d0;
      puVar7 = *(undefined8 **)(local_140 + 8);
      *puVar9 = puVar7;
      uVar10 = *puVar7;
    }
    puVar9[1] = uVar10;
    puVar7 = puVar9 + 2;
    uVar14 = uVar14 << 1;
    puVar9 = puVar9 + 0xe;
  } while (puVar7 != (undefined8 *)(lVar11 + 0x1b0));
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x1f0,pppplVar8,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_160 = 0;
      local_148 = (long ***)&DAT_000001f0;
      pppplVar8 = &local_148;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_160);
      if (((uVar5 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x1f0,pppplVar8,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_710363c84c;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_710363c84c:
  memset(puVar9,0,0x1f0);
  puVar9[0x1d] = 0;
  *puVar9 = &PTR_FUN_710522fea0;
  puVar9[4] = &PTR_FUN_7105231d38;
  puVar9[5] = 0;
  puVar9[8] = &PTR_FUN_7105231f88;
  puVar9[9] = 0;
  puVar9[0xc] = &PTR_FUN_710522ff60;
  puVar9[0xd] = 0;
  puVar9[0x2b] = 0;
  puVar9[0x39] = 0;
  puVar9[0x10] = &PTR_FUN_7105238448;
  puVar9[0x11] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[10] = 0;
  puVar9[0xb] = 0;
  puVar9[0xe] = 0;
  puVar9[0xf] = 0;
  puVar9[0x12] = 0;
  puVar9[0x13] = 0;
  puVar9[0x20] = 0;
  puVar9[0x21] = 0;
  puVar9[0x1b] = 0;
  puVar9[0x1c] = 0;
  puVar9[0x19] = 0;
  puVar9[0x1a] = 0;
  puVar9[0x17] = 0;
  puVar9[0x18] = 0;
  puVar9[0x15] = 0;
  puVar9[0x16] = 0;
  puVar9[0x1e] = &PTR_FUN_7105231d58;
  puVar9[0x1f] = 0;
  puVar9[0x2e] = 0;
  puVar9[0x2f] = 0;
  puVar9[0x2c] = &PTR_FUN_7105231d58;
  puVar9[0x2d] = 0;
  puVar9[0x29] = 0;
  puVar9[0x2a] = 0;
  puVar9[0x27] = 0;
  puVar9[0x28] = 0;
  puVar9[0x25] = 0;
  puVar9[0x26] = 0;
  puVar9[0x23] = 0;
  puVar9[0x24] = 0;
  puVar9[0x3c] = 0;
  puVar9[0x3d] = 0;
  puVar9[0x3a] = &PTR_FUN_7105231d58;
  puVar9[0x3b] = 0;
  puVar9[0x37] = 0;
  puVar9[0x38] = 0;
  puVar9[0x35] = 0;
  puVar9[0x36] = 0;
  puVar9[0x33] = 0;
  puVar9[0x34] = 0;
  puVar9[0x31] = 0;
  puVar9[0x32] = 0;
  uVar5 = *(ulong *)(param_1 + 0x48);
  *(undefined8 **)(param_1 + 0x48) = puVar9;
  if (uVar5 != 0) {
    FUN_710363bfc0(uVar5 + 0xa0);
    FUN_710392eb40(uVar5);
  }
  uStack_155 = 0;
  uStack_154 = 0;
  uStack_152 = 0;
  uStack_151 = 0;
  local_160 = 0x4d535612;
  uStack_15c = 0x475f;
  uStack_15a = 0x41;
  uStack_159 = 0x55;
  uStack_158 = 0x53;
  uStack_150 = 0;
  uStack_14f = 0;
  uStack_14d = 0;
  uStack_14c = 0;
  local_157 = 0x53;
  FUN_7103864d90(&local_148,*(long *)(param_1 + 0x28),(byte *)&local_160);
  lVar11 = *(long *)(param_1 + 0x48);
  if ((local_138 == (long *)0x0) || (*local_138 != local_130)) {
    *(undefined8 *)(lVar11 + 8) = 0;
LAB_710363c994:
    uVar10 = 0;
    *(undefined8 *)(lVar11 + 0x10) = 0;
  }
  else {
    *(ulong *)(lVar11 + 8) = local_140;
    if (local_140 == 0) goto LAB_710363c994;
    puVar9 = *(undefined8 **)(local_140 + 8);
    *(undefined8 **)(lVar11 + 0x10) = puVar9;
    uVar10 = *puVar9;
  }
  *(undefined8 *)(lVar11 + 0x18) = uVar10;
  uStack_150 = 0;
  uStack_14f = 0;
  uStack_14d = 0;
  uStack_14c = 0;
  uStack_151 = 0;
  uStack_152 = 0;
  local_157 = 0x504f;
  uStack_155 = 0x4c;
  uStack_154 = 0x4755;
  local_160 = 0x4d53561a;
  uStack_15c = 0x525f;
  uStack_15a = 0x54;
  uStack_159 = 0x56;
  uStack_158 = 0x5f;
  FUN_71038566c0(&local_148,*(long *)(*(long *)(param_1 + 0x48) + 8),(byte *)&local_160);
  if (local_140 == 0) {
    lVar11 = *(long *)(param_1 + 0x48) + 0x20;
LAB_710363ca14:
    uVar10 = 0;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined8 *)(lVar11 + 0x10) = 0;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x48);
    lVar11 = lVar12 + 0x20;
    if (*(long *)(local_140 + 8) == 0) goto LAB_710363ca14;
    *(ulong *)(lVar12 + 0x28) = local_140;
    puVar9 = *(undefined8 **)(local_140 + 8);
    *(undefined8 **)(lVar12 + 0x30) = puVar9;
    uVar10 = *puVar9;
  }
  *(undefined8 *)(lVar11 + 0x18) = uVar10;
  uStack_14c = 0;
  local_157 = 0x5f53;
  uStack_155 = 0x56;
  uStack_154 = 0x6569;
  uStack_152 = 0x77;
  uStack_151 = 0x70;
  uStack_150 = 0x6f;
  local_160 = 0x4d535624;
  uStack_15c = 0x475f;
  uStack_15a = 0x41;
  uStack_159 = 0x55;
  uStack_158 = 0x53;
  uStack_14f = 0x7472;
  uStack_14d = 0;
  FUN_7103856830(&local_148,*(long *)(*(long *)(param_1 + 0x48) + 8),(byte *)&local_160);
  if (local_140 == 0) {
    lVar11 = *(long *)(param_1 + 0x48) + 0x40;
LAB_710363ca98:
    uVar10 = 0;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined8 *)(lVar11 + 0x10) = 0;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x48);
    lVar11 = lVar12 + 0x40;
    if (*(long *)(local_140 + 8) == 0) goto LAB_710363ca98;
    *(ulong *)(lVar12 + 0x48) = local_140;
    puVar9 = *(undefined8 **)(local_140 + 8);
    *(undefined8 **)(lVar12 + 0x50) = puVar9;
    uVar10 = *puVar9;
  }
  *(undefined8 *)(lVar11 + 0x18) = uVar10;
  uStack_150 = 0;
  uStack_14f = 0;
  uStack_14d = 0;
  uStack_14c = 0;
  local_157 = 0x7542;
  uStack_155 = 0x66;
  uStack_154 = 0x6566;
  uStack_152 = 0x72;
  local_160 = 0x6d73561c;
  uStack_15c = 0x6150;
  uStack_15a = 0x73;
  uStack_159 = 0x73;
  uStack_158 = 0x43;
  uStack_151 = 0;
  FUN_710385c3f0(&local_148,*(long *)(param_1 + 0x28),(byte *)&local_160);
  lVar11 = *(long *)(param_1 + 0x48);
  if ((local_138 == (long *)0x0) || (*local_138 != local_130)) {
    *(undefined8 *)(lVar11 + 0x68) = 0;
LAB_710363cb18:
    uVar10 = 0;
    *(undefined8 *)(lVar11 + 0x70) = 0;
  }
  else {
    *(ulong *)(lVar11 + 0x68) = local_140;
    if (local_140 == 0) goto LAB_710363cb18;
    puVar9 = *(undefined8 **)(local_140 + 8);
    *(undefined8 **)(lVar11 + 0x70) = puVar9;
    uVar10 = *puVar9;
  }
  *(undefined8 *)(lVar11 + 0x78) = uVar10;
  uStack_14d = 0;
  uStack_14c = 0;
  local_157 = 0x5652;
  uStack_155 = 0x54;
  uStack_154 = 0x7865;
  uStack_152 = 0x50;
  uStack_151 = 0x6c;
  uStack_150 = 0x75;
  local_160 = 0x61685322;
  uStack_15c = 0x6f64;
  uStack_15a = 0x77;
  uStack_159 = 0x5f;
  uStack_158 = 0x53;
  uStack_14f = 0x67;
  FUN_7103856830(&local_148,*(long *)(*(long *)(param_1 + 0x48) + 8),(byte *)&local_160);
  if (local_140 == 0) {
    lVar11 = *(long *)(param_1 + 0x48) + 0x80;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x48);
    lVar11 = lVar12 + 0x80;
    if (*(long *)(local_140 + 8) != 0) {
      *(ulong *)(lVar12 + 0x88) = local_140;
      puVar9 = *(undefined8 **)(local_140 + 8);
      *(undefined8 **)(lVar12 + 0x90) = puVar9;
      uVar10 = *puVar9;
      goto LAB_710363cba0;
    }
  }
  uVar10 = 0;
  *(undefined8 *)(lVar11 + 8) = 0;
  *(undefined8 *)(lVar11 + 0x10) = 0;
LAB_710363cba0:
  *(undefined8 *)(lVar11 + 0x18) = uVar10;
  lVar11 = *(long *)(param_1 + 0x48);
  plVar15 = (long *)((ulong)&local_148 | 1);
  puVar9 = (undefined8 *)(lVar11 + 0x100);
  uVar14 = 0x100;
  do {
    *(float *)(puVar9 + -0xc) = (float)uVar14;
    *(float *)((long)puVar9 + -0x5c) = (float)uVar14;
    std::to_string(uVar14);
    puVar6 = (ulong *)std::string::insert((ulong)&local_160,(char *)0x0);
    ppplVar1 = (long ***)*puVar6;
    local_140 = puVar6[1];
    plVar13 = (long *)puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    uVar5 = (ulong)ppplVar1 >> 1 & 0x7f;
    plVar2 = plVar15;
    if (((ulong)ppplVar1 & 1) != 0) {
      uVar5 = local_140;
      plVar2 = plVar13;
    }
    local_148 = ppplVar1;
    local_138 = plVar13;
    FUN_71002c51f0(puVar9 + -0xb,plVar2,uVar5,param_4,param_5,param_6,param_7,param_8);
    if ((((ulong)ppplVar1 & 1) != 0) && (plVar13 != (long *)0x0)) {
      FUN_710392eb40((ulong)plVar13);
    }
    if (((local_160 & 1) != 0) &&
       (uVar5 = CONCAT44(uStack_14c,CONCAT13(uStack_14d,CONCAT21(uStack_14f,uStack_150))),
       uVar5 != 0)) {
      FUN_710392eb40(uVar5);
    }
    std::to_string(uVar14);
    puVar6 = (ulong *)std::string::insert((ulong)&local_160,(char *)0x0);
    ppplVar1 = (long ***)*puVar6;
    local_140 = puVar6[1];
    plVar13 = (long *)puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    uVar5 = (ulong)ppplVar1 >> 1 & 0x7f;
    plVar2 = plVar15;
    if (((ulong)ppplVar1 & 1) != 0) {
      uVar5 = local_140;
      plVar2 = plVar13;
    }
    local_148 = ppplVar1;
    local_138 = plVar13;
    FUN_71002c51f0(puVar9 + -8,plVar2,uVar5,param_4,param_5,param_6,param_7,param_8);
    if ((((ulong)ppplVar1 & 1) != 0) && (plVar13 != (long *)0x0)) {
      FUN_710392eb40((ulong)plVar13);
    }
    if (((local_160 & 1) != 0) &&
       (uVar5 = CONCAT44(uStack_14c,CONCAT13(uStack_14d,CONCAT21(uStack_14f,uStack_150))),
       uVar5 != 0)) {
      FUN_710392eb40(uVar5);
    }
    std::to_string(uVar14);
    puVar7 = (undefined8 *)std::string::insert((ulong)&local_160,(char *)0x0);
    ppplVar1 = (long ***)*puVar7;
    local_140 = puVar7[1];
    plVar13 = (long *)puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    uVar5 = (ulong)ppplVar1 >> 1 & 0x7f;
    plVar2 = plVar15;
    if (((ulong)ppplVar1 & 1) != 0) {
      uVar5 = local_140;
      plVar2 = plVar13;
    }
    local_148 = ppplVar1;
    local_138 = plVar13;
    FUN_71002c51f0(puVar9 + -5,plVar2,uVar5,param_4,param_5,param_6,param_7,param_8);
    if ((((ulong)ppplVar1 & 1) != 0) && (plVar13 != (long *)0x0)) {
      FUN_710392eb40((ulong)plVar13);
    }
    if (((local_160 & 1) != 0) &&
       (uVar5 = CONCAT44(uStack_14c,CONCAT13(uStack_14d,CONCAT21(uStack_14f,uStack_150))),
       uVar5 != 0)) {
      FUN_710392eb40(uVar5);
    }
    FUN_710385c280(&local_148,*(long *)(param_1 + 0x28),(byte *)(puVar9 + -5));
    if ((local_138 == (long *)0x0) || (*local_138 != local_130)) {
      puVar9[-1] = 0;
LAB_710363cd94:
      uVar10 = 0;
      *puVar9 = 0;
    }
    else {
      puVar9[-1] = local_140;
      if (local_140 == 0) goto LAB_710363cd94;
      puVar7 = *(undefined8 **)(local_140 + 8);
      *puVar9 = puVar7;
      uVar10 = *puVar7;
    }
    puVar9[1] = uVar10;
    puVar7 = puVar9 + 2;
    uVar14 = uVar14 << 1;
    puVar9 = puVar9 + 0xe;
    if (puVar7 == (undefined8 *)(lVar11 + 0x1f0)) {
      if (local_b0 != 0) {
        local_a8 = local_b0;
        FUN_710392eb40(local_b0);
      }
      pvVar3 = local_b8;
      pvVar4 = local_d0;
      if ((local_c8 & 1) != 0) {
        nu::VirtualFreeHook(local_b8);
        FUN_710392eb40((ulong)pvVar3);
        pvVar4 = local_d0;
      }
      pvVar3 = local_e8;
      local_d0 = pvVar4;
      if ((local_e0 & 1) != 0) {
        nu::VirtualFreeHook(pvVar4);
        FUN_710392eb40((ulong)pvVar4);
        pvVar3 = local_e8;
      }
      pvVar4 = local_100;
      local_e8 = pvVar3;
      if ((local_f8 & 1) != 0) {
        nu::VirtualFreeHook(pvVar3);
        FUN_710392eb40((ulong)pvVar3);
        pvVar4 = local_100;
      }
      pvVar3 = local_118;
      local_100 = pvVar4;
      if ((local_110 & 1) != 0) {
        nu::VirtualFreeHook(pvVar4);
        FUN_710392eb40((ulong)pvVar4);
        pvVar3 = local_118;
      }
      if (((ulong)local_128 & 1) != 0) {
        local_118 = pvVar3;
        nu::VirtualFreeHook(pvVar3);
        FUN_710392eb40((ulong)pvVar3);
      }
      return;
    }
  } while( true );
}

