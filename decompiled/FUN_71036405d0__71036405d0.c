// addr:      71036405d0
// offset:    0x36405d0
// name:      FUN_71036405d0
// mangled:   
// signature: undefined __cdecl FUN_71036405d0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 * param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71036405d0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  ulong uVar5;
  long ****pppplVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  undefined1 *puVar11;
  byte local_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined2 local_15f;
  undefined1 local_15d;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined **local_148;
  long *local_140;
  long local_138;
  undefined8 local_130;
  ulong local_128;
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
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  
  if (*(char *)(param_1 + 0x72bc) != '\0') {
    return;
  }
  FUN_7103641800(param_1 + 0x6ff0,DAT_7105337ce8,param_3,param_4,param_5,param_6,param_7,param_8);
  pppplVar6 = (long ****)0x1;
  FUN_7103553af0(*(long *)(*(long *)(param_1 + 0x7050) + 0x490),(long *)(param_1 + 0x7040),
                 (long ****)0x1,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(*(long *)(param_1 + 0x7040) + 2) = 1;
  FUN_7103641800(param_1 + 0x7060,DAT_7105337ce8,pppplVar6,param_4,param_5,param_6,param_7,param_8);
  pppplVar6 = (long ****)0x1;
  FUN_7103553af0(*(long *)(*(long *)(param_1 + 0x70c0) + 0x490),(long *)(param_1 + 0x70b0),
                 (long ****)0x1,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(*(long *)(param_1 + 0x70b0) + 2) = 1;
  FUN_7103641800(param_1 + 0x70d0,DAT_7105337ce8,pppplVar6,param_4,param_5,param_6,param_7,param_8);
  pppplVar6 = (long ****)0x1;
  FUN_7103553af0(*(long *)(*(long *)(param_1 + 0x7130) + 0x490),(long *)(param_1 + 0x7120),
                 (long ****)0x1,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(*(long *)(param_1 + 0x7120) + 2) = 1;
  FUN_7103641800(param_1 + 0x7140,DAT_7105337ce8,pppplVar6,param_4,param_5,param_6,param_7,param_8);
  pppplVar6 = (long ****)0x1;
  FUN_7103553af0(*(long *)(*(long *)(param_1 + 0x71a0) + 0x490),(long *)(param_1 + 0x7190),
                 (long ****)0x1,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(*(long *)(param_1 + 0x7190) + 2) = 1;
  FUN_7103641800(param_1 + 0x71b0,DAT_7105337ce8,pppplVar6,param_4,param_5,param_6,param_7,param_8);
  pppplVar6 = (long ****)0x1;
  FUN_7103553af0(*(long *)(*(long *)(param_1 + 0x7210) + 0x490),(long *)(param_1 + 0x7200),
                 (long ****)0x1,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(*(long *)(param_1 + 0x7200) + 2) = 1;
  FUN_7103641800(param_1 + 0x7220,DAT_7105337ce8,pppplVar6,param_4,param_5,param_6,param_7,param_8);
  FUN_7103553af0(*(long *)(*(long *)(param_1 + 0x7280) + 0x490),(long *)(param_1 + 0x7270),
                 (long ****)0x1,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(*(long *)(param_1 + 0x7270) + 2) = 1;
  local_a8 = (undefined8 *)0x0;
  local_a0 = (undefined8 *)0x0;
  local_6c = 0xf;
  local_90 = 0x100000000;
  uStack_88 = 0;
  local_b8 = (void *)0x0;
  local_b0 = (undefined8 *)0x0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_98 = 1;
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
  local_128 = 0;
  uStack_120 = 0;
  local_74 = 0;
  if (((DAT_7105339170 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_7105339170), iVar4 != 0)) {
    DAT_71053390d8 = 0x2c;
    DAT_71053390e8._1_6_ = 0x455341425f30;
    DAT_71053390e8._7_1_ = 0;
    DAT_71053390f0 = 0;
    DAT_71053390f8 = 0;
    DAT_7105339100 = (char *)0x0;
    _DAT_71053390e1 = 0x59414c5f5255;
    _DAT_71053390e7 = 0x5245;
    DAT_71053390d9._0_1_ = 'B';
    DAT_71053390d9._1_1_ = 'L';
    DAT_71053390d9._2_1_ = '_';
    DAT_71053390d9._3_1_ = 'P';
    DAT_71053390d9._4_1_ = 'S';
    DAT_71053390d9._5_1_ = '_';
    DAT_71053390d9._6_1_ = 'B';
    DAT_71053390d9._7_1_ = 'L';
    iVar4 = FUN_710392e1f0(&local_168,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                           param_8);
    if ((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_150 = 0x20;
      uVar5 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_150);
      if ((uVar5 & 1) != 0) {
        FUN_710392e1f0(&local_168,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,(void *)CONCAT71(uStack_167,local_168));
    DAT_71053390f0 = 0x21;
    DAT_71053390f8 = 0x18;
    DAT_7105339100 = (char *)CONCAT71(uStack_167,local_168);
    builtin_strncpy(DAT_7105339100,"BL_PS_BLUR_LAYER0_BLUR_0",0x19);
    DAT_7105339108 = 0;
    DAT_7105339110 = 0;
    DAT_7105339118 = (char *)0x0;
    iVar4 = FUN_710392e1f0(&local_168,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                           param_8);
    if ((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_150 = 0x20;
      uVar5 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_150);
      if ((uVar5 & 1) != 0) {
        FUN_710392e1f0(&local_168,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,(void *)CONCAT71(uStack_167,local_168));
    DAT_7105339108 = 0x21;
    DAT_7105339110 = 0x18;
    DAT_7105339118 = (char *)CONCAT71(uStack_167,local_168);
    builtin_strncpy(DAT_7105339118,"BL_PS_BLUR_LAYER0_BLUR_1",0x19);
    DAT_7105339120 = 0x1e;
    DAT_7105339148._3_5_ = 0;
    DAT_7105339128._1_7_ = 0x455341425f5255;
    _DAT_7105339121 = 0x425f53505f4c42;
    DAT_7105339128._0_1_ = 0x4c;
    DAT_7105339160._3_5_ = 0;
    _DAT_7105339141 = 0x52554c425f5255;
    DAT_7105339148._0_1_ = 0x5f;
    DAT_7105339138 = 0x22;
    DAT_7105339139._0_7_ = 0x425f53505f4c42;
    DAT_7105339139._7_1_ = 0x4c;
    DAT_7105339148._1_1_ = 0x30;
    DAT_7105339150 = 0x22;
    DAT_7105339160._1_1_ = 0x31;
    _DAT_7105339130 = 0;
    DAT_7105339148._2_1_ = 0;
    DAT_7105339160._2_1_ = 0;
    _DAT_7105339159 = 0x52554c425f5255;
    DAT_7105339160._0_1_ = 0x5f;
    DAT_7105339151._0_7_ = 0x425f53505f4c42;
    DAT_7105339151._7_1_ = 0x4c;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_7105339170);
  }
  if (((DAT_7105339178 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_7105339178), iVar4 != 0)) {
    DAT_7105338fb8 = 0;
    DAT_7105338fc0 = 0;
    DAT_7105338fc8 = (char *)0x0;
    iVar4 = FUN_710392e1f0(&local_168,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                           param_8);
    if ((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_150 = 0x20;
      uVar5 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_150);
      if ((uVar5 & 1) != 0) {
        FUN_710392e1f0(&local_168,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,(void *)CONCAT71(uStack_167,local_168));
    DAT_7105338fb8 = 0x21;
    DAT_7105338fc0 = 0x18;
    DAT_7105338fc8 = (char *)CONCAT71(uStack_167,local_168);
    builtin_strncpy(DAT_7105338fc8,"BL_PS_BLUR_BASE_WITHA_VS",0x19);
    DAT_7105338fd8 = 0;
    DAT_7105338fe0 = (char *)0x0;
    DAT_7105338fd0 = 0;
    iVar4 = FUN_710392e1f0(&local_168,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                           param_8);
    if ((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_150 = 0x20;
      uVar5 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_150);
      if ((uVar5 & 1) != 0) {
        FUN_710392e1f0(&local_168,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,(void *)CONCAT71(uStack_167,local_168));
    DAT_7105338fd0 = 0x21;
    DAT_7105338fd8 = 0x18;
    DAT_7105338fe0 = (char *)CONCAT71(uStack_167,local_168);
    builtin_strncpy(DAT_7105338fe0,"BL_PS_BLUR_BASE_WITHA_PS",0x19);
    DAT_7105338fe8 = 0x24;
    DAT_7105338ff8._4_4_ = 0;
    DAT_7105339000 = 0;
    DAT_7105338ff8._1_2_ = 0x5356;
    DAT_7105338ff8._3_1_ = 0;
    DAT_7105339008 = 0;
    DAT_7105339010 = (char *)0x0;
    _DAT_7105338ff1 = 0x52554c425f5255;
    DAT_7105338ff8._0_1_ = 0x5f;
    DAT_7105338fe9._0_7_ = 0x425f53505f4c42;
    DAT_7105338fe9._7_1_ = 0x4c;
    iVar4 = FUN_710392e1f0(&local_168,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                           param_8);
    if ((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_150 = 0x20;
      uVar5 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_150);
      if ((uVar5 & 1) != 0) {
        FUN_710392e1f0(&local_168,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,(void *)CONCAT71(uStack_167,local_168));
    DAT_7105339000 = 0x21;
    DAT_7105339008 = 0x18;
    DAT_7105339010 = (char *)CONCAT71(uStack_167,local_168);
    builtin_strncpy(DAT_7105339010,"BL_PS_BLUR_BLUR_WITHA_PS",0x19);
    DAT_7105339018 = 0x24;
    DAT_7105339028._4_4_ = 0;
    DAT_7105339030 = 0;
    _DAT_7105339021 = 0x52554c425f5255;
    DAT_7105339028._0_1_ = 0x5f;
    DAT_7105339019._0_7_ = 0x425f53505f4c42;
    DAT_7105339019._7_1_ = 0x4c;
    DAT_7105339028._1_2_ = 0x5356;
    DAT_7105339028._3_1_ = 0;
    DAT_7105339038 = 0;
    DAT_7105339040 = (char *)0x0;
    iVar4 = FUN_710392e1f0(&local_168,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                           param_8);
    if ((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_150 = 0x20;
      uVar5 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_150);
      if ((uVar5 & 1) != 0) {
        FUN_710392e1f0(&local_168,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,(void *)CONCAT71(uStack_167,local_168));
    DAT_7105339030 = 0x21;
    DAT_7105339038 = 0x18;
    DAT_7105339040 = (char *)CONCAT71(uStack_167,local_168);
    builtin_strncpy(DAT_7105339040,"BL_PS_BLUR_BLUR_WITHA_PS",0x19);
    DAT_7105339048._1_7_ = 0x425f53505f4c42;
    DAT_7105339050._0_1_ = 0x4c;
    DAT_7105339058._4_4_ = 0;
    DAT_7105339050._1_7_ = 0x455341425f5255;
    DAT_7105339058._0_1_ = 0x5f;
    DAT_7105339048._0_1_ = 0x24;
    DAT_7105339058._1_2_ = 0x5356;
    DAT_7105339058._3_1_ = 0;
    DAT_7105339060 = 0x24;
    uRam0000007105339074 = 0;
    DAT_7105339073 = 0;
    DAT_7105339061._0_7_ = 0x425f53505f4c42;
    DAT_7105339061._7_1_ = 0x4c;
    DAT_7105339069._0_7_ = 0x455341425f5255;
    DAT_7105339069._7_1_ = 0x5f;
    DAT_7105339071 = 0x5350;
    DAT_7105339078 = 0x24;
    DAT_7105339079._0_7_ = 0x425f53505f4c42;
    DAT_7105339079._7_1_ = 0x4c;
    uRam000000710533908c = 0;
    _DAT_7105339089 = 0x5356;
    DAT_7105339081._0_7_ = 0x52554c425f5255;
    DAT_7105339081._7_1_ = 0x5f;
    DAT_710533908b = 0;
    DAT_7105339090 = 0x24;
    DAT_71053390a0._4_4_ = 0;
    DAT_71053390a0._1_2_ = 0x5350;
    _DAT_7105339099 = 0x52554c425f5255;
    DAT_71053390a0._0_1_ = 0x5f;
    DAT_7105339091._0_7_ = 0x425f53505f4c42;
    DAT_7105339091._7_1_ = 0x4c;
    DAT_71053390a0._3_1_ = 0;
    DAT_71053390a8 = 0x24;
    DAT_71053390a9._0_7_ = 0x425f53505f4c42;
    DAT_71053390a9._7_1_ = 0x4c;
    uRam00000071053390bc = 0;
    _DAT_71053390b9 = 0x5356;
    DAT_71053390b1._0_7_ = 0x52554c425f5255;
    DAT_71053390b1._7_1_ = 0x5f;
    DAT_71053390bb = 0;
    DAT_71053390c0 = 0x24;
    DAT_71053390d0._4_4_ = 0;
    DAT_71053390d0._1_2_ = 0x5350;
    _DAT_71053390c9 = 0x52554c425f5255;
    DAT_71053390d0._0_1_ = 0x5f;
    DAT_71053390c1._0_7_ = 0x425f53505f4c42;
    DAT_71053390c1._7_1_ = 0x4c;
    DAT_71053390d0._3_1_ = 0;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_7105339178);
  }
  if (((DAT_7105339180 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_7105339180), iVar4 != 0)) {
    DAT_7105338fa0 = 0x20;
    DAT_7105338fb0._2_6_ = 0;
    _DAT_7105338fa9 = 0x43454646455f54;
    DAT_7105338fb0._0_1_ = 0x54;
    DAT_7105338fa1._0_7_ = 0x4f505f45444f4e;
    DAT_7105338fa1._7_1_ = 0x53;
    DAT_7105338fb0._1_1_ = 0;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_7105339180);
  }
  pppplVar6 = (long ****)CONCAT71(_DAT_7105338fa9,DAT_7105338fa1._7_1_);
  puVar8 = (undefined8 *)
           CONCAT62(DAT_7105338fb0._2_6_,CONCAT11(DAT_7105338fb0._1_1_,(undefined1)DAT_7105338fb0));
  if ((DAT_7105338fa0 & 1) == 0) {
    puVar8 = &DAT_7105338fa1;
    pppplVar6 = (long ****)(ulong)(DAT_7105338fa0 >> 1);
  }
  FUN_71002c51f0(&local_c8,puVar8,(ulong)pppplVar6,param_4,param_5,param_6,param_7,param_8);
  puVar8 = (undefined8 *)(param_1 + 0x7018);
  puVar11 = (undefined1 *)0x0;
  lVar7 = param_1 + 0x30;
  puVar10 = (ulong *)&DAT_71053390d8;
  do {
    if (&stack0xffffff8efacc6f20 != puVar11) {
      pppplVar6 = *(long *****)(puVar11 + 0x7105338fc0);
      puVar1 = *(undefined1 **)(puVar11 + 0x7105338fc8);
      if ((puVar11[0x7105338fb8] & 1) == 0) {
        puVar1 = puVar11 + 0x7105338fb9;
        pppplVar6 = (long ****)(ulong)((byte)puVar11[0x7105338fb8] >> 1);
      }
      FUN_71002c51f0(&local_128,puVar1,(ulong)pppplVar6,param_4,param_5,param_6,param_7,param_8);
    }
    if (&stack0xffffff8efacc6f20 != puVar11) {
      pppplVar6 = (long ****)(ulong)((byte)puVar11[0x7105338fd0] >> 1);
      puVar1 = puVar11 + 0x7105338fd1;
      if ((puVar11[0x7105338fd0] & 1) != 0) {
        pppplVar6 = *(long *****)(puVar11 + 0x7105338fd8);
        puVar1 = *(undefined1 **)(puVar11 + 0x7105338fe0);
      }
      FUN_71002c51f0(&local_110,puVar1,(ulong)pppplVar6,param_4,param_5,param_6,param_7,param_8);
    }
    if (&local_e0 != puVar10) {
      pppplVar6 = (long ****)puVar10[1];
      puVar1 = (undefined1 *)puVar10[2];
      if (((byte)*puVar10 & 1) == 0) {
        puVar1 = (undefined1 *)((long)puVar10 + 1);
        pppplVar6 = (long ****)(ulong)(byte)((byte)*puVar10 >> 1);
      }
      FUN_71002c51f0(&local_e0,puVar1,(ulong)pppplVar6,param_4,param_5,param_6,param_7,param_8);
    }
    if (&local_f8 != puVar10) {
      pppplVar6 = (long ****)puVar10[1];
      puVar1 = (undefined1 *)puVar10[2];
      if (((byte)*puVar10 & 1) == 0) {
        puVar1 = (undefined1 *)((long)puVar10 + 1);
        pppplVar6 = (long ****)(ulong)(byte)((byte)*puVar10 >> 1);
      }
      FUN_71002c51f0(&local_f8,puVar1,(ulong)pppplVar6,param_4,param_5,param_6,param_7,param_8);
    }
    local_a8 = local_b0;
    local_130 = *puVar8;
    local_140 = (long *)puVar8[-2];
    local_138 = puVar8[-1];
    local_150 = 0x600000000;
    local_148 = &PTR_FUN_710522ff60;
    if (local_b0 < local_a0) {
      *(undefined4 *)local_b0 = 0;
      *(undefined4 *)((long)local_b0 + 4) = 6;
      local_b0[1] = &PTR_FUN_7105230060;
      local_b0[2] = local_140;
      local_b0[3] = local_138;
      local_b0[4] = local_130;
      local_b0[1] = &PTR_FUN_710522ff60;
      local_a8 = local_b0 + 5;
    }
    else {
      FUN_710356b9a0((long *)&local_b0,(undefined4 *)&local_150,pppplVar6,param_4,param_5,param_6,
                     param_7,param_8);
    }
    local_140 = (long *)puVar8[-2];
    local_138 = puVar8[-1];
    local_130 = *puVar8;
    local_150 = 0x600000004;
    local_148 = &PTR_FUN_710522ff60;
    if (local_a8 < local_a0) {
      local_a8[2] = local_140;
      local_a8[3] = local_138;
      local_a8[4] = local_130;
      *local_a8 = 0x600000004;
      local_a8[1] = &PTR_FUN_710522ff60;
      local_a8 = local_a8 + 5;
    }
    else {
      FUN_710356b9a0((long *)&local_b0,(undefined4 *)&local_150,pppplVar6,param_4,param_5,param_6,
                     param_7,param_8);
    }
    FUN_710364e730(lVar7,&local_128,pppplVar6,param_4,param_5,param_6,param_7,param_8);
    puVar11 = puVar11 + 0x30;
    lVar7 = lVar7 + 0x12a0;
    puVar8 = puVar8 + 0xe;
    puVar10 = puVar10 + 3;
  } while (puVar11 != &DAT_00000120);
  lVar7 = *(long *)(DAT_7105335480 + 0x68);
  if ((*(long **)(lVar7 + 0x20) == (long *)0x0) ||
     (**(long **)(lVar7 + 0x20) != *(long *)(lVar7 + 0x28))) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x18);
  }
  uStack_15c = 0;
  local_168 = 0x14;
  uStack_167 = 0x435f53505f4c42;
  uStack_160 = 0x4f;
  local_158 = 0;
  local_15d = 0;
  local_15f = 0x5950;
  FUN_7103864d90(&local_150,lVar7,&local_168);
  if ((local_140 == (long *)0x0) || (*local_140 != local_138)) {
    *(undefined8 *)(param_1 + 0x7298) = 0;
  }
  else {
    *(undefined ***)(param_1 + 0x7298) = local_148;
    if (local_148 != (undefined **)0x0) {
      puVar8 = (undefined8 *)local_148[1];
      *(undefined8 **)(param_1 + 0x72a0) = puVar8;
      uVar9 = *puVar8;
      goto LAB_7103640a80;
    }
  }
  uVar9 = 0;
  *(undefined8 *)(param_1 + 0x72a0) = 0;
LAB_7103640a80:
  *(undefined8 *)(param_1 + 0x72a8) = uVar9;
  *(char *)(param_1 + 0x72bc) = '\x01';
  if (local_b0 != (undefined8 *)0x0) {
    local_a8 = local_b0;
    FUN_710392eb40((ulong)local_b0);
  }
  pvVar2 = local_b8;
  pvVar3 = local_d0;
  if ((local_c8 & 1) != 0) {
    nu::VirtualFreeHook(local_b8);
    FUN_710392eb40((ulong)pvVar2);
    pvVar3 = local_d0;
  }
  pvVar2 = local_e8;
  local_d0 = pvVar3;
  if ((local_e0 & 1) != 0) {
    nu::VirtualFreeHook(pvVar3);
    FUN_710392eb40((ulong)pvVar3);
    pvVar2 = local_e8;
  }
  pvVar3 = local_100;
  local_e8 = pvVar2;
  if ((local_f8 & 1) != 0) {
    nu::VirtualFreeHook(pvVar2);
    FUN_710392eb40((ulong)pvVar2);
    pvVar3 = local_100;
  }
  pvVar2 = local_118;
  local_100 = pvVar3;
  if ((local_110 & 1) != 0) {
    nu::VirtualFreeHook(pvVar3);
    FUN_710392eb40((ulong)pvVar3);
    pvVar2 = local_118;
  }
  if ((local_128 & 1) != 0) {
    local_118 = pvVar2;
    nu::VirtualFreeHook(pvVar2);
    FUN_710392eb40((ulong)pvVar2);
  }
  return;
}

