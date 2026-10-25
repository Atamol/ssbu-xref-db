// addr:      7101e35cb0
// offset:    0x1e35cb0
// name:      FUN_7101e35cb0
// mangled:   
// signature: undefined __cdecl FUN_7101e35cb0(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


void FUN_7101e35cb0(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 uVar10;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  long ****pppplVar11;
  undefined **ppuVar12;
  long *********ppppppppplVar13;
  byte ****ppppbVar14;
  undefined4 *puVar15;
  long lVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  undefined1 auVar22 [16];
  long ***local_b8;
  byte local_b0 [64];
  undefined **local_70;
  ulong local_68;
  
  *param_1 = &PTR_FUN_71050b1738;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xf] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar6 = FUN_710392e290(0x10,0x1030,param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar6 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (undefined **)((ulong)local_70 & 0xffffffff00000000);
      local_b8 = (long ***)0x1030;
      pppplVar11 = &local_b8;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar7 & 1) != 0) &&
         (lVar6 = FUN_710392e290(0x10,0x1030,pppplVar11,param_4,param_5,param_6,param_7,param_8),
         lVar6 != 0)) goto LAB_7101e35d64;
    }
    lVar6 = 0;
  }
LAB_7101e35d64:
  pppplVar11 = (long ****)0x10c;
  *(undefined4 *)(lVar6 + 0x134) = 0;
  *(long *)lVar6 = lVar6;
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x138) = 0xffffffff;
  *(undefined4 *)(lVar6 + 0x140) = 0xffffffff;
  *(undefined1 *)(lVar6 + 0x144) = 0;
  *(undefined8 *)(lVar6 + 8) = 0;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  memset((void *)(lVar6 + 0x28),0,0x10c);
  *(long **)(lVar6 + 0x148) = param_2;
  puVar8 = (undefined8 *)FUN_710392e290(0x10,8,pppplVar11,param_4,param_5,param_6,param_7,param_8);
  uVar10 = extraout_x1;
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (undefined **)((ulong)local_70 & 0xffffffff00000000);
      local_b8 = (long ***)&DAT_00000008;
      pppplVar11 = &local_b8;
      auVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      uVar10 = auVar22._8_8_;
      if (((auVar22._0_8_ & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,8,pppplVar11,param_4,param_5,param_6,param_7,param_8),
         uVar10 = extraout_x1_00, puVar8 != (undefined8 *)0x0)) goto LAB_7101e35df4;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101e35df4:
  FUN_7103773200(puVar8,uVar10,pppplVar11,param_4,param_5,param_6,param_7,param_8);
  *(undefined8 **)(lVar6 + 0x150) = puVar8;
  puVar8 = (undefined8 *)FUN_710392e290(0x10,8,pppplVar11,param_4,param_5,param_6,param_7,param_8);
  uVar10 = extraout_x1_01;
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (undefined **)((ulong)local_70 & 0xffffffff00000000);
      local_b8 = (long ***)&DAT_00000008;
      pppplVar11 = &local_b8;
      auVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      uVar10 = auVar22._8_8_;
      if (((auVar22._0_8_ & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,8,pppplVar11,param_4,param_5,param_6,param_7,param_8),
         uVar10 = extraout_x1_02, puVar8 != (undefined8 *)0x0)) goto LAB_7101e35e5c;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101e35e5c:
  FUN_7103773200(puVar8,uVar10,pppplVar11,param_4,param_5,param_6,param_7,param_8);
  *(undefined8 **)(lVar6 + 0x158) = puVar8;
  puVar8 = (undefined8 *)FUN_710392e290(0x10,8,pppplVar11,param_4,param_5,param_6,param_7,param_8);
  uVar10 = extraout_x1_03;
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (undefined **)((ulong)local_70 & 0xffffffff00000000);
      local_b8 = (long ***)&DAT_00000008;
      pppplVar11 = &local_b8;
      auVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      uVar10 = auVar22._8_8_;
      if (((auVar22._0_8_ & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,8,pppplVar11,param_4,param_5,param_6,param_7,param_8),
         uVar10 = extraout_x1_04, puVar8 != (undefined8 *)0x0)) goto LAB_7101e35ec4;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101e35ec4:
  FUN_7103773200(puVar8,uVar10,pppplVar11,param_4,param_5,param_6,param_7,param_8);
  *(undefined8 **)(lVar6 + 0x160) = puVar8;
  puVar8 = (undefined8 *)FUN_710392e290(0x10,8,pppplVar11,param_4,param_5,param_6,param_7,param_8);
  uVar10 = extraout_x1_05;
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (undefined **)((ulong)local_70 & 0xffffffff00000000);
      local_b8 = (long ***)&DAT_00000008;
      pppplVar11 = &local_b8;
      auVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      uVar10 = auVar22._8_8_;
      if (((auVar22._0_8_ & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,8,pppplVar11,param_4,param_5,param_6,param_7,param_8),
         uVar10 = extraout_x1_06, puVar8 != (undefined8 *)0x0)) goto LAB_7101e35f30;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101e35f30:
  FUN_7103773200(puVar8,uVar10,pppplVar11,param_4,param_5,param_6,param_7,param_8);
  *(undefined8 *)(lVar6 + 0x178) = 0;
  *(undefined ***)(lVar6 + 0x180) = &PTR_FUN_71050b1818;
  pppplVar11 = (long ****)0x2f0;
  *(undefined8 *)(lVar6 + 0x188) = 0;
  *(undefined8 **)(lVar6 + 0x168) = puVar8;
  *(undefined8 *)(lVar6 + 0x170) = 0;
  *(undefined8 *)(lVar6 + 0x1cd) = 0;
  *(undefined4 *)(lVar6 + 0x1d8) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0x1c0) = 0;
  *(undefined8 *)(lVar6 + 0x1c8) = 0;
  *(undefined8 *)(lVar6 + 0x1b0) = 0;
  *(undefined8 *)(lVar6 + 0x1b8) = 0;
  *(undefined8 *)(lVar6 + 0x1a0) = 0;
  *(undefined8 *)(lVar6 + 0x1a8) = 0;
  *(undefined8 *)(lVar6 + 400) = 0;
  *(undefined8 *)(lVar6 + 0x198) = 0;
  memset((void *)(lVar6 + 0x1dc),0,0x2f0);
  DAT_7105325dc8 = DAT_7105325dc0;
  DAT_7105325e40 = DAT_7105325e38;
  DAT_7105325de0 = DAT_7105325dd8;
  DAT_7105325e58 = DAT_7105325e50;
  DAT_7105325df8 = DAT_7105325df0;
  DAT_7105325e70 = DAT_7105325e68;
  DAT_7105325e10 = DAT_7105325e08;
  DAT_7105325e88 = DAT_7105325e80;
  DAT_7105325e28 = DAT_7105325e20;
  DAT_7105325ea0 = DAT_7105325e98;
  FUN_71032cc410((undefined8 *)(lVar6 + 0x4d0),extraout_x1_07,pppplVar11,param_4,param_5,param_6,
                 param_7,param_8);
  *(undefined ***)(lVar6 + 0x508) = &PTR_FUN_71050b1930;
  *(undefined ***)(lVar6 + 0x540) = &PTR_FUN_71050b0ba0;
  *(undefined ***)(lVar6 + 0x580) = &PTR_FUN_71050b0f08;
  *(undefined4 *)(lVar6 + 0x5b8) = 10;
  *(undefined4 *)(lVar6 + 0x628) = 10;
  *(undefined4 *)(lVar6 + 0x6a0) = 10;
  *(undefined4 *)(lVar6 + 0x710) = 10;
  *(undefined4 *)(lVar6 + 2000) = 0x3f800000;
  pppplVar11 = (long ****)0x308;
  *(undefined8 *)(lVar6 + 0x500) = 0;
  *(undefined8 *)(lVar6 + 0x4f8) = 0;
  *(undefined8 *)(lVar6 + 0x538) = 0;
  *(undefined8 *)(lVar6 + 0x530) = 0;
  *(undefined8 *)(lVar6 + 0x528) = 0;
  *(undefined8 *)(lVar6 + 0x520) = 0;
  *(undefined8 *)(lVar6 + 0x518) = 0;
  *(undefined8 *)(lVar6 + 0x510) = 0;
  *(undefined1 *)(lVar6 + 0x560) = 0;
  *(undefined8 *)(lVar6 + 0x558) = 0;
  *(undefined8 *)(lVar6 + 0x550) = 0;
  *(undefined8 *)(lVar6 + 0x548) = 0;
  *(undefined8 *)(lVar6 + 0x570) = 0;
  *(undefined8 *)(lVar6 + 0x568) = 0;
  *(undefined8 *)(lVar6 + 0x5b0) = 0;
  *(undefined8 *)(lVar6 + 0x5a8) = 0;
  *(undefined8 *)(lVar6 + 0x5a0) = 0;
  *(undefined8 *)(lVar6 + 0x598) = 0;
  *(undefined8 *)(lVar6 + 0x590) = 0;
  *(undefined8 *)(lVar6 + 0x588) = 0;
  *(undefined8 *)(lVar6 + 0x5e8) = 0;
  *(undefined8 *)(lVar6 + 0x5e0) = 0;
  *(undefined8 *)(lVar6 + 0x5d8) = 0;
  *(undefined8 *)(lVar6 + 0x5d0) = 0;
  *(undefined8 *)(lVar6 + 0x5c8) = 0;
  *(undefined8 *)(lVar6 + 0x5c0) = 0;
  *(undefined4 *)(lVar6 + 0x5f0) = 100;
  *(undefined8 *)(lVar6 + 0x620) = 0;
  *(undefined8 *)(lVar6 + 0x618) = 0;
  *(undefined8 *)(lVar6 + 0x610) = 0;
  *(undefined8 *)(lVar6 + 0x608) = 0;
  *(undefined8 *)(lVar6 + 0x600) = 0;
  *(undefined8 *)(lVar6 + 0x5f8) = 0;
  *(undefined8 *)(lVar6 + 0x658) = 0;
  *(undefined8 *)(lVar6 + 0x650) = 0;
  *(undefined8 *)(lVar6 + 0x648) = 0;
  *(undefined8 *)(lVar6 + 0x640) = 0;
  *(undefined8 *)(lVar6 + 0x638) = 0;
  *(undefined8 *)(lVar6 + 0x630) = 0;
  *(undefined4 *)(lVar6 + 0x660) = 100;
  *(undefined4 *)(lVar6 + 0x668) = 2;
  *(undefined8 *)(lVar6 + 0x698) = 0;
  *(undefined8 *)(lVar6 + 0x690) = 0;
  *(undefined8 *)(lVar6 + 0x688) = 0;
  *(undefined8 *)(lVar6 + 0x680) = 0;
  *(undefined8 *)(lVar6 + 0x678) = 0;
  *(undefined8 *)(lVar6 + 0x670) = 0;
  *(undefined8 *)(lVar6 + 0x6d0) = 0;
  *(undefined8 *)(lVar6 + 0x6c8) = 0;
  *(undefined8 *)(lVar6 + 0x6c0) = 0;
  *(undefined8 *)(lVar6 + 0x6b8) = 0;
  *(undefined8 *)(lVar6 + 0x6b0) = 0;
  *(undefined8 *)(lVar6 + 0x6a8) = 0;
  *(undefined4 *)(lVar6 + 0x6d8) = 100;
  *(undefined8 *)(lVar6 + 0x708) = 0;
  *(undefined8 *)(lVar6 + 0x700) = 0;
  *(undefined8 *)(lVar6 + 0x6f8) = 0;
  *(undefined8 *)(lVar6 + 0x6f0) = 0;
  *(undefined8 *)(lVar6 + 0x6e8) = 0;
  *(undefined8 *)(lVar6 + 0x6e0) = 0;
  *(undefined8 *)(lVar6 + 0x740) = 0;
  *(undefined8 *)(lVar6 + 0x738) = 0;
  *(undefined8 *)(lVar6 + 0x730) = 0;
  *(undefined8 *)(lVar6 + 0x728) = 0;
  *(undefined8 *)(lVar6 + 0x720) = 0;
  *(undefined8 *)(lVar6 + 0x718) = 0;
  *(undefined4 *)(lVar6 + 0x748) = 100;
  *(undefined4 *)(lVar6 + 0x750) = 8;
  *(long **)(lVar6 + 0x758) = param_2;
  *(undefined8 *)(lVar6 + 0x7c8) = 0;
  *(undefined8 *)(lVar6 + 0x7c0) = 0;
  *(undefined8 *)(lVar6 + 0x7b8) = 0;
  *(undefined8 *)(lVar6 + 0x7b0) = 0;
  *(undefined8 *)(lVar6 + 0x7a8) = 0;
  *(undefined8 *)(lVar6 + 0x7a0) = 0;
  *(undefined8 *)(lVar6 + 0x798) = 0;
  *(undefined8 *)(lVar6 + 0x790) = 0;
  *(undefined8 *)(lVar6 + 0x788) = 0;
  *(undefined8 *)(lVar6 + 0x780) = 0;
  *(undefined8 *)(lVar6 + 0x778) = 0;
  *(undefined8 *)(lVar6 + 0x770) = 0;
  *(undefined8 *)(lVar6 + 0x768) = 0;
  *(undefined8 *)(lVar6 + 0x760) = 0;
  *(undefined8 *)(lVar6 + 0x7d8) = 0x52ffff0000000000;
  *(undefined4 *)(lVar6 + 0x7e0) = 0;
  *(undefined8 *)(lVar6 + 0x7e8) = 0;
  *(undefined8 *)(lVar6 + 0x810) = 0;
  *(undefined1 *)(lVar6 + 0x820) = 0;
  *(undefined4 *)(lVar6 + 0x824) = 0xffffffff;
  memset((void *)(lVar6 + 0x828),0,0x308);
  *(undefined4 *)(lVar6 + 0xb30) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0xb78) = 0;
  *(undefined8 *)(lVar6 + 0xb70) = 0;
  *(undefined8 *)(lVar6 + 0xb68) = 0;
  *(undefined8 *)(lVar6 + 0xb60) = 0;
  *(undefined4 *)(lVar6 + 0xb58) = 0;
  *(undefined8 *)(lVar6 + 0xb50) = 0;
  *(undefined8 *)(lVar6 + 0xb48) = 0;
  *(undefined8 *)(lVar6 + 0xb40) = 0;
  *(undefined8 *)(lVar6 + 0xb38) = 0;
  *(undefined8 *)(lVar6 + 0xb80) = 0xffffffff;
  *(undefined4 *)(lVar6 + 0xb88) = 0xffffffff;
  *(undefined2 *)(lVar6 + 0xb96) = 0;
  *(undefined1 *)(lVar6 + 0xb98) = 0;
  FUN_7103776290((undefined8 *)(lVar6 + 0xba0),extraout_x1_08,pppplVar11,param_4,param_5,param_6,
                 param_7,param_8);
  *(undefined8 *)(lVar6 + 0xbd8) = 0x100000000;
  *(undefined1 *)(lVar6 + 0xbb4) = 0;
  *(undefined4 *)(lVar6 + 0xbb0) = 0;
  *(undefined8 *)(lVar6 + 0xbd0) = 0;
  *(undefined8 *)(lVar6 + 0xbc8) = 0;
  *(undefined8 *)(lVar6 + 0xbc0) = 0;
  *(undefined8 *)(lVar6 + 3000) = 0;
  *(undefined8 *)(lVar6 + 0xbe6) = 0;
  *(undefined8 *)(lVar6 + 0xbe0) = 0;
  *(undefined4 *)(lVar6 + 0xc00) = 0;
  *(undefined8 *)(lVar6 + 0xbf8) = 0;
  *(undefined8 *)(lVar6 + 0xbf0) = 0;
  *(undefined8 *)(lVar6 + 0xc24) = 0xffffffffffffffff;
  *(undefined4 *)(lVar6 + 0xc2c) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0xc64) = 0xffffffffffffffff;
  *(undefined4 *)(lVar6 + 0xc6c) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0xca4) = 0xffffffffffffffff;
  *(undefined4 *)(lVar6 + 0xcac) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0xce4) = 0xffffffffffffffff;
  *(undefined4 *)(lVar6 + 0xd94) = 0x876500;
  *(undefined ***)(lVar6 + 0xd80) = &PTR_FUN_7104f73d30;
  *(undefined4 *)(lVar6 + 0xe70) = 0x5040306;
  *(undefined1 *)(lVar6 + 0xf00) = 1;
  *(undefined4 *)(lVar6 + 0xcec) = 0xffffffff;
  *(undefined1 *)(lVar6 + 0xd24) = 0;
  *(undefined8 *)(lVar6 + 0xd30) = 0;
  *(undefined8 *)(lVar6 + 0xd28) = 0;
  *(undefined8 *)(lVar6 + 0xd68) = 0;
  *(undefined8 *)(lVar6 + 0xd60) = 0;
  *(undefined8 *)(lVar6 + 0xd58) = 0;
  *(undefined8 *)(lVar6 + 0xd50) = 0;
  *(undefined8 *)(lVar6 + 0xd48) = 0;
  *(undefined8 *)(lVar6 + 0xd40) = 0;
  *(undefined2 *)(lVar6 + 0xd70) = 0xffff;
  *(undefined2 *)(lVar6 + 0xd72) = 0xffff;
  *(undefined8 *)(lVar6 + 0xd88) = 0;
  *(undefined4 *)(lVar6 + 0xd90) = 0;
  *(undefined1 *)(lVar6 + 0xd98) = 0;
  *(undefined4 *)(lVar6 + 0xd78) = 0;
  *(undefined4 *)(lVar6 + 0xda0) = 0xffffffff;
  *(undefined4 *)(lVar6 + 0xda4) = 0xffffffff;
  *(undefined4 *)(lVar6 + 0xdd8) = 0;
  *(undefined8 *)(lVar6 + 0xdd0) = 0;
  *(undefined8 *)(lVar6 + 0xdc8) = 0;
  *(undefined8 *)(lVar6 + 0xdc0) = 0;
  *(undefined8 *)(lVar6 + 0xe68) = 0;
  *(undefined8 *)(lVar6 + 0xe60) = 0;
  *(undefined8 *)(lVar6 + 0xe58) = 0;
  *(undefined8 *)(lVar6 + 0xe50) = 0;
  *(undefined8 *)(lVar6 + 0xe48) = 0;
  *(undefined8 *)(lVar6 + 0xe40) = 0;
  *(undefined8 *)(lVar6 + 0xe38) = 0;
  *(undefined8 *)(lVar6 + 0xe30) = 0;
  *(undefined8 *)(lVar6 + 0xe28) = 0;
  *(undefined8 *)(lVar6 + 0xe20) = 0;
  *(undefined8 *)(lVar6 + 0xe18) = 0;
  *(undefined8 *)(lVar6 + 0xe10) = 0;
  *(undefined8 *)(lVar6 + 0xe08) = 0;
  *(undefined8 *)(lVar6 + 0xe00) = 0;
  *(undefined8 *)(lVar6 + 0xdf8) = 0;
  *(undefined8 *)(lVar6 + 0xdf0) = 0;
  *(undefined8 *)(lVar6 + 0xde8) = 0;
  *(undefined8 *)(lVar6 + 0xde0) = 0;
  *(undefined4 *)(lVar6 + 0xdb8) = 0;
  *(undefined8 *)(lVar6 + 0xdb0) = 0;
  *(undefined8 *)(lVar6 + 0xda8) = 0;
  *(undefined2 *)(lVar6 + 0xe74) = 2;
  *(undefined8 *)(lVar6 + 0xe00) = 0;
  *(undefined8 *)(lVar6 + 0xe18) = 0;
  *(undefined8 *)(lVar6 + 0xe30) = 0;
  *(undefined8 *)(lVar6 + 0xe48) = 0;
  *(undefined8 *)(lVar6 + 0xe60) = 0;
  *(undefined1 *)(lVar6 + 0xef0) = 0;
  *(undefined8 *)(lVar6 + 0xee8) = 0;
  *(undefined8 *)(lVar6 + 0xee0) = 0;
  *(undefined8 *)(lVar6 + 0xed8) = 0;
  *(undefined8 *)(lVar6 + 0xed0) = 0;
  *(undefined8 *)(lVar6 + 0xec8) = 0;
  *(undefined8 *)(lVar6 + 0xec0) = 0;
  *(undefined8 *)(lVar6 + 0xeb8) = 0;
  *(undefined8 *)(lVar6 + 0xeb0) = 0;
  *(undefined8 *)(lVar6 + 0xea8) = 0;
  *(undefined8 *)(lVar6 + 0xea0) = 0;
  *(undefined8 *)(lVar6 + 0xe98) = 0;
  *(undefined8 *)(lVar6 + 0xe90) = 0;
  *(undefined8 *)(lVar6 + 0xe88) = 0;
  *(undefined8 *)(lVar6 + 0xe80) = 0;
  *(undefined8 *)(lVar6 + 0xe78) = 0;
  *(undefined8 *)(lVar6 + 0xef8) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0xf10) = 0;
  *(undefined8 *)(lVar6 + 0xf02) = 0;
  *(undefined8 *)(lVar6 + 0xf20) = 0x1010101ffffffff;
  *(undefined1 *)(lVar6 + 0xf0c) = 0;
  *(undefined2 *)(lVar6 + 0xf0a) = 0;
  *(undefined8 *)(lVar6 + 0xf18) = 0xffffffffffffffff;
  *(undefined2 *)(lVar6 + 0xf28) = 0x101;
  *(undefined4 *)(lVar6 + 0xf32) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0xf2a) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0xf48) = 0;
  *(undefined8 *)(lVar6 + 0xf40) = 0;
  *(undefined8 *)(lVar6 + 0xf38) = 0;
  *(undefined4 *)(lVar6 + 0xf54) = 0;
  *(undefined4 *)(lVar6 + 0xf60) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0xf58) = 0xffffffffffffffff;
  *(undefined2 *)(lVar6 + 0xf68) = 0x101;
  *(undefined4 *)(lVar6 + 0xf64) = 0x1010101;
  *(undefined4 *)(lVar6 + 0xf72) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0xf6a) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0xf88) = 0;
  *(undefined8 *)(lVar6 + 0xf80) = 0;
  *(undefined8 *)(lVar6 + 0xf78) = 0;
  *(undefined4 *)(lVar6 + 0xf94) = 0;
  *(undefined4 *)(lVar6 + 4000) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0xf98) = 0xffffffffffffffff;
  *(undefined2 *)(lVar6 + 0xfa8) = 0x101;
  *(undefined4 *)(lVar6 + 0xfa4) = 0x1010101;
  *(undefined4 *)(lVar6 + 0xfb2) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0xfaa) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0xfc8) = 0;
  *(undefined8 *)(lVar6 + 0xfc0) = 0;
  *(undefined8 *)(lVar6 + 0xfb8) = 0;
  *(undefined4 *)(lVar6 + 0xfd4) = 0;
  *(undefined4 *)(lVar6 + 0xfe0) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0xfd8) = 0xffffffffffffffff;
  *(undefined2 *)(lVar6 + 0xfe8) = 0x101;
  *(undefined4 *)(lVar6 + 0xfe4) = 0x1010101;
  *(undefined4 *)(lVar6 + 0xff2) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0xfea) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0x1008) = 0;
  *(undefined8 *)(lVar6 + 0x1000) = 0;
  *(undefined8 *)(lVar6 + 0xff8) = 0;
  *(undefined4 *)(lVar6 + 0x1014) = 0;
  *(undefined1 *)(lVar6 + 0x1018) = 0;
  *(undefined2 *)(lVar6 + 0x101c) = 0xffff;
  *(undefined2 *)(lVar6 + 0x101e) = 0xffff;
  *(undefined8 *)(lVar6 + 0x1020) = 0;
  *(undefined4 *)(lVar6 + 0xc20) = 0;
  *(code **)(lVar6 + 0x28) = FUN_7101e18540;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(code **)(lVar6 + 0x38) = FUN_7101e18550;
  *(undefined8 *)(lVar6 + 0x40) = 0;
  *(code **)(lVar6 + 0x48) = FUN_7101e193e0;
  *(undefined8 *)(lVar6 + 0x50) = 0;
  *(code **)(lVar6 + 0x68) = FUN_7101e1b760;
  *(undefined8 *)(lVar6 + 0x70) = 0;
  *(code **)(lVar6 + 0x78) = FUN_7101e1b7f0;
  *(undefined8 *)(lVar6 + 0x80) = 0;
  *(code **)(lVar6 + 0xa8) = FUN_7101e1f000;
  *(undefined8 *)(lVar6 + 0xb0) = 0;
  *(code **)(lVar6 + 0xb8) = FUN_7101e1f060;
  *(undefined8 *)(lVar6 + 0xc0) = 0;
  *(undefined4 *)(lVar6 + 0xc04) = 4;
  *(undefined4 *)(lVar6 + 0xc18) = 4;
  *(code **)(lVar6 + 0x58) = FUN_7101e19480;
  *(undefined8 *)(lVar6 + 0x60) = 0;
  *(code **)(lVar6 + 0x88) = FUN_7101e1efc0;
  *(undefined8 *)(lVar6 + 0x90) = 0;
  *(code **)(lVar6 + 0xd8) = FUN_7101e1f180;
  *(undefined8 *)(lVar6 + 0xe0) = 0;
  *(undefined4 *)(lVar6 + 0xc08) = 6;
  *(undefined4 *)(lVar6 + 0xc0c) = 6;
  *(undefined4 *)(lVar6 + 0xc10) = 6;
  *(undefined4 *)(lVar6 + 0xc14) = 6;
  *(undefined4 *)(lVar6 + 0xc1c) = 6;
  if (0x12 < *(uint *)(lVar6 + 0x134)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(lVar6 + (long)(int)*(uint *)(lVar6 + 0x134) * 4 + 0xe8) = 0;
  *(undefined8 *)(lVar6 + 0xb8c) = 0;
  *(undefined2 *)(lVar6 + 0xb94) = 0;
  *(undefined4 *)(lVar6 + 0xf20) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0xf18) = 0xffffffffffffffff;
  *(undefined2 *)(lVar6 + 0xf28) = 0x101;
  *(undefined4 *)(lVar6 + 0xf24) = 0x1010101;
  *(undefined4 *)(lVar6 + 0xf32) = 0xffffffff;
  pppplVar11 = (long ****)(lVar6 + 0xfd8);
  puVar15 = (undefined4 *)(lVar6 + 0xfe4);
  *(undefined8 *)(lVar6 + 0xf2a) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0xf40) = 0;
  *(undefined8 *)(lVar6 + 0xf48) = 0;
  *(undefined8 *)(lVar6 + 0xf38) = 0;
  *(undefined4 *)(lVar6 + 0xf54) = 0;
  *(undefined4 *)(lVar6 + 0xf60) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0xf58) = 0xffffffffffffffff;
  *(undefined2 *)(lVar6 + 0xf68) = 0x101;
  *(undefined4 *)(lVar6 + 0xf64) = 0x1010101;
  *(undefined4 *)(lVar6 + 0xf72) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0xf6a) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0xf78) = 0;
  *(undefined8 *)(lVar6 + 0xf80) = 0;
  *(undefined8 *)(lVar6 + 0xf88) = 0;
  *(undefined4 *)(lVar6 + 0xf94) = 0;
  *(undefined4 *)(lVar6 + 4000) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0xf98) = 0xffffffffffffffff;
  *(undefined2 *)(lVar6 + 0xfa8) = 0x101;
  *(undefined4 *)(lVar6 + 0xfa4) = 0x1010101;
  *(undefined4 *)(lVar6 + 0xfb2) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0xfaa) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0xfb8) = 0;
  *(undefined8 *)(lVar6 + 0xfc0) = 0;
  *(undefined8 *)(lVar6 + 0xfc8) = 0;
  *(undefined4 *)(lVar6 + 0xfd4) = 0;
  *(undefined4 *)(lVar6 + 0xfe0) = 0xffffffff;
  *pppplVar11 = (long ***)0xffffffffffffffff;
  *(undefined2 *)(lVar6 + 0xfe8) = 0x101;
  *puVar15 = 0x1010101;
  *(undefined4 *)(lVar6 + 0xff2) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0xfea) = 0xffffffffffffffff;
  *(undefined8 *)(lVar6 + 0xff8) = 0;
  *(undefined8 *)(lVar6 + 0x1000) = 0;
  *(undefined8 *)(lVar6 + 0x1008) = 0;
  *(undefined4 *)(lVar6 + 0x1014) = 0;
  *(undefined1 *)(lVar6 + 0x1018) = 0;
  *(undefined1 *)(lVar6 + 0xf01) = 0;
  param_1[0x10] = lVar6;
  FUN_71032cbf30((undefined8 *)(lVar6 + 0x150),*param_2,(ulong *)&DAT_71045459f8,(byte ****)0x1,
                 pppplVar11,puVar15,param_7,param_8);
  FUN_71032cbf30((undefined8 *)(lVar6 + 0x158),*param_2,(ulong *)&DAT_7104545a00,(byte ****)0x1,
                 pppplVar11,puVar15,param_7,param_8);
  FUN_71032cbf30((undefined8 *)(lVar6 + 0x160),*param_2,(ulong *)&DAT_7104545a08,(byte ****)0x1,
                 pppplVar11,puVar15,param_7,param_8);
  ppuVar12 = (undefined **)&DAT_7104545a10;
  ppppbVar14 = (byte ****)0x1;
  FUN_71032cbf30((undefined8 *)(lVar6 + 0x168),*param_2,(ulong *)&DAT_7104545a10,(byte ****)0x1,
                 pppplVar11,puVar15,param_7,param_8);
  lVar3 = DAT_710532f8b8;
  lVar21 = *param_2;
  if (((DAT_710532f4d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_710532f4d8), iVar5 != 0)) {
    DAT_710532f4a4 = 0xffffff;
    ppuVar12 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d8);
    lVar20 = *(long *)(lVar21 + 0x28);
  }
  else {
    lVar20 = *(long *)(lVar21 + 0x28);
  }
  if (lVar20 != 0) {
    lVar16 = lVar21 + 0x28;
    do {
      bVar4 = (*(ulong *)(lVar20 + 0x20) & 0xfffffffffe) < 0x103608c8e6;
      if (!bVar4) {
        lVar16 = lVar20;
      }
      lVar20 = *(long *)(lVar20 + (ulong)bVar4 * 8);
    } while (lVar20 != 0);
    if ((lVar16 != lVar21 + 0x28) && ((*(ulong *)(lVar16 + 0x20) & 0xffffffffff) < 0x103608c8e7)) {
      ppppppppplVar13 = (long *********)(lVar16 + 0x28);
      goto LAB_7101e366e8;
    }
  }
  ppppppppplVar13 = (long *********)&DAT_710532f4a4;
LAB_7101e366e8:
  if (*(int *)ppppppppplVar13 != 0xffffff) {
    ppuVar12 = (undefined **)&DAT_00000009;
    iVar5 = FUN_710330a8f0(*(long **)(lVar3 + 8),(ulong *)&DAT_71045459f0,(long ****)&DAT_00000009,
                           ppppbVar14,pppplVar11,puVar15,param_7,param_8);
    if (iVar5 != 0) {
      FUN_7103563a20(*lib::Singleton<lib::EffectManager>::instance_,iVar5,ppppppppplVar13,ppppbVar14
                     ,pppplVar11,(ulong)puVar15,param_7,param_8);
      ppuVar12 = (undefined **)ppppppppplVar13;
    }
  }
  FUN_71037760f0(*(long *)**(undefined8 **)(lVar6 + 0x160),0);
  uVar7 = 0;
  *(undefined4 *)(lVar6 + 0xb58) = 0;
  *(undefined8 *)(lVar6 + 0xde8) = *(undefined8 *)(lVar6 + 0xde0);
  pcVar1 = "on_plt_menu_lyt_00";
  if (((ulong)param_3 & 1) == 0) {
    pcVar1 = "off_plt_menu_lyt_00";
  }
  do {
    bVar2 = pcVar1[uVar7];
    if (bVar2 == 0) {
LAB_7101e367ac:
      uVar18 = 0x811c9dc5;
      local_b0[uVar7 & 0xffffffff] = 0;
      uVar19 = (uint)local_b0[0];
      if (local_b0[0] != 0) {
        pbVar17 = local_b0;
        do {
          pbVar17 = pbVar17 + 1;
          uVar18 = uVar18 * 0x89 ^ uVar19;
          uVar19 = (uint)*pbVar17;
        } while (uVar19 != 0);
      }
      local_b8 = (long ***)CONCAT44((int)uVar7,uVar18);
      FUN_7103776390(&local_70,(undefined8 *)(**(long **)(lVar6 + 0x150) + 8),(long ****)ppuVar12,
                     ppppbVar14,pppplVar11,puVar15,param_7,param_8);
      FUN_7103778760(local_68,0x710428ff7d);
      FUN_7103778300(0x3f800000,local_68,(long)local_b0);
      uVar7 = local_68;
      local_70 = &PTR_FUN_710523d988;
      local_68 = 0;
      if (uVar7 != 0) {
        uVar9 = *(ulong *)(uVar7 + 0x18);
        *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar7 + 0x18) = 0;
        if (uVar9 != 0) {
          FUN_710392eb40(uVar9);
        }
        FUN_710392eb40(uVar7);
      }
      FUN_7103776390(&local_70,(undefined8 *)(**(long **)(lVar6 + 0x168) + 8),(long ****)ppuVar12,
                     ppppbVar14,pppplVar11,puVar15,param_7,param_8);
      FUN_7103778760(local_68,0x710428ff7d);
      FUN_7103778300(0x3f800000,local_68,(long)local_b0);
      uVar7 = local_68;
      local_70 = &PTR_FUN_710523d988;
      local_68 = 0;
      if (uVar7 != 0) {
        uVar9 = *(ulong *)(uVar7 + 0x18);
        *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar7 + 0x18) = 0;
        if (uVar9 != 0) {
          FUN_710392eb40(uVar9);
        }
        FUN_710392eb40(uVar7);
      }
      FUN_7103776390(&local_70,(undefined8 *)(**(long **)(lVar6 + 0x160) + 8),(long ****)ppuVar12,
                     ppppbVar14,pppplVar11,puVar15,param_7,param_8);
      FUN_7103778760(local_68,0x710428ff7d);
      FUN_7103778300(0x3f800000,local_68,(long)local_b0);
      uVar7 = local_68;
      local_70 = &PTR_FUN_710523d988;
      local_68 = 0;
      if (uVar7 != 0) {
        uVar9 = *(ulong *)(uVar7 + 0x18);
        *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar7 + 0x18) = 0;
        if (uVar9 != 0) {
          FUN_710392eb40(uVar9);
        }
        FUN_710392eb40(uVar7);
      }
      lVar6 = *(long *)(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8) + 0x80);
      *(undefined1 *)(lVar6 + 0x1210) = 0;
      *(undefined8 *)(lVar6 + 0x1208) = 0;
      memset((void *)(lVar6 + 0x1250),0,0x1000);
      return;
    }
    local_b0[uVar7] = bVar2;
    if (0x3e < (int)uVar7 + 1U) {
      uVar7 = (ulong)((int)uVar7 + 1);
      goto LAB_7101e367ac;
    }
    bVar2 = (pcVar1 + uVar7)[1];
    if (bVar2 == 0) {
      uVar7 = uVar7 + 1;
      goto LAB_7101e367ac;
    }
    local_b0[uVar7 + 1] = bVar2;
    uVar7 = uVar7 + 2;
  } while( true );
}

