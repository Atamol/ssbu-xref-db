// addr:      71037e3270
// offset:    0x37e3270
// name:      FUN_71037e3270
// mangled:   
// signature: undefined __cdecl FUN_71037e3270(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * * param_7, allocator * param_8)


void FUN_71037e3270(long *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ****param_7,allocator *param_8)

{
  void *pvVar1;
  int iVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined ***pppuVar4;
  char *pcVar5;
  char *pcVar6;
  undefined **local_2e0;
  long *local_2d8;
  long *local_2d0;
  long local_2c8;
  undefined **local_2c0;
  long *local_2b8;
  long *local_2b0;
  long local_2a8;
  undefined **local_2a0;
  long *local_298;
  long *local_290;
  long local_288;
  undefined **local_280;
  long *local_278;
  long *local_270;
  long local_268;
  undefined **local_260;
  long *local_258;
  long *local_250;
  long local_248;
  undefined **local_240;
  long *local_238;
  long *local_230;
  long local_228;
  undefined **local_220;
  long *local_218;
  long *local_210;
  long local_208;
  undefined **local_200;
  long *local_1f8;
  long *local_1f0;
  long local_1e8;
  undefined **local_1e0;
  long *local_1d8;
  long *local_1d0;
  long local_1c8;
  undefined **local_1c0;
  long *local_1b8;
  long *local_1b0;
  long local_1a8;
  undefined **local_1a0;
  long *local_198;
  long *local_190;
  long local_188;
  undefined **local_180;
  long *local_178;
  long *local_170;
  long local_168;
  undefined **local_160;
  long *local_158;
  long *local_150;
  long local_148;
  undefined **local_140;
  long *local_138;
  long *local_130;
  long local_128;
  byte local_120;
  undefined5 uStack_11f;
  undefined2 uStack_11a;
  undefined1 local_118;
  undefined4 uStack_117;
  undefined1 uStack_113;
  undefined1 uStack_112;
  undefined1 uStack_111;
  undefined1 local_110;
  undefined1 uStack_10f;
  undefined1 uStack_10e;
  undefined4 uStack_10d;
  undefined1 uStack_109;
  ulong local_108 [8];
  undefined1 local_c7;
  undefined *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined **local_a8;
  long *local_a0;
  long *local_98;
  long local_90;
  byte local_88 [19];
  undefined4 uStack_75;
  undefined1 uStack_71;
  char *local_70 [2];
  
  local_c7 = 0;
  local_88[0] = 0x1e;
  local_120 = 0x1e;
  local_108[0] = local_108[0] & 0xffffffffffffff00;
  local_88[9] = 0x6d;
  local_88[10] = 0x62;
  local_88[0xb] = 0x65;
  local_88[0xc] = 0x72;
  local_88[0xd] = 0x74;
  local_88[0xe] = 0x56;
  local_88[0xf] = 0x53;
  local_88[0x11] = 0;
  local_88[0x12] = 0;
  uStack_75 = 0;
  uStack_71 = 0;
  local_88[1] = 0x53;
  local_88[2] = 0x79;
  local_88[3] = 0x73;
  local_88[4] = 0x74;
  local_88[5] = 0x65;
  local_88[6] = 0x6d;
  local_88[7] = 0x4c;
  local_88[8] = 0x61;
  local_88[0x10] = 0;
  uStack_117 = 0x7265626d;
  uStack_113 = 0x74;
  uStack_112 = 0x56;
  uStack_111 = 0x53;
  uStack_10f = 0;
  uStack_10e = 0;
  uStack_10d = 0;
  uStack_109 = 0;
  uStack_11f = 0x6574737953;
  uStack_11a = 0x4c6d;
  local_118 = 0x61;
  local_110 = 0;
  FUN_71037c9810((long)local_108,(char *)((ulong)&local_120 | 1));
  local_c0 = &DAT_7105244760;
  local_b8 = 0x2e38;
  local_b0 = 0;
  local_a0 = FUN_71037cffc0((char *)local_108,extraout_x1,param_3,param_4,param_5,param_6,param_7,
                            param_8);
  if (local_a0 == (long *)0x0) {
    local_98 = (long *)0x0;
    local_90 = 0;
  }
  else {
    local_98 = (long *)local_a0[1];
    local_90 = *local_98;
  }
  local_a8 = &PTR_FUN_7105242188;
  pppuVar4 = &local_a8;
  FUN_71037e5130(param_1,local_88,(long)pppuVar4,param_4,param_5,param_6,param_7,param_8);
  local_a8 = &PTR_FUN_7105242188;
  if (((local_98 != (long *)0x0) && (*local_98 == local_90)) && (local_a0 != (long *)0x0)) {
    (**(code **)(*local_a0 + 8))();
  }
  if ((local_120 & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_109,
                              CONCAT43(uStack_10d,
                                       CONCAT12(uStack_10e,CONCAT11(uStack_10f,local_110))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  if ((local_88[0] & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_71,
                              CONCAT43(uStack_75,
                                       CONCAT12(local_88[0x12],
                                                CONCAT11(local_88[0x11],local_88[0x10]))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  local_c7 = 0;
  local_88[0] = 0x1e;
  local_120 = 0x1e;
  local_108[0] = local_108[0] & 0xffffffffffffff00;
  local_88[9] = 0x6d;
  local_88[10] = 0x62;
  local_88[0xb] = 0x65;
  local_88[0xc] = 0x72;
  local_88[0xd] = 0x74;
  local_88[0xe] = 0x50;
  local_88[0xf] = 0x53;
  local_88[0x11] = 0;
  local_88[0x12] = 0;
  uStack_75 = 0;
  uStack_71 = 0;
  local_88[1] = 0x53;
  local_88[2] = 0x79;
  local_88[3] = 0x73;
  local_88[4] = 0x74;
  local_88[5] = 0x65;
  local_88[6] = 0x6d;
  local_88[7] = 0x4c;
  local_88[8] = 0x61;
  local_88[0x10] = 0;
  uStack_117 = 0x7265626d;
  uStack_113 = 0x74;
  uStack_112 = 0x50;
  uStack_111 = 0x53;
  uStack_10f = 0;
  uStack_10e = 0;
  uStack_10d = 0;
  uStack_109 = 0;
  uStack_11f = 0x6574737953;
  uStack_11a = 0x4c6d;
  local_118 = 0x61;
  local_110 = 0;
  FUN_71037c9810((long)local_108,(char *)((ulong)&local_120 | 1));
  local_c0 = &DAT_7105247598;
  local_b8 = 0x400003a50;
  local_b0 = 0;
  local_138 = FUN_71037cffc0((char *)local_108,extraout_x1_00,pppuVar4,param_4,param_5,param_6,
                             param_7,param_8);
  if (local_138 == (long *)0x0) {
    local_130 = (long *)0x0;
    local_128 = 0;
  }
  else {
    local_130 = (long *)local_138[1];
    local_128 = *local_130;
  }
  local_140 = &PTR_FUN_7105242188;
  FUN_71037e5130(param_1,local_88,(long)&local_140,param_4,param_5,param_6,param_7,param_8);
  local_140 = &PTR_FUN_7105242188;
  if (((local_130 != (long *)0x0) && (*local_130 == local_128)) && (local_138 != (long *)0x0)) {
    (**(code **)(*local_138 + 8))();
  }
  if ((local_120 & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_109,
                              CONCAT43(uStack_10d,
                                       CONCAT12(uStack_10e,CONCAT11(uStack_10f,local_110))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  if ((local_88[0] & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_71,
                              CONCAT43(uStack_75,
                                       CONCAT12(local_88[0x12],
                                                CONCAT11(local_88[0x11],local_88[0x10]))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  local_88[8] = 0;
  local_88[9] = 0;
  local_88[10] = 0;
  local_88[0xb] = 0;
  local_88[0xc] = 0;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0xf] = 0;
  local_88[0x10] = 0;
  local_88[0x11] = 0;
  local_88[0x12] = 0;
  uStack_75 = 0;
  uStack_71 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  iVar2 = FUN_710392e1f0(&local_120,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                         param_8);
  if ((iVar2 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_108[0] = 0x20;
    uVar3 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_108);
    if ((uVar3 & 1) != 0) {
      FUN_710392e1f0(&local_120,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                     param_8);
    }
  }
  nu::VirtualAllocHook(0x20,0x10,(void *)CONCAT26(uStack_11a,CONCAT51(uStack_11f,local_120)));
  local_88[0] = 0x21;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  pcVar6 = (char *)CONCAT26(uStack_11a,CONCAT51(uStack_11f,local_120));
  local_88[8] = 0x1d;
  local_88[9] = 0;
  local_88[10] = 0;
  local_88[0xb] = 0;
  local_88[0xc] = 0;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0xf] = 0;
  local_88[0x10] = local_120;
  local_88[0x11] = (byte)uStack_11f;
  local_88[0x12] = (byte)((uint5)uStack_11f >> 8);
  uStack_75 = (undefined4)((ulong)pcVar6 >> 0x18);
  uStack_71 = (undefined1)((ushort)uStack_11a >> 8);
  builtin_strncpy(pcVar6,"SystemLambertTexture2DArrayPS",0x1e);
  iVar2 = FUN_710392e1f0(local_70,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                         param_8);
  if ((iVar2 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_120 = 0x20;
    uStack_11f = 0;
    uStack_11a = 0;
    uVar3 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_120);
    if ((uVar3 & 1) != 0) {
      FUN_710392e1f0(local_70,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,param_8)
      ;
    }
  }
  pcVar5 = local_70[0];
  nu::VirtualAllocHook(0x20,0x10,local_70[0]);
  pcVar6 = local_70[0];
  builtin_strncpy(local_70[0],"SystemLambertTexture2DArrayPS",0x1e);
  local_c7 = 0;
  local_108[0] = local_108[0] & 0xffffffffffffff00;
  FUN_71037c9810((long)local_108,local_70[0]);
  local_c0 = &DAT_710524afe8;
  local_b8 = 0x400003b48;
  local_b0 = 0;
  local_158 = FUN_71037cffc0((char *)local_108,extraout_x1_01,pcVar5,param_4,param_5,param_6,param_7
                             ,param_8);
  if (local_158 == (long *)0x0) {
    local_150 = (long *)0x0;
    local_148 = 0;
  }
  else {
    local_150 = (long *)local_158[1];
    local_148 = *local_150;
  }
  local_160 = &PTR_FUN_7105242188;
  FUN_71037e5130(param_1,local_88,(long)&local_160,param_4,param_5,param_6,param_7,param_8);
  local_160 = &PTR_FUN_7105242188;
  if (((local_150 != (long *)0x0) && (*local_150 == local_148)) && (local_158 != (long *)0x0)) {
    (**(code **)(*local_158 + 8))();
  }
  nu::VirtualFreeHook(pcVar6);
  FUN_710392eb40((ulong)pcVar6);
  if ((local_88[0] & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_71,
                              CONCAT43(uStack_75,
                                       CONCAT12(local_88[0x12],
                                                CONCAT11(local_88[0x11],local_88[0x10]))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  local_88[8] = 0;
  local_88[9] = 0;
  local_88[10] = 0;
  local_88[0xb] = 0;
  local_88[0xc] = 0;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0xf] = 0;
  local_88[0x10] = 0;
  local_88[0x11] = 0;
  local_88[0x12] = 0;
  uStack_75 = 0;
  uStack_71 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  iVar2 = FUN_710392e1f0(&local_120,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                         param_8);
  if ((iVar2 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_108[0] = 0x20;
    uVar3 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_108);
    if ((uVar3 & 1) != 0) {
      FUN_710392e1f0(&local_120,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                     param_8);
    }
  }
  nu::VirtualAllocHook(0x20,0x10,(void *)CONCAT26(uStack_11a,CONCAT51(uStack_11f,local_120)));
  local_88[0] = 0x21;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  pcVar6 = (char *)CONCAT26(uStack_11a,CONCAT51(uStack_11f,local_120));
  local_88[8] = 0x19;
  local_88[9] = 0;
  local_88[10] = 0;
  local_88[0xb] = 0;
  local_88[0xc] = 0;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0xf] = 0;
  local_88[0x10] = local_120;
  local_88[0x11] = (byte)uStack_11f;
  local_88[0x12] = (byte)((uint5)uStack_11f >> 8);
  uStack_75 = (undefined4)((ulong)pcVar6 >> 0x18);
  uStack_71 = (undefined1)((ushort)uStack_11a >> 8);
  builtin_strncpy(pcVar6,"SystemLambertNonTextureVS",0x1a);
  iVar2 = FUN_710392e1f0(local_70,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                         param_8);
  if ((iVar2 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_120 = 0x20;
    uStack_11f = 0;
    uStack_11a = 0;
    uVar3 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_120);
    if ((uVar3 & 1) != 0) {
      FUN_710392e1f0(local_70,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,param_8)
      ;
    }
  }
  pcVar5 = local_70[0];
  nu::VirtualAllocHook(0x20,0x10,local_70[0]);
  pcVar6 = local_70[0];
  builtin_strncpy(local_70[0],"SystemLambertNonTextureVS",0x1a);
  local_c7 = 0;
  local_108[0] = local_108[0] & 0xffffffffffffff00;
  FUN_71037c9810((long)local_108,local_70[0]);
  local_c0 = &DAT_710524eb30;
  local_b8 = 0x2e28;
  local_b0 = 0;
  local_178 = FUN_71037cffc0((char *)local_108,extraout_x1_02,pcVar5,param_4,param_5,param_6,param_7
                             ,param_8);
  if (local_178 == (long *)0x0) {
    local_170 = (long *)0x0;
    local_168 = 0;
  }
  else {
    local_170 = (long *)local_178[1];
    local_168 = *local_170;
  }
  local_180 = &PTR_FUN_7105242188;
  FUN_71037e5130(param_1,local_88,(long)&local_180,param_4,param_5,param_6,param_7,param_8);
  local_180 = &PTR_FUN_7105242188;
  if (((local_170 != (long *)0x0) && (*local_170 == local_168)) && (local_178 != (long *)0x0)) {
    (**(code **)(*local_178 + 8))();
  }
  nu::VirtualFreeHook(pcVar6);
  FUN_710392eb40((ulong)pcVar6);
  if ((local_88[0] & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_71,
                              CONCAT43(uStack_75,
                                       CONCAT12(local_88[0x12],
                                                CONCAT11(local_88[0x11],local_88[0x10]))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  local_88[8] = 0;
  local_88[9] = 0;
  local_88[10] = 0;
  local_88[0xb] = 0;
  local_88[0xc] = 0;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0xf] = 0;
  local_88[0x10] = 0;
  local_88[0x11] = 0;
  local_88[0x12] = 0;
  uStack_75 = 0;
  uStack_71 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  iVar2 = FUN_710392e1f0(&local_120,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                         param_8);
  if ((iVar2 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_108[0] = 0x20;
    uVar3 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_108);
    if ((uVar3 & 1) != 0) {
      FUN_710392e1f0(&local_120,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                     param_8);
    }
  }
  nu::VirtualAllocHook(0x20,0x10,(void *)CONCAT26(uStack_11a,CONCAT51(uStack_11f,local_120)));
  local_88[0] = 0x21;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  pcVar6 = (char *)CONCAT26(uStack_11a,CONCAT51(uStack_11f,local_120));
  local_88[8] = 0x19;
  local_88[9] = 0;
  local_88[10] = 0;
  local_88[0xb] = 0;
  local_88[0xc] = 0;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0xf] = 0;
  local_88[0x10] = local_120;
  local_88[0x11] = (byte)uStack_11f;
  local_88[0x12] = (byte)((uint5)uStack_11f >> 8);
  uStack_75 = (undefined4)((ulong)pcVar6 >> 0x18);
  uStack_71 = (undefined1)((ushort)uStack_11a >> 8);
  builtin_strncpy(pcVar6,"SystemLambertNonTexturePS",0x1a);
  iVar2 = FUN_710392e1f0(local_70,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                         param_8);
  if ((iVar2 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_120 = 0x20;
    uStack_11f = 0;
    uStack_11a = 0;
    uVar3 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_120);
    if ((uVar3 & 1) != 0) {
      FUN_710392e1f0(local_70,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,param_8)
      ;
    }
  }
  pcVar5 = local_70[0];
  nu::VirtualAllocHook(0x20,0x10,local_70[0]);
  pcVar6 = local_70[0];
  builtin_strncpy(local_70[0],"SystemLambertNonTexturePS",0x1a);
  local_c7 = 0;
  local_108[0] = local_108[0] & 0xffffffffffffff00;
  FUN_71037c9810((long)local_108,local_70[0]);
  local_c0 = &DAT_7105251958;
  local_b8 = 0x400003630;
  local_b0 = 0;
  local_198 = FUN_71037cffc0((char *)local_108,extraout_x1_03,pcVar5,param_4,param_5,param_6,param_7
                             ,param_8);
  if (local_198 == (long *)0x0) {
    local_190 = (long *)0x0;
    local_188 = 0;
  }
  else {
    local_190 = (long *)local_198[1];
    local_188 = *local_190;
  }
  local_1a0 = &PTR_FUN_7105242188;
  pppuVar4 = &local_1a0;
  FUN_71037e5130(param_1,local_88,(long)pppuVar4,param_4,param_5,param_6,param_7,param_8);
  local_1a0 = &PTR_FUN_7105242188;
  if (((local_190 != (long *)0x0) && (*local_190 == local_188)) && (local_198 != (long *)0x0)) {
    (**(code **)(*local_198 + 8))();
  }
  nu::VirtualFreeHook(pcVar6);
  FUN_710392eb40((ulong)pcVar6);
  if ((local_88[0] & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_71,
                              CONCAT43(uStack_75,
                                       CONCAT12(local_88[0x12],
                                                CONCAT11(local_88[0x11],local_88[0x10]))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  local_88[0x12] = 0;
  uStack_75 = 0;
  uStack_71 = 0;
  local_88[0] = 0x20;
  local_120 = 0x20;
  local_88[9] = 0x6e;
  local_88[10] = 0x73;
  local_88[0xb] = 0x74;
  local_88[0xc] = 0x61;
  local_88[0xd] = 0x6e;
  local_88[0xe] = 0x74;
  local_88[0xf] = 0x56;
  local_88[0x10] = 0x53;
  local_88[1] = 0x53;
  local_88[2] = 0x79;
  local_88[3] = 0x73;
  local_88[4] = 0x74;
  local_88[5] = 0x65;
  local_88[6] = 0x6d;
  local_88[7] = 0x43;
  local_88[8] = 0x6f;
  local_88[0x11] = 0;
  uStack_10e = 0;
  uStack_10d = 0;
  uStack_109 = 0;
  uStack_117 = 0x6174736e;
  uStack_113 = 0x6e;
  uStack_112 = 0x74;
  uStack_111 = 0x56;
  local_110 = 0x53;
  uStack_11f = 0x6574737953;
  uStack_11a = 0x436d;
  local_118 = 0x6f;
  uStack_10f = 0;
  local_c7 = 0;
  local_108[0] = local_108[0] & 0xffffffffffffff00;
  FUN_71037c9810((long)local_108,(char *)((ulong)&local_120 | 1));
  local_c0 = &DAT_7105254f88;
  local_b8 = 0x25e8;
  local_b0 = 0;
  local_1b8 = FUN_71037cffc0((char *)local_108,extraout_x1_04,pppuVar4,param_4,param_5,param_6,
                             param_7,param_8);
  if (local_1b8 == (long *)0x0) {
    local_1b0 = (long *)0x0;
    local_1a8 = 0;
  }
  else {
    local_1b0 = (long *)local_1b8[1];
    local_1a8 = *local_1b0;
  }
  local_1c0 = &PTR_FUN_7105242188;
  pppuVar4 = &local_1c0;
  FUN_71037e5130(param_1,local_88,(long)pppuVar4,param_4,param_5,param_6,param_7,param_8);
  local_1c0 = &PTR_FUN_7105242188;
  if (((local_1b0 != (long *)0x0) && (*local_1b0 == local_1a8)) && (local_1b8 != (long *)0x0)) {
    (**(code **)(*local_1b8 + 8))();
  }
  if ((local_120 & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_109,
                              CONCAT43(uStack_10d,
                                       CONCAT12(uStack_10e,CONCAT11(uStack_10f,local_110))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  if ((local_88[0] & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_71,
                              CONCAT43(uStack_75,
                                       CONCAT12(local_88[0x12],
                                                CONCAT11(local_88[0x11],local_88[0x10]))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  local_88[0x12] = 0;
  uStack_75 = 0;
  uStack_71 = 0;
  local_88[0] = 0x20;
  local_120 = 0x20;
  local_88[9] = 0x6e;
  local_88[10] = 0x73;
  local_88[0xb] = 0x74;
  local_88[0xc] = 0x61;
  local_88[0xd] = 0x6e;
  local_88[0xe] = 0x74;
  local_88[0xf] = 0x50;
  local_88[0x10] = 0x53;
  local_88[1] = 0x53;
  local_88[2] = 0x79;
  local_88[3] = 0x73;
  local_88[4] = 0x74;
  local_88[5] = 0x65;
  local_88[6] = 0x6d;
  local_88[7] = 0x43;
  local_88[8] = 0x6f;
  local_88[0x11] = 0;
  uStack_10e = 0;
  uStack_10d = 0;
  uStack_109 = 0;
  uStack_117 = 0x6174736e;
  uStack_113 = 0x6e;
  uStack_112 = 0x74;
  uStack_111 = 0x50;
  local_110 = 0x53;
  uStack_11f = 0x6574737953;
  uStack_11a = 0x436d;
  local_118 = 0x6f;
  uStack_10f = 0;
  local_c7 = 0;
  local_108[0] = local_108[0] & 0xffffffffffffff00;
  FUN_71037c9810((long)local_108,(char *)((ulong)&local_120 | 1));
  local_c0 = &DAT_7105257570;
  local_b8 = 0x400001980;
  local_b0 = 0;
  local_1d8 = FUN_71037cffc0((char *)local_108,extraout_x1_05,pppuVar4,param_4,param_5,param_6,
                             param_7,param_8);
  if (local_1d8 == (long *)0x0) {
    local_1d0 = (long *)0x0;
    local_1c8 = 0;
  }
  else {
    local_1d0 = (long *)local_1d8[1];
    local_1c8 = *local_1d0;
  }
  local_1e0 = &PTR_FUN_7105242188;
  FUN_71037e5130(param_1,local_88,(long)&local_1e0,param_4,param_5,param_6,param_7,param_8);
  local_1e0 = &PTR_FUN_7105242188;
  if (((local_1d0 != (long *)0x0) && (*local_1d0 == local_1c8)) && (local_1d8 != (long *)0x0)) {
    (**(code **)(*local_1d8 + 8))();
  }
  if ((local_120 & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_109,
                              CONCAT43(uStack_10d,
                                       CONCAT12(uStack_10e,CONCAT11(uStack_10f,local_110))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  if ((local_88[0] & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_71,
                              CONCAT43(uStack_75,
                                       CONCAT12(local_88[0x12],
                                                CONCAT11(local_88[0x11],local_88[0x10]))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  local_88[8] = 0;
  local_88[9] = 0;
  local_88[10] = 0;
  local_88[0xb] = 0;
  local_88[0xc] = 0;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0xf] = 0;
  local_88[0x10] = 0;
  local_88[0x11] = 0;
  local_88[0x12] = 0;
  uStack_75 = 0;
  uStack_71 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  iVar2 = FUN_710392e1f0(&local_120,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                         param_8);
  if ((iVar2 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_108[0] = 0x20;
    uVar3 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_108);
    if ((uVar3 & 1) != 0) {
      FUN_710392e1f0(&local_120,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                     param_8);
    }
  }
  nu::VirtualAllocHook(0x20,0x10,(void *)CONCAT26(uStack_11a,CONCAT51(uStack_11f,local_120)));
  local_88[0] = 0x21;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  pcVar6 = (char *)CONCAT26(uStack_11a,CONCAT51(uStack_11f,local_120));
  local_88[8] = 0x1a;
  local_88[9] = 0;
  local_88[10] = 0;
  local_88[0xb] = 0;
  local_88[0xc] = 0;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0xf] = 0;
  local_88[0x10] = local_120;
  local_88[0x11] = (byte)uStack_11f;
  local_88[0x12] = (byte)((uint5)uStack_11f >> 8);
  uStack_75 = (undefined4)((ulong)pcVar6 >> 0x18);
  uStack_71 = (undefined1)((ushort)uStack_11a >> 8);
  builtin_strncpy(pcVar6,"SystemConstantNonTextureVS",0x1b);
  iVar2 = FUN_710392e1f0(local_70,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                         param_8);
  if ((iVar2 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_120 = 0x20;
    uStack_11f = 0;
    uStack_11a = 0;
    uVar3 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_120);
    if ((uVar3 & 1) != 0) {
      FUN_710392e1f0(local_70,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,param_8)
      ;
    }
  }
  pcVar5 = local_70[0];
  nu::VirtualAllocHook(0x20,0x10,local_70[0]);
  pcVar6 = local_70[0];
  builtin_strncpy(local_70[0],"SystemConstantNonTextureVS",0x1b);
  local_c7 = 0;
  local_108[0] = local_108[0] & 0xffffffffffffff00;
  FUN_71037c9810((long)local_108,local_70[0]);
  local_c0 = &DAT_7105258ef0;
  local_b8 = 0x25e0;
  local_b0 = 0;
  local_1f8 = FUN_71037cffc0((char *)local_108,extraout_x1_06,pcVar5,param_4,param_5,param_6,param_7
                             ,param_8);
  if (local_1f8 == (long *)0x0) {
    local_1f0 = (long *)0x0;
    local_1e8 = 0;
  }
  else {
    local_1f0 = (long *)local_1f8[1];
    local_1e8 = *local_1f0;
  }
  local_200 = &PTR_FUN_7105242188;
  FUN_71037e5130(param_1,local_88,(long)&local_200,param_4,param_5,param_6,param_7,param_8);
  local_200 = &PTR_FUN_7105242188;
  if (((local_1f0 != (long *)0x0) && (*local_1f0 == local_1e8)) && (local_1f8 != (long *)0x0)) {
    (**(code **)(*local_1f8 + 8))();
  }
  nu::VirtualFreeHook(pcVar6);
  FUN_710392eb40((ulong)pcVar6);
  if ((local_88[0] & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_71,
                              CONCAT43(uStack_75,
                                       CONCAT12(local_88[0x12],
                                                CONCAT11(local_88[0x11],local_88[0x10]))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  local_88[8] = 0;
  local_88[9] = 0;
  local_88[10] = 0;
  local_88[0xb] = 0;
  local_88[0xc] = 0;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0xf] = 0;
  local_88[0x10] = 0;
  local_88[0x11] = 0;
  local_88[0x12] = 0;
  uStack_75 = 0;
  uStack_71 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  iVar2 = FUN_710392e1f0(&local_120,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                         param_8);
  if ((iVar2 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_108[0] = 0x20;
    uVar3 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_108);
    if ((uVar3 & 1) != 0) {
      FUN_710392e1f0(&local_120,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                     param_8);
    }
  }
  nu::VirtualAllocHook(0x20,0x10,(void *)CONCAT26(uStack_11a,CONCAT51(uStack_11f,local_120)));
  local_88[0] = 0x21;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  pcVar6 = (char *)CONCAT26(uStack_11a,CONCAT51(uStack_11f,local_120));
  local_88[8] = 0x1a;
  local_88[9] = 0;
  local_88[10] = 0;
  local_88[0xb] = 0;
  local_88[0xc] = 0;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0xf] = 0;
  local_88[0x10] = local_120;
  local_88[0x11] = (byte)uStack_11f;
  local_88[0x12] = (byte)((uint5)uStack_11f >> 8);
  uStack_75 = (undefined4)((ulong)pcVar6 >> 0x18);
  uStack_71 = (undefined1)((ushort)uStack_11a >> 8);
  builtin_strncpy(pcVar6,"SystemConstantNonTexturePS",0x1b);
  iVar2 = FUN_710392e1f0(local_70,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                         param_8);
  if ((iVar2 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_120 = 0x20;
    uStack_11f = 0;
    uStack_11a = 0;
    uVar3 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_120);
    if ((uVar3 & 1) != 0) {
      FUN_710392e1f0(local_70,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,param_8)
      ;
    }
  }
  pcVar6 = local_70[0];
  nu::VirtualAllocHook(0x20,0x10,local_70[0]);
  builtin_strncpy(local_70[0],"SystemConstantNonTexturePS",0x1b);
  local_c7 = 0;
  local_108[0] = local_108[0] & 0xffffffffffffff00;
  FUN_71037c9810((long)local_108,local_70[0]);
  local_c0 = &DAT_710525b4d0;
  local_b8 = 0x400001850;
  local_b0 = 0;
  local_218 = FUN_71037cffc0((char *)local_108,extraout_x1_07,pcVar6,param_4,param_5,param_6,param_7
                             ,param_8);
  if (local_218 == (long *)0x0) {
    local_210 = (long *)0x0;
    local_208 = 0;
  }
  else {
    local_210 = (long *)local_218[1];
    local_208 = *local_210;
  }
  local_220 = &PTR_FUN_7105242188;
  pppuVar4 = &local_220;
  FUN_71037e5130(param_1,local_88,(long)pppuVar4,param_4,param_5,param_6,param_7,param_8);
  local_220 = &PTR_FUN_7105242188;
  if (((local_210 != (long *)0x0) && (*local_210 == local_208)) && (local_218 != (long *)0x0)) {
    (**(code **)(*local_218 + 8))();
  }
  nu::VirtualFreeHook(local_70[0]);
  FUN_710392eb40((ulong)local_70[0]);
  if ((local_88[0] & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_71,
                              CONCAT43(uStack_75,
                                       CONCAT12(local_88[0x12],
                                                CONCAT11(local_88[0x11],local_88[0x10]))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  local_88[0xf] = 0;
  local_88[0x10] = 0;
  local_88[0x11] = 0;
  local_88[0x12] = 0;
  uStack_75 = 0;
  uStack_71 = 0;
  local_88[0] = 0x1a;
  local_88[9] = 0x72;
  local_88[10] = 0x6f;
  local_88[0xb] = 0x72;
  local_88[0xc] = 0x56;
  local_88[0xd] = 0x53;
  local_88[1] = 0x53;
  local_88[2] = 0x79;
  local_88[3] = 0x73;
  local_88[4] = 0x74;
  local_88[5] = 0x65;
  local_88[6] = 0x6d;
  local_88[7] = 0x45;
  local_88[8] = 0x72;
  local_88[0xe] = 0;
  local_110 = 0;
  uStack_10f = 0;
  uStack_10e = 0;
  uStack_10d = 0;
  uStack_109 = 0;
  local_c7 = 0;
  local_108[0] = local_108[0] & 0xffffffffffffff00;
  uStack_111 = 0;
  local_120 = 0x1a;
  uStack_117 = 0x56726f72;
  uStack_113 = 0x53;
  uStack_11f = 0x6574737953;
  uStack_11a = 0x456d;
  local_118 = 0x72;
  uStack_112 = 0;
  FUN_71037c9810((long)local_108,(char *)((ulong)&local_120 | 1));
  local_c0 = &DAT_710525cd20;
  local_b8 = 0x2298;
  local_b0 = 0;
  local_238 = FUN_71037cffc0((char *)local_108,extraout_x1_08,pppuVar4,param_4,param_5,param_6,
                             param_7,param_8);
  if (local_238 == (long *)0x0) {
    local_230 = (long *)0x0;
    local_228 = 0;
  }
  else {
    local_230 = (long *)local_238[1];
    local_228 = *local_230;
  }
  local_240 = &PTR_FUN_7105242188;
  pppuVar4 = &local_240;
  FUN_71037e5130(param_1,local_88,(long)pppuVar4,param_4,param_5,param_6,param_7,param_8);
  local_240 = &PTR_FUN_7105242188;
  if (((local_230 != (long *)0x0) && (*local_230 == local_228)) && (local_238 != (long *)0x0)) {
    (**(code **)(*local_238 + 8))();
  }
  if ((local_120 & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_109,
                              CONCAT43(uStack_10d,
                                       CONCAT12(uStack_10e,CONCAT11(uStack_10f,local_110))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  if ((local_88[0] & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_71,
                              CONCAT43(uStack_75,
                                       CONCAT12(local_88[0x12],
                                                CONCAT11(local_88[0x11],local_88[0x10]))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  local_88[0xf] = 0;
  local_88[0x10] = 0;
  local_88[0x11] = 0;
  local_88[0x12] = 0;
  uStack_75 = 0;
  uStack_71 = 0;
  local_88[0] = 0x1a;
  local_88[9] = 0x72;
  local_88[10] = 0x6f;
  local_88[0xb] = 0x72;
  local_88[0xc] = 0x50;
  local_88[0xd] = 0x53;
  local_88[1] = 0x53;
  local_88[2] = 0x79;
  local_88[3] = 0x73;
  local_88[4] = 0x74;
  local_88[5] = 0x65;
  local_88[6] = 0x6d;
  local_88[7] = 0x45;
  local_88[8] = 0x72;
  local_88[0xe] = 0;
  local_110 = 0;
  uStack_10f = 0;
  uStack_10e = 0;
  uStack_10d = 0;
  uStack_109 = 0;
  local_c7 = 0;
  local_108[0] = local_108[0] & 0xffffffffffffff00;
  uStack_111 = 0;
  local_120 = 0x1a;
  uStack_117 = 0x50726f72;
  uStack_113 = 0x53;
  uStack_11f = 0x6574737953;
  uStack_11a = 0x456d;
  local_118 = 0x72;
  uStack_112 = 0;
  FUN_71037c9810((long)local_108,(char *)((ulong)&local_120 | 1));
  local_c0 = &DAT_710525efb8;
  local_b8 = 0x400001900;
  local_b0 = 0;
  local_258 = FUN_71037cffc0((char *)local_108,extraout_x1_09,pppuVar4,param_4,param_5,param_6,
                             param_7,param_8);
  if (local_258 == (long *)0x0) {
    local_250 = (long *)0x0;
    local_248 = 0;
  }
  else {
    local_250 = (long *)local_258[1];
    local_248 = *local_250;
  }
  local_260 = &PTR_FUN_7105242188;
  pppuVar4 = &local_260;
  FUN_71037e5130(param_1,local_88,(long)pppuVar4,param_4,param_5,param_6,param_7,param_8);
  local_260 = &PTR_FUN_7105242188;
  if (((local_250 != (long *)0x0) && (*local_250 == local_248)) && (local_258 != (long *)0x0)) {
    (**(code **)(*local_258 + 8))();
  }
  if ((local_120 & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_109,
                              CONCAT43(uStack_10d,
                                       CONCAT12(uStack_10e,CONCAT11(uStack_10f,local_110))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  if ((local_88[0] & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_71,
                              CONCAT43(uStack_75,
                                       CONCAT12(local_88[0x12],
                                                CONCAT11(local_88[0x11],local_88[0x10]))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  uStack_71 = 0;
  local_88[0] = 0x24;
  local_120 = 0x24;
  local_88[0x11] = 0x50;
  local_88[0x12] = 0x53;
  local_88[9] = 0x70;
  local_88[10] = 0x74;
  local_88[0xb] = 0x79;
  local_88[0xc] = 0x45;
  local_88[0xd] = 0x72;
  local_88[0xe] = 0x72;
  local_88[0xf] = 0x6f;
  local_88[0x10] = 0x72;
  local_88[1] = 0x53;
  local_88[2] = 0x79;
  local_88[3] = 0x73;
  local_88[4] = 0x74;
  local_88[5] = 0x65;
  local_88[6] = 0x6d;
  local_88[7] = 0x45;
  local_88[8] = 0x6d;
  uStack_75 = 0;
  uStack_109 = 0;
  uStack_117 = 0x45797470;
  uStack_113 = 0x72;
  uStack_112 = 0x72;
  uStack_111 = 0x6f;
  local_110 = 0x72;
  uStack_11f = 0x6574737953;
  uStack_11a = 0x456d;
  local_118 = 0x6d;
  uStack_10f = 0x50;
  uStack_10e = 0x53;
  uStack_10d = 0;
  local_c7 = 0;
  local_108[0] = local_108[0] & 0xffffffffffffff00;
  FUN_71037c9810((long)local_108,(char *)((ulong)&local_120 | 1));
  local_b0 = 0;
  local_c0 = &DAT_71052608b8;
  local_b8 = 0x400001900;
  local_278 = FUN_71037cffc0((char *)local_108,extraout_x1_10,pppuVar4,param_4,param_5,param_6,
                             param_7,param_8);
  if (local_278 == (long *)0x0) {
    local_270 = (long *)0x0;
    local_268 = 0;
  }
  else {
    local_270 = (long *)local_278[1];
    local_268 = *local_270;
  }
  local_280 = &PTR_FUN_7105242188;
  pppuVar4 = &local_280;
  FUN_71037e5130(param_1,local_88,(long)pppuVar4,param_4,param_5,param_6,param_7,param_8);
  local_280 = &PTR_FUN_7105242188;
  if (((local_270 != (long *)0x0) && (*local_270 == local_268)) && (local_278 != (long *)0x0)) {
    (**(code **)(*local_278 + 8))();
  }
  if ((local_120 & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_109,
                              CONCAT43(uStack_10d,
                                       CONCAT12(uStack_10e,CONCAT11(uStack_10f,local_110))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  if ((local_88[0] & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_71,
                              CONCAT43(uStack_75,
                                       CONCAT12(local_88[0x12],
                                                CONCAT11(local_88[0x11],local_88[0x10]))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  local_88[0xe] = 0;
  local_88[0xf] = 0;
  local_88[0] = 0x18;
  uStack_112 = 0;
  uStack_111 = 0;
  local_120 = 0x18;
  local_88[0x10] = 0;
  local_88[0x11] = 0;
  local_88[0x12] = 0;
  uStack_75 = 0;
  uStack_71 = 0;
  local_88[9] = 0x61;
  local_88[10] = 100;
  local_88[0xb] = 0x56;
  local_88[0xc] = 0x53;
  local_88[1] = 0x53;
  local_88[2] = 0x79;
  local_88[3] = 0x73;
  local_88[4] = 0x74;
  local_88[5] = 0x65;
  local_88[6] = 0x6d;
  local_88[7] = 0x51;
  local_88[8] = 0x75;
  local_88[0xd] = 0;
  local_110 = 0;
  uStack_10f = 0;
  uStack_10e = 0;
  uStack_10d = 0;
  uStack_109 = 0;
  uStack_11f = 0x6574737953;
  uStack_11a = 0x516d;
  local_118 = 0x75;
  uStack_117 = 0x53566461;
  uStack_113 = 0;
  local_c7 = 0;
  local_108[0] = local_108[0] & 0xffffffffffffff00;
  FUN_71037c9810((long)local_108,(char *)((ulong)&local_120 | 1));
  local_c0 = &DAT_71052621b8;
  local_b8 = 0x1860;
  local_b0 = 0;
  local_298 = FUN_71037cffc0((char *)local_108,extraout_x1_11,pppuVar4,param_4,param_5,param_6,
                             param_7,param_8);
  if (local_298 == (long *)0x0) {
    local_290 = (long *)0x0;
    local_288 = 0;
  }
  else {
    local_290 = (long *)local_298[1];
    local_288 = *local_290;
  }
  local_2a0 = &PTR_FUN_7105242188;
  pppuVar4 = &local_2a0;
  FUN_71037e5130(param_1,local_88,(long)pppuVar4,param_4,param_5,param_6,param_7,param_8);
  local_2a0 = &PTR_FUN_7105242188;
  if (((local_290 != (long *)0x0) && (*local_290 == local_288)) && (local_298 != (long *)0x0)) {
    (**(code **)(*local_298 + 8))();
  }
  if ((local_120 & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_109,
                              CONCAT43(uStack_10d,
                                       CONCAT12(uStack_10e,CONCAT11(uStack_10f,local_110))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  if ((local_88[0] & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_71,
                              CONCAT43(uStack_75,
                                       CONCAT12(local_88[0x12],
                                                CONCAT11(local_88[0x11],local_88[0x10]))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  local_88[0xe] = 0;
  local_88[0xf] = 0;
  local_88[0] = 0x18;
  uStack_112 = 0;
  uStack_111 = 0;
  local_120 = 0x18;
  local_88[0x10] = 0;
  local_88[0x11] = 0;
  local_88[0x12] = 0;
  uStack_75 = 0;
  uStack_71 = 0;
  local_88[9] = 0x61;
  local_88[10] = 100;
  local_88[0xb] = 0x50;
  local_88[0xc] = 0x53;
  local_88[1] = 0x53;
  local_88[2] = 0x79;
  local_88[3] = 0x73;
  local_88[4] = 0x74;
  local_88[5] = 0x65;
  local_88[6] = 0x6d;
  local_88[7] = 0x51;
  local_88[8] = 0x75;
  local_88[0xd] = 0;
  local_110 = 0;
  uStack_10f = 0;
  uStack_10e = 0;
  uStack_10d = 0;
  uStack_109 = 0;
  uStack_11f = 0x6574737953;
  uStack_11a = 0x516d;
  local_118 = 0x75;
  uStack_117 = 0x53506461;
  uStack_113 = 0;
  local_c7 = 0;
  local_108[0] = local_108[0] & 0xffffffffffffff00;
  FUN_71037c9810((long)local_108,(char *)((ulong)&local_120 | 1));
  local_c0 = &DAT_7105263a18;
  local_b8 = 0x400001800;
  local_b0 = 0;
  local_2b8 = FUN_71037cffc0((char *)local_108,extraout_x1_12,pppuVar4,param_4,param_5,param_6,
                             param_7,param_8);
  if (local_2b8 == (long *)0x0) {
    local_2b0 = (long *)0x0;
    local_2a8 = 0;
  }
  else {
    local_2b0 = (long *)local_2b8[1];
    local_2a8 = *local_2b0;
  }
  local_2c0 = &PTR_FUN_7105242188;
  pppuVar4 = &local_2c0;
  FUN_71037e5130(param_1,local_88,(long)pppuVar4,param_4,param_5,param_6,param_7,param_8);
  local_2c0 = &PTR_FUN_7105242188;
  if (((local_2b0 != (long *)0x0) && (*local_2b0 == local_2a8)) && (local_2b8 != (long *)0x0)) {
    (**(code **)(*local_2b8 + 8))();
  }
  if ((local_120 & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_109,
                              CONCAT43(uStack_10d,
                                       CONCAT12(uStack_10e,CONCAT11(uStack_10f,local_110))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  if ((local_88[0] & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_71,
                              CONCAT43(uStack_75,
                                       CONCAT12(local_88[0x12],
                                                CONCAT11(local_88[0x11],local_88[0x10]))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  local_88[0] = 0x2c;
  local_120 = 0x2c;
  local_88[0x11] = 0x70;
  local_88[0x12] = 0x6c;
  uStack_75 = 0x53507265;
  local_88[9] = 0x61;
  local_88[10] = 100;
  local_88[0xb] = 0x55;
  local_88[0xc] = 0x73;
  local_88[0xd] = 0x65;
  local_88[0xe] = 0x53;
  local_88[0xf] = 0x61;
  local_88[0x10] = 0x6d;
  local_88[1] = 0x53;
  local_88[2] = 0x79;
  local_88[3] = 0x73;
  local_88[4] = 0x74;
  local_88[5] = 0x65;
  local_88[6] = 0x6d;
  local_88[7] = 0x51;
  local_88[8] = 0x75;
  uStack_71 = 0;
  uStack_10f = 0x70;
  uStack_10e = 0x6c;
  uStack_10d = 0x53507265;
  uStack_117 = 0x73556461;
  uStack_113 = 0x65;
  uStack_112 = 0x53;
  uStack_111 = 0x61;
  local_110 = 0x6d;
  uStack_11f = 0x6574737953;
  uStack_11a = 0x516d;
  local_118 = 0x75;
  uStack_109 = 0;
  local_c7 = 0;
  local_108[0] = local_108[0] & 0xffffffffffffff00;
  FUN_71037c9810((long)local_108,(char *)((ulong)&local_120 | 1));
  local_c0 = &DAT_710525efb8;
  local_b8 = 0x400001900;
  local_b0 = 0;
  local_2d8 = FUN_71037cffc0((char *)local_108,extraout_x1_13,pppuVar4,param_4,param_5,param_6,
                             param_7,param_8);
  if (local_2d8 == (long *)0x0) {
    local_2d0 = (long *)0x0;
    local_2c8 = 0;
  }
  else {
    local_2d0 = (long *)local_2d8[1];
    local_2c8 = *local_2d0;
  }
  local_2e0 = &PTR_FUN_7105242188;
  FUN_71037e5130(param_1,local_88,(long)&local_2e0,param_4,param_5,param_6,param_7,param_8);
  local_2e0 = &PTR_FUN_7105242188;
  if (((local_2d0 != (long *)0x0) && (*local_2d0 == local_2c8)) && (local_2d8 != (long *)0x0)) {
    (**(code **)(*local_2d8 + 8))();
  }
  if ((local_120 & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_109,
                              CONCAT43(uStack_10d,
                                       CONCAT12(uStack_10e,CONCAT11(uStack_10f,local_110))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  if ((local_88[0] & 1) != 0) {
    pvVar1 = (void *)CONCAT17(uStack_71,
                              CONCAT43(uStack_75,
                                       CONCAT12(local_88[0x12],
                                                CONCAT11(local_88[0x11],local_88[0x10]))));
    nu::VirtualFreeHook(pvVar1);
    FUN_710392eb40((ulong)pvVar1);
  }
  return;
}

