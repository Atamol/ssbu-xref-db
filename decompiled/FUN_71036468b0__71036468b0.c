// addr:      71036468b0
// offset:    0x36468b0
// name:      FUN_71036468b0
// mangled:   
// signature: undefined __cdecl FUN_71036468b0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 * param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71036468b0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  char *pcVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  void *pvVar5;
  byte bVar6;
  undefined7 uVar7;
  int iVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong *puVar11;
  long ****pppplVar12;
  undefined8 *puVar13;
  void *pvVar14;
  ulong *puVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 local_168;
  undefined7 uStack_160;
  long ***local_158;
  byte local_150;
  undefined7 uStack_14f;
  undefined1 *local_148;
  undefined8 local_140;
  undefined8 local_138;
  ulong local_130;
  undefined8 local_128;
  undefined1 *local_120;
  byte local_118;
  undefined1 uStack_117;
  undefined6 uStack_116;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 *local_108;
  ulong local_100;
  undefined8 uStack_f8;
  void *local_f0;
  ulong local_e8;
  undefined8 local_e0;
  void *local_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 local_6c [3];
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    return;
  }
  lVar16 = *(long *)(DAT_7105337ce8 + 0x10);
  local_b0 = (undefined8 *)0x0;
  puStack_a8 = (undefined8 *)0x0;
  local_a0 = 1;
  local_74 = 0xf;
  local_c0 = (void *)0x0;
  local_b8 = (undefined8 *)0x0;
  local_88 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_98 = 0x100000000;
  uStack_90 = 0;
  local_84 = 0;
  local_80 = 0;
  local_e0 = 0;
  local_d8 = (void *)0x0;
  local_f0 = (void *)0x0;
  local_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  uStack_110 = 0;
  uStack_10f = 0;
  local_108 = (undefined1 *)0x0;
  local_120 = (undefined1 *)0x0;
  local_118 = 0;
  uStack_117 = 0;
  uStack_116 = 0;
  local_130 = 0;
  local_128 = 0;
  local_7c = 0;
  local_158._0_1_ = 0;
  local_158._1_7_ = 0x7000000;
  local_148 = *(undefined1 **)(lVar16 + 8);
  local_140 = *(undefined8 *)(lVar16 + 0x10);
  local_138 = *(undefined8 *)(lVar16 + 0x18);
  local_150 = 0x60;
  uStack_14f = 0x710522ff;
  FUN_71035a2780((long *)&local_b8,&local_158,param_3,param_4,param_5,param_6,param_7,param_8);
  local_138 = *(undefined8 *)(lVar16 + 0x18);
  local_148 = *(undefined1 **)(lVar16 + 8);
  local_140 = *(undefined8 *)(lVar16 + 0x10);
  local_158._0_1_ = 4;
  local_158._1_7_ = 0x7000000;
  local_150 = 0x60;
  uStack_14f = 0x710522ff;
  if (local_b0 < puStack_a8) {
    local_b0[2] = local_148;
    local_b0[3] = local_140;
    local_b0[4] = local_138;
    *local_b0 = 0x700000004;
    local_b0[1] = &PTR_FUN_710522ff60;
    local_b0 = local_b0 + 5;
  }
  else {
    FUN_71035a2780((long *)&local_b8,&local_158,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  if (((DAT_7105339348 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_7105339348), iVar8 != 0)) {
    DAT_7105339308 = 0;
    DAT_7105339310 = 0;
    DAT_7105339338 = 0;
    _DAT_7105339300 = 0x305f305f300a;
    _DAT_7105339318 = 0x305f315f300a;
    DAT_7105339340 = 0;
    _DAT_7105339330 = 0x305f3106;
    DAT_7105339320 = 0;
    DAT_7105339328 = 0;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_7105339348);
  }
  if (((DAT_7105339350 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_7105339350), iVar8 != 0)) {
    DAT_71053392e8 = 0x20;
    DAT_71053392f8._2_6_ = 0;
    _DAT_71053392f1 = 0x43454646455f54;
    DAT_71053392f8._0_1_ = 0x54;
    DAT_71053392e9._0_7_ = 0x4f505f45444f4e;
    DAT_71053392e9._7_1_ = 0x53;
    DAT_71053392f8._1_1_ = 0;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_7105339350);
  }
  lVar17 = 0;
  lVar16 = param_1 + 0x30;
  do {
    pbVar2 = &DAT_7105339300 + lVar17;
    FUN_710355afd0((ulong *)&local_158,"mo_blur_",pbVar2,param_4,param_5,param_6,param_7,param_8);
    FUN_710355b6b0((ulong *)&local_158,&DAT_7104338c82,3,param_4,param_5,param_6,param_7,param_8);
    puVar4 = local_120;
    puVar9 = local_148;
    uStack_160 = uStack_14f;
    uVar7 = local_158._1_7_;
    bVar6 = (byte)local_158;
    uVar3 = CONCAT17(local_150,local_158._1_7_);
    local_150 = 0;
    uStack_14f = 0;
    local_148 = (undefined1 *)0x0;
    local_158._0_1_ = 0;
    local_158._1_7_ = 0;
    local_168._0_4_ = (undefined4)uVar7;
    local_168._4_4_ = (undefined4)((ulong)uVar3 >> 0x20);
    if ((local_130 & 1) == 0) {
      local_130 = local_130 & 0xffffffffffff0000;
    }
    else {
      *local_120 = 0;
      local_128 = 0;
      if ((local_130 & 1) != 0) {
        nu::VirtualFreeHook(local_120);
        FUN_710392eb40((ulong)puVar4);
        local_130 = 0;
      }
    }
    puVar4 = local_148;
    local_130 = CONCAT71(local_130._1_7_,bVar6);
    *(ulong *)((long)((ulong)&local_130 | 1) + 7) = CONCAT71(uStack_160,local_168._7_1_);
    *(ulong *)((ulong)&local_130 | 1) = CONCAT44(local_168._4_4_,(undefined4)local_168);
    local_120 = puVar9;
    uStack_160 = 0;
    local_168._0_4_ = 0;
    local_168._4_4_ = 0;
    if (((byte)local_158 & 1) != 0) {
      nu::VirtualFreeHook(local_148);
      FUN_710392eb40((ulong)puVar4);
    }
    FUN_710355afd0((ulong *)&local_158,"mo_blur_",pbVar2,param_4,param_5,param_6,param_7,param_8);
    FUN_710355b6b0((ulong *)&local_158,&DAT_71043dea74,3,param_4,param_5,param_6,param_7,param_8);
    puVar4 = local_108;
    puVar9 = local_148;
    uStack_160 = uStack_14f;
    uVar7 = local_158._1_7_;
    bVar6 = (byte)local_158;
    uVar3 = CONCAT17(local_150,local_158._1_7_);
    local_150 = 0;
    uStack_14f = 0;
    local_148 = (undefined1 *)0x0;
    local_158._0_1_ = 0;
    local_158._1_7_ = 0;
    local_168._0_4_ = (undefined4)uVar7;
    local_168._4_4_ = (undefined4)((ulong)uVar3 >> 0x20);
    if ((local_118 & 1) != 0) {
      *local_108 = 0;
      uStack_110 = 0;
      uStack_10f = 0;
      if ((local_118 & 1) != 0) {
        nu::VirtualFreeHook(local_108);
        FUN_710392eb40((ulong)puVar4);
      }
    }
    puVar4 = local_148;
    local_118 = bVar6;
    uStack_10f = uStack_160;
    uStack_117 = (undefined1)(undefined4)local_168;
    uStack_116 = (undefined6)(CONCAT44(local_168._4_4_,(undefined4)local_168) >> 8);
    uStack_110 = (undefined1)((uint)local_168._4_4_ >> 0x18);
    local_108 = puVar9;
    uStack_160 = 0;
    local_168._0_4_ = 0;
    local_168._4_4_ = 0;
    if (((byte)local_158 & 1) != 0) {
      nu::VirtualFreeHook(local_148);
      FUN_710392eb40((ulong)puVar4);
    }
    FUN_710355afd0((ulong *)&local_158,"MO_PS_SUB_BLUR_",pbVar2,param_4,param_5,param_6,param_7,
                   param_8);
    uVar10 = (ulong)((byte)local_158 >> 1);
    puVar9 = (undefined1 *)((ulong)&local_158 | 1);
    if (((byte)local_158 & 1) != 0) {
      uVar10 = CONCAT71(uStack_14f,local_150);
      puVar9 = local_148;
    }
    FUN_71002c51f0(&local_100,puVar9,uVar10,param_4,param_5,param_6,param_7,param_8);
    uVar10 = (ulong)((byte)local_158 >> 1);
    puVar9 = (undefined1 *)((ulong)&local_158 | 1);
    if (((byte)local_158 & 1) != 0) {
      uVar10 = CONCAT71(uStack_14f,local_150);
      puVar9 = local_148;
    }
    FUN_71002c51f0(&local_e8,puVar9,uVar10,param_4,param_5,param_6,param_7,param_8);
    pppplVar12 = (long ****)CONCAT71(_DAT_71053392f1,DAT_71053392e9._7_1_);
    puVar13 = (undefined8 *)
              CONCAT62(DAT_71053392f8._2_6_,
                       CONCAT11(DAT_71053392f8._1_1_,(undefined1)DAT_71053392f8));
    if ((DAT_71053392e8 & 1) == 0) {
      puVar13 = &DAT_71053392e9;
      pppplVar12 = (long ****)(ulong)(DAT_71053392e8 >> 1);
    }
    FUN_71002c51f0(&local_d0,puVar13,(ulong)pppplVar12,param_4,param_5,param_6,param_7,param_8);
    FUN_710364e730(lVar16,&local_130,pppplVar12,param_4,param_5,param_6,param_7,param_8);
    puVar9 = local_148;
    if (((byte)local_158 & 1) != 0) {
      nu::VirtualFreeHook(local_148);
      FUN_710392eb40((ulong)puVar9);
    }
    lVar17 = lVar17 + 0x18;
    lVar16 = lVar16 + 0x12a0;
  } while (lVar17 != 0x48);
  puVar9 = (undefined1 *)
           FUN_710392e290(0x10,0x78,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined1 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_168._0_4_ = 0;
      local_158._0_1_ = 0x78;
      local_158._1_7_ = 0;
      pppplVar12 = &local_158;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_168);
      if (((uVar10 & 1) != 0) &&
         (puVar9 = (undefined1 *)
                   FUN_710392e290(0x10,0x78,pppplVar12,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined1 *)0x0)) goto LAB_7103646cf4;
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_7103646cf4:
  local_148 = puVar9 + 0x78;
  local_158._0_1_ = (byte)puVar9;
  bVar6 = (byte)local_158;
  local_158._1_7_ = (undefined7)((ulong)puVar9 >> 8);
  uVar7 = local_158._1_7_;
  *puVar9 = 0x22;
  puVar9[0x18] = 0x28;
  pcVar1 = puVar9 + 8;
  pcVar1[0] = 'U';
  pcVar1[1] = 'B';
  pcVar1[2] = '_';
  pcVar1[3] = 'A';
  pcVar1[4] = 'C';
  pcVar1[5] = 'T';
  pcVar1[6] = 'O';
  pcVar1[7] = 'R';
  *(undefined8 *)(puVar9 + 0x10) = 0x305f;
  pcVar1 = puVar9 + 1;
  pcVar1[0] = 'M';
  pcVar1[1] = 'O';
  pcVar1[2] = '_';
  pcVar1[3] = 'P';
  pcVar1[4] = 'S';
  pcVar1[5] = '_';
  pcVar1[6] = 'S';
  pcVar1[7] = 'U';
  pcVar1 = puVar9 + 0x20;
  pcVar1[0] = 'U';
  pcVar1[1] = 'B';
  pcVar1[2] = '_';
  pcVar1[3] = 'B';
  pcVar1[4] = 'L';
  pcVar1[5] = 'U';
  pcVar1[6] = 'R';
  pcVar1[7] = '_';
  *(undefined8 *)(puVar9 + 0x28) = 0x305f305f30;
  pcVar1 = puVar9 + 0x19;
  pcVar1[0] = 'M';
  pcVar1[1] = 'O';
  pcVar1[2] = '_';
  pcVar1[3] = 'P';
  pcVar1[4] = 'S';
  pcVar1[5] = '_';
  pcVar1[6] = 'S';
  pcVar1[7] = 'U';
  *(undefined8 *)(puVar9 + 0x30) = 0;
  *(undefined8 *)(puVar9 + 0x38) = 0x5f52554c425f4255;
  puVar9[0x30] = 0x28;
  *(undefined8 *)(puVar9 + 0x40) = 0x305f315f30;
  *(undefined8 *)(puVar9 + 0x48) = 0;
  *(undefined2 *)(puVar9 + 0x35) = 0x5f53;
  puVar9[0x37] = 0x53;
  *(undefined4 *)(puVar9 + 0x31) = 0x505f4f4d;
  *(undefined8 *)(puVar9 + 0x50) = 0x5f52554c425f4255;
  puVar9[0x48] = 0x24;
  puVar9[0x4f] = 0x53;
  *(undefined2 *)(puVar9 + 0x4d) = 0x5f53;
  *(undefined4 *)(puVar9 + 0x49) = 0x505f4f4d;
  *(undefined8 *)(puVar9 + 0x58) = 0x305f31;
  *(undefined8 *)(puVar9 + 0x60) = 0;
  puVar9[0x60] = 0x22;
  puVar9[0x67] = 0x53;
  *(undefined2 *)(puVar9 + 0x65) = 0x5f53;
  *(undefined4 *)(puVar9 + 0x61) = 0x505f4f4d;
  *(undefined8 *)(puVar9 + 0x68) = 0x454752454d5f4255;
  *(undefined8 *)(puVar9 + 0x70) = 0x305f;
  local_150 = (byte)local_148;
  uStack_14f = (undefined7)((ulong)local_148 >> 8);
  puVar11 = (ulong *)FUN_710392e290(0x10,0x30,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (ulong *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_6c[0] = 0;
      local_168._0_4_ = 0x30;
      local_168._4_4_ = 0;
      pppplVar12 = (long ****)&local_168;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
      if (((uVar10 & 1) != 0) &&
         (puVar11 = (ulong *)FUN_710392e290(0x10,0x30,pppplVar12,param_4,param_5,param_6,param_7,
                                            param_8), puVar11 != (ulong *)0x0)) goto LAB_7103646e50;
    }
    puVar11 = (ulong *)0x0;
  }
LAB_7103646e50:
  FUN_7103655da0(puVar11,&local_158,0,param_4,param_5,param_6,param_7,param_8);
  puVar15 = *(ulong **)(param_1 + 0x3830);
  *(ulong **)(param_1 + 0x3830) = puVar11;
  if (puVar15 != (ulong *)0x0) {
    puVar13 = (undefined8 *)puVar15[3];
    if (puVar13 != (undefined8 *)0x0) {
      puVar18 = (undefined8 *)puVar15[4];
      if (puVar18 == puVar13) {
        puVar15[4] = (ulong)puVar13;
        puVar18 = puVar13;
      }
      else {
        do {
          puVar18 = puVar18 + -4;
          (**(code **)*puVar18)(puVar18);
        } while (puVar13 != puVar18);
        puVar18 = (undefined8 *)puVar15[3];
        puVar15[4] = (ulong)puVar13;
      }
      if (puVar18 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar18);
      }
    }
    puVar13 = (undefined8 *)*puVar15;
    if (puVar13 != (undefined8 *)0x0) {
      puVar18 = (undefined8 *)puVar15[1];
      if (puVar18 == puVar13) {
        puVar15[1] = (ulong)puVar13;
        puVar18 = puVar13;
      }
      else {
        do {
          puVar18 = puVar18 + -4;
          (**(code **)*puVar18)(puVar18);
        } while (puVar13 != puVar18);
        puVar18 = (undefined8 *)*puVar15;
        puVar15[1] = (ulong)puVar13;
      }
      if (puVar18 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar18);
      }
    }
    FUN_710392eb40((ulong)puVar15);
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (puVar9 != (undefined1 *)0x0) {
    lVar16 = 0;
    do {
      if ((puVar9[lVar16 + 0x60] & 1) != 0) {
        pvVar14 = *(void **)(puVar9 + lVar16 + 0x70);
        nu::VirtualFreeHook(pvVar14);
        FUN_710392eb40((ulong)pvVar14);
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x78);
    local_150 = bVar6;
    uStack_14f = uVar7;
    FUN_710392eb40((ulong)puVar9);
  }
  if (local_b8 != (undefined8 *)0x0) {
    local_b0 = local_b8;
    FUN_710392eb40((ulong)local_b8);
  }
  pvVar5 = local_c0;
  pvVar14 = local_d8;
  if ((local_d0 & 1) != 0) {
    nu::VirtualFreeHook(local_c0);
    FUN_710392eb40((ulong)pvVar5);
    pvVar14 = local_d8;
  }
  pvVar5 = local_f0;
  local_d8 = pvVar14;
  if ((local_e8 & 1) != 0) {
    nu::VirtualFreeHook(pvVar14);
    FUN_710392eb40((ulong)pvVar14);
    pvVar5 = local_f0;
  }
  puVar9 = local_108;
  local_f0 = pvVar5;
  if ((local_100 & 1) != 0) {
    nu::VirtualFreeHook(pvVar5);
    FUN_710392eb40((ulong)pvVar5);
    puVar9 = local_108;
  }
  puVar4 = local_120;
  local_108 = puVar9;
  if ((local_118 & 1) != 0) {
    nu::VirtualFreeHook(puVar9);
    FUN_710392eb40((ulong)puVar9);
    puVar4 = local_120;
  }
  if ((local_130 & 1) != 0) {
    local_120 = puVar4;
    nu::VirtualFreeHook(puVar4);
    FUN_710392eb40((ulong)puVar4);
  }
  return;
}

