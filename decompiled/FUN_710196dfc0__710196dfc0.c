// addr:      710196dfc0
// offset:    0x196dfc0
// name:      FUN_710196dfc0
// mangled:   
// signature: undefined __cdecl FUN_710196dfc0(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710196dfc0(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long ********pppppppplVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *****ppppplVar11;
  long lVar12;
  long *******ppppppplVar13;
  long ***ppplVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
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
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  long *********ppppppppplVar18;
  long *********ppppppppplVar19;
  undefined8 uVar20;
  char *pcVar21;
  byte ****ppppbVar22;
  long ****pppplVar23;
  long ****pppplVar24;
  long ******pppppplVar25;
  long **pplVar26;
  code *pcVar27;
  uint uVar28;
  long lVar29;
  long *******ppppppplVar30;
  long lVar31;
  uint uVar32;
  long *plVar33;
  long ******pppppplVar34;
  long ****pppplVar35;
  ulong uVar36;
  long ******pppppplVar37;
  undefined1 auVar38 [16];
  undefined8 local_218;
  long ********local_210 [8];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a4;
  undefined8 local_1a0;
  long ******local_198;
  undefined4 local_190;
  undefined2 local_18c;
  undefined1 local_18a;
  undefined1 *local_188;
  undefined4 local_180;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  long alStack_e0 [4];
  long *local_c0;
  long alStack_b0 [4];
  long *local_90;
  undefined4 local_80;
  
  plVar7 = (long *)FUN_710392e290(0x10,0x108,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_218 = (undefined **)((ulong)local_218 & 0xffffffff00000000);
      local_1a0 = (undefined **)&DAT_00000108;
      param_3 = (long ****)&local_1a0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_218);
      if (((uVar8 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,0x108,param_3,param_4,param_5,param_6,param_7,param_8
                                         ), plVar7 != (long *)0x0)) goto LAB_710196e044;
    }
    plVar7 = (long *)0x0;
  }
LAB_710196e044:
  *plVar7 = (long)plVar7;
  plVar7[4] = 0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  *(undefined4 *)(plVar7 + 0x1a) = 0xffffffff;
  *(undefined1 *)((long)plVar7 + 0xd4) = 0;
  plVar7[5] = 0;
  plVar7[0x18] = 0;
  plVar7[0x19] = 0xffffffff;
  plVar7[0x16] = 0;
  plVar7[0x17] = 0;
  plVar7[0x14] = 0;
  plVar7[0x15] = 0;
  plVar7[0x12] = 0;
  plVar7[0x13] = 0;
  plVar7[0x10] = 0;
  plVar7[0x11] = 0;
  plVar7[0xe] = 0;
  plVar7[0xf] = 0;
  plVar7[0xc] = 0;
  plVar7[0xd] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x80,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_218 = (undefined **)((ulong)local_218 & 0xffffffff00000000);
      local_1a0 = (undefined **)&DAT_00000080;
      param_3 = (long ****)&local_1a0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_218);
      if (((uVar8 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_710196e0e4;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_710196e0e4:
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_7105181b40;
  puVar9[1] = puVar9 + 2;
  puVar9[5] = 0;
  puVar9[3] = 0;
  puVar9[4] = puVar9 + 5;
  puVar9[8] = 0;
  puVar9[6] = 0;
  puVar9[7] = puVar9 + 8;
  puVar9[0xc] = 0;
  puVar9[0xb] = 0;
  *(undefined4 *)(puVar9 + 0xd) = 2;
  *(undefined4 *)(puVar9 + 0xf) = 0;
  puVar9[0xe] = 0;
  puVar9[9] = 0;
  puVar9[10] = puVar9 + 0xb;
  plVar7[0x1b] = (long)puVar9;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x80,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_218 = (undefined **)((ulong)local_218 & 0xffffffff00000000);
      local_1a0 = (undefined **)&DAT_00000080;
      param_3 = (long ****)&local_1a0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_218);
      if (((uVar8 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_710196e188;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_710196e188:
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_7105181b40;
  puVar9[1] = puVar9 + 2;
  puVar9[5] = 0;
  puVar9[3] = 0;
  puVar9[4] = puVar9 + 5;
  puVar9[8] = 0;
  puVar9[6] = 0;
  puVar9[7] = puVar9 + 8;
  puVar9[0xb] = 0;
  puVar9[0xc] = 0;
  *(undefined4 *)(puVar9 + 0xd) = 2;
  *(undefined4 *)(puVar9 + 0xf) = 0;
  puVar9[0xe] = 0;
  puVar9[9] = 0;
  puVar9[10] = puVar9 + 0xb;
  *(undefined8 *)((long)plVar7 + 0xfe) = 0;
  plVar7[5] = (long)FUN_710196bde0;
  plVar7[6] = 0;
  plVar7[7] = (long)FUN_710196c1b0;
  plVar7[8] = 0;
  plVar7[0xb] = (long)FUN_710196d000;
  plVar7[0xc] = 0;
  plVar7[0x1c] = (long)puVar9;
  plVar7[0x1d] = 0;
  plVar7[0xd] = (long)FUN_710196d980;
  plVar7[0xe] = 0;
  plVar7[0x1e] = 0;
  plVar7[0x1f] = 0;
  plVar7[9] = (long)FUN_710196c450;
  plVar7[10] = 0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  *(undefined8 *)((long)plVar7 + 0xbc) = 0;
  *(undefined8 *)((long)plVar7 + 0xb4) = 0;
  *(undefined8 *)((long)plVar7 + 0xac) = 0;
  *(undefined8 *)((long)plVar7 + 0xa4) = 0;
  *(undefined8 *)((long)plVar7 + 0x9c) = 0;
  *(undefined8 *)((long)plVar7 + 0x94) = 0;
  *(undefined8 *)((long)plVar7 + 0x8c) = 0;
  *(undefined8 *)((long)plVar7 + 0x84) = 0;
  *(undefined8 *)((long)plVar7 + 0x7c) = 0;
  *(undefined8 *)((long)plVar7 + 0xc4) = 0xffffffff00000000;
  *(undefined8 *)((long)plVar7 + 0xcc) = 0xffffffff00000000;
  *(undefined1 *)((long)plVar7 + 0xd4) = 0;
  *(undefined4 *)(plVar7 + 0xf) = 0;
  FUN_710196dd10(plVar7);
  puVar9 = *(undefined8 **)(param_2 + 0xa8);
  uVar20 = extraout_x1;
  if (puVar9 != (undefined8 *)0x0) {
    if (((DAT_7105324ac0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_7105324ac0), iVar6 != 0)) {
      if (((DAT_7105324748 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_7105324748), iVar6 != 0))
      {
        if (((DAT_7105324750 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(&DAT_7105324750), iVar6 != 0)) {
          DAT_7105324758 = 0;
          __cxa_guard_release(&DAT_7105324750);
        }
        DAT_7105324760 = &DAT_7105324758;
        __cxa_guard_release(&DAT_7105324748);
      }
      DAT_7105324ac8 = &DAT_7105324760;
      __cxa_guard_release(&DAT_7105324ac0);
    }
    auVar38 = (**(code **)*puVar9)(puVar9);
    uVar20 = auVar38._8_8_;
    for (puVar10 = auVar38._0_8_; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
      if ((undefined8 **)puVar10 == &DAT_7105324ac8) {
        *(undefined1 *)((long)plVar7 + 0x104) = *(undefined1 *)(puVar9 + 1);
        *(undefined1 *)((long)plVar7 + 0x105) = *(undefined1 *)((long)puVar9 + 9);
        break;
      }
    }
  }
  uVar8 = *(ulong *)(param_1 + 0x58);
  *(long **)(param_1 + 0x58) = plVar7;
  if (uVar8 != 0) {
    FUN_710196dde0(uVar8,uVar20,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_710392eb40(uVar8);
    plVar7 = *(long **)(param_1 + 0x58);
  }
  pppppplVar37 = (long ******)(plVar7 + 0x1c);
  if (*(char *)(*pppppplVar37 + 0xf) == '\0') {
    *(undefined4 *)(*pppppplVar37 + 0xd) = 3;
  }
  ppppppppplVar19 = local_210;
  FUN_71003a4ca0((uint *)&local_218,"edit_stage_wallpaper_%02d",0,param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103239920((uint *)&local_1a0,0x2e,1);
  ppppppppplVar18 = ppppppppplVar19;
  FUN_7103239d20((uint *)&local_1a0,"%s.bntx");
  if (local_1a0._4_4_ == 0) {
    uVar8 = 0;
  }
  else {
    uVar28 = 0xffffffff;
    ppppppplVar13 = &local_198;
    do {
      ppppppplVar30 = (long *******)((long)ppppppplVar13 + 1);
      bVar2 = *(byte *)ppppppplVar13;
      uVar32 = bVar2 + 0x20;
      if (0x19 < bVar2 - 0x41) {
        uVar32 = (uint)bVar2;
      }
      uVar28 = (&DAT_7104754084)[(uVar32 ^ uVar28) & 0xff] ^ uVar28 >> 8;
      ppppppplVar13 = ppppppplVar30;
    } while (ppppppplVar30 < (long *******)((long)&local_198 + (ulong)local_1a0._4_4_));
    uVar8 = (ulong)~uVar28;
  }
  local_1a0 = (undefined **)(uVar8 | ((long)(int)local_1a0._4_4_ & 0xffU) << 0x20);
  if ((long ********)local_1a0 != (long ********)0x0) {
    ppppplVar11 = *pppppplVar37;
    ppppppppplVar18 = (long *********)(long)*(int *)(ppppplVar11 + 0xe);
    param_4 = (byte ****)(ulong)*(uint *)(ppppplVar11 + 0xd);
    FUN_710323c4e0((long)ppppplVar11,&local_1a0,ppppppppplVar18,param_4,param_5,param_6,param_7,
                   param_8);
  }
  FUN_71003a4ca0((uint *)&local_218,"edit_stage_wallpaper_%02d",1,ppppppppplVar18,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103239920((uint *)&local_1a0,0x2e,1);
  ppppppppplVar18 = ppppppppplVar19;
  FUN_7103239d20((uint *)&local_1a0,"%s.bntx");
  if (local_1a0._4_4_ == 0) {
    uVar8 = 0;
  }
  else {
    uVar28 = 0xffffffff;
    ppppppplVar13 = &local_198;
    do {
      ppppppplVar30 = (long *******)((long)ppppppplVar13 + 1);
      bVar2 = *(byte *)ppppppplVar13;
      uVar32 = bVar2 + 0x20;
      if (0x19 < bVar2 - 0x41) {
        uVar32 = (uint)bVar2;
      }
      uVar28 = (&DAT_7104754084)[(uVar32 ^ uVar28) & 0xff] ^ uVar28 >> 8;
      ppppppplVar13 = ppppppplVar30;
    } while (ppppppplVar30 < (long *******)((long)&local_198 + (ulong)local_1a0._4_4_));
    uVar8 = (ulong)~uVar28;
  }
  local_1a0 = (undefined **)(uVar8 | ((long)(int)local_1a0._4_4_ & 0xffU) << 0x20);
  if ((long ********)local_1a0 != (long ********)0x0) {
    ppppplVar11 = *pppppplVar37;
    ppppppppplVar18 = (long *********)(long)*(int *)(ppppplVar11 + 0xe);
    param_4 = (byte ****)(ulong)*(uint *)(ppppplVar11 + 0xd);
    FUN_710323c4e0((long)ppppplVar11,&local_1a0,ppppppppplVar18,param_4,param_5,param_6,param_7,
                   param_8);
  }
  FUN_71003a4ca0((uint *)&local_218,"edit_stage_wallpaper_%02d",2,ppppppppplVar18,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103239920((uint *)&local_1a0,0x2e,1);
  ppppppppplVar18 = ppppppppplVar19;
  FUN_7103239d20((uint *)&local_1a0,"%s.bntx");
  if (local_1a0._4_4_ == 0) {
    uVar8 = 0;
  }
  else {
    uVar28 = 0xffffffff;
    ppppppplVar13 = &local_198;
    do {
      ppppppplVar30 = (long *******)((long)ppppppplVar13 + 1);
      bVar2 = *(byte *)ppppppplVar13;
      uVar32 = bVar2 + 0x20;
      if (0x19 < bVar2 - 0x41) {
        uVar32 = (uint)bVar2;
      }
      uVar28 = (&DAT_7104754084)[(uVar32 ^ uVar28) & 0xff] ^ uVar28 >> 8;
      ppppppplVar13 = ppppppplVar30;
    } while (ppppppplVar30 < (long *******)((long)&local_198 + (ulong)local_1a0._4_4_));
    uVar8 = (ulong)~uVar28;
  }
  local_1a0 = (undefined **)(uVar8 | ((long)(int)local_1a0._4_4_ & 0xffU) << 0x20);
  if ((long ********)local_1a0 != (long ********)0x0) {
    ppppplVar11 = *pppppplVar37;
    ppppppppplVar18 = (long *********)(long)*(int *)(ppppplVar11 + 0xe);
    param_4 = (byte ****)(ulong)*(uint *)(ppppplVar11 + 0xd);
    FUN_710323c4e0((long)ppppplVar11,&local_1a0,ppppppppplVar18,param_4,param_5,param_6,param_7,
                   param_8);
  }
  FUN_71003a4ca0((uint *)&local_218,"edit_stage_wallpaper_%02d",3,ppppppppplVar18,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103239920((uint *)&local_1a0,0x2e,1);
  ppppppppplVar18 = ppppppppplVar19;
  FUN_7103239d20((uint *)&local_1a0,"%s.bntx");
  if (local_1a0._4_4_ == 0) {
    uVar8 = 0;
  }
  else {
    uVar28 = 0xffffffff;
    ppppppplVar13 = &local_198;
    do {
      ppppppplVar30 = (long *******)((long)ppppppplVar13 + 1);
      bVar2 = *(byte *)ppppppplVar13;
      uVar32 = bVar2 + 0x20;
      if (0x19 < bVar2 - 0x41) {
        uVar32 = (uint)bVar2;
      }
      uVar28 = (&DAT_7104754084)[(uVar32 ^ uVar28) & 0xff] ^ uVar28 >> 8;
      ppppppplVar13 = ppppppplVar30;
    } while (ppppppplVar30 < (long *******)((long)&local_198 + (ulong)local_1a0._4_4_));
    uVar8 = (ulong)~uVar28;
  }
  local_1a0 = (undefined **)(uVar8 | ((long)(int)local_1a0._4_4_ & 0xffU) << 0x20);
  if ((long ********)local_1a0 != (long ********)0x0) {
    ppppplVar11 = *pppppplVar37;
    ppppppppplVar18 = (long *********)(long)*(int *)(ppppplVar11 + 0xe);
    param_4 = (byte ****)(ulong)*(uint *)(ppppplVar11 + 0xd);
    FUN_710323c4e0((long)ppppplVar11,&local_1a0,ppppppppplVar18,param_4,param_5,param_6,param_7,
                   param_8);
  }
  FUN_71003a4ca0((uint *)&local_218,"edit_stage_wallpaper_%02d",4,ppppppppplVar18,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103239920((uint *)&local_1a0,0x2e,1);
  ppppppppplVar18 = ppppppppplVar19;
  FUN_7103239d20((uint *)&local_1a0,"%s.bntx");
  if (local_1a0._4_4_ == 0) {
    uVar8 = 0;
  }
  else {
    uVar28 = 0xffffffff;
    ppppppplVar13 = &local_198;
    do {
      ppppppplVar30 = (long *******)((long)ppppppplVar13 + 1);
      bVar2 = *(byte *)ppppppplVar13;
      uVar32 = bVar2 + 0x20;
      if (0x19 < bVar2 - 0x41) {
        uVar32 = (uint)bVar2;
      }
      uVar28 = (&DAT_7104754084)[(uVar32 ^ uVar28) & 0xff] ^ uVar28 >> 8;
      ppppppplVar13 = ppppppplVar30;
    } while (ppppppplVar30 < (long *******)((long)&local_198 + (ulong)local_1a0._4_4_));
    uVar8 = (ulong)~uVar28;
  }
  local_1a0 = (undefined **)(uVar8 | ((long)(int)local_1a0._4_4_ & 0xffU) << 0x20);
  if ((long ********)local_1a0 != (long ********)0x0) {
    ppppplVar11 = *pppppplVar37;
    ppppppppplVar18 = (long *********)(long)*(int *)(ppppplVar11 + 0xe);
    param_4 = (byte ****)(ulong)*(uint *)(ppppplVar11 + 0xd);
    FUN_710323c4e0((long)ppppplVar11,&local_1a0,ppppppppplVar18,param_4,param_5,param_6,param_7,
                   param_8);
  }
  FUN_71003a4ca0((uint *)&local_218,"edit_stage_wallpaper_%02d",5,ppppppppplVar18,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103239920((uint *)&local_1a0,0x2e,1);
  ppppppppplVar18 = ppppppppplVar19;
  FUN_7103239d20((uint *)&local_1a0,"%s.bntx");
  if (local_1a0._4_4_ == 0) {
    uVar8 = 0;
  }
  else {
    uVar28 = 0xffffffff;
    ppppppplVar13 = &local_198;
    do {
      ppppppplVar30 = (long *******)((long)ppppppplVar13 + 1);
      bVar2 = *(byte *)ppppppplVar13;
      uVar32 = bVar2 + 0x20;
      if (0x19 < bVar2 - 0x41) {
        uVar32 = (uint)bVar2;
      }
      uVar28 = (&DAT_7104754084)[(uVar32 ^ uVar28) & 0xff] ^ uVar28 >> 8;
      ppppppplVar13 = ppppppplVar30;
    } while (ppppppplVar30 < (long *******)((long)&local_198 + (ulong)local_1a0._4_4_));
    uVar8 = (ulong)~uVar28;
  }
  local_1a0 = (undefined **)(uVar8 | ((long)(int)local_1a0._4_4_ & 0xffU) << 0x20);
  if ((long ********)local_1a0 != (long ********)0x0) {
    ppppplVar11 = *pppppplVar37;
    ppppppppplVar18 = (long *********)(long)*(int *)(ppppplVar11 + 0xe);
    param_4 = (byte ****)(ulong)*(uint *)(ppppplVar11 + 0xd);
    FUN_710323c4e0((long)ppppplVar11,&local_1a0,ppppppppplVar18,param_4,param_5,param_6,param_7,
                   param_8);
  }
  FUN_71003a4ca0((uint *)&local_218,"edit_stage_wallpaper_%02d",6,ppppppppplVar18,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103239920((uint *)&local_1a0,0x2e,1);
  ppppppppplVar18 = ppppppppplVar19;
  FUN_7103239d20((uint *)&local_1a0,"%s.bntx");
  if (local_1a0._4_4_ == 0) {
    uVar8 = 0;
  }
  else {
    uVar28 = 0xffffffff;
    ppppppplVar13 = &local_198;
    do {
      ppppppplVar30 = (long *******)((long)ppppppplVar13 + 1);
      bVar2 = *(byte *)ppppppplVar13;
      uVar32 = bVar2 + 0x20;
      if (0x19 < bVar2 - 0x41) {
        uVar32 = (uint)bVar2;
      }
      uVar28 = (&DAT_7104754084)[(uVar32 ^ uVar28) & 0xff] ^ uVar28 >> 8;
      ppppppplVar13 = ppppppplVar30;
    } while (ppppppplVar30 < (long *******)((long)&local_198 + (ulong)local_1a0._4_4_));
    uVar8 = (ulong)~uVar28;
  }
  local_1a0 = (undefined **)(uVar8 | ((long)(int)local_1a0._4_4_ & 0xffU) << 0x20);
  if ((long ********)local_1a0 != (long ********)0x0) {
    ppppplVar11 = *pppppplVar37;
    ppppppppplVar18 = (long *********)(long)*(int *)(ppppplVar11 + 0xe);
    param_4 = (byte ****)(ulong)*(uint *)(ppppplVar11 + 0xd);
    FUN_710323c4e0((long)ppppplVar11,&local_1a0,ppppppppplVar18,param_4,param_5,param_6,param_7,
                   param_8);
  }
  FUN_71003a4ca0((uint *)&local_218,"edit_stage_wallpaper_%02d",7,ppppppppplVar18,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103239920((uint *)&local_1a0,0x2e,1);
  ppppppppplVar18 = ppppppppplVar19;
  FUN_7103239d20((uint *)&local_1a0,"%s.bntx");
  if (local_1a0._4_4_ == 0) {
    uVar8 = 0;
  }
  else {
    uVar28 = 0xffffffff;
    ppppppplVar13 = &local_198;
    do {
      ppppppplVar30 = (long *******)((long)ppppppplVar13 + 1);
      bVar2 = *(byte *)ppppppplVar13;
      uVar32 = bVar2 + 0x20;
      if (0x19 < bVar2 - 0x41) {
        uVar32 = (uint)bVar2;
      }
      uVar28 = (&DAT_7104754084)[(uVar32 ^ uVar28) & 0xff] ^ uVar28 >> 8;
      ppppppplVar13 = ppppppplVar30;
    } while (ppppppplVar30 < (long *******)((long)&local_198 + (ulong)local_1a0._4_4_));
    uVar8 = (ulong)~uVar28;
  }
  local_1a0 = (undefined **)(uVar8 | ((long)(int)local_1a0._4_4_ & 0xffU) << 0x20);
  if ((long ********)local_1a0 != (long ********)0x0) {
    ppppplVar11 = *pppppplVar37;
    ppppppppplVar18 = (long *********)(long)*(int *)(ppppplVar11 + 0xe);
    param_4 = (byte ****)(ulong)*(uint *)(ppppplVar11 + 0xd);
    FUN_710323c4e0((long)ppppplVar11,&local_1a0,ppppppppplVar18,param_4,param_5,param_6,param_7,
                   param_8);
  }
  FUN_71003a4ca0((uint *)&local_218,"edit_stage_wallpaper_%02d",8,ppppppppplVar18,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103239920((uint *)&local_1a0,0x2e,1);
  ppppppppplVar18 = ppppppppplVar19;
  FUN_7103239d20((uint *)&local_1a0,"%s.bntx");
  if (local_1a0._4_4_ == 0) {
    uVar8 = 0;
  }
  else {
    uVar28 = 0xffffffff;
    ppppppplVar13 = &local_198;
    do {
      ppppppplVar30 = (long *******)((long)ppppppplVar13 + 1);
      bVar2 = *(byte *)ppppppplVar13;
      uVar32 = bVar2 + 0x20;
      if (0x19 < bVar2 - 0x41) {
        uVar32 = (uint)bVar2;
      }
      uVar28 = (&DAT_7104754084)[(uVar32 ^ uVar28) & 0xff] ^ uVar28 >> 8;
      ppppppplVar13 = ppppppplVar30;
    } while (ppppppplVar30 < (long *******)((long)&local_198 + (ulong)local_1a0._4_4_));
    uVar8 = (ulong)~uVar28;
  }
  local_1a0 = (undefined **)(uVar8 | ((long)(int)local_1a0._4_4_ & 0xffU) << 0x20);
  if ((long ********)local_1a0 != (long ********)0x0) {
    ppppplVar11 = *pppppplVar37;
    ppppppppplVar18 = (long *********)(long)*(int *)(ppppplVar11 + 0xe);
    param_4 = (byte ****)(ulong)*(uint *)(ppppplVar11 + 0xd);
    FUN_710323c4e0((long)ppppplVar11,&local_1a0,ppppppppplVar18,param_4,param_5,param_6,param_7,
                   param_8);
  }
  FUN_71003a4ca0((uint *)&local_218,"edit_stage_wallpaper_%02d",9,ppppppppplVar18,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103239920((uint *)&local_1a0,0x2e,1);
  ppppppppplVar18 = ppppppppplVar19;
  FUN_7103239d20((uint *)&local_1a0,"%s.bntx");
  if (local_1a0._4_4_ == 0) {
    uVar8 = 0;
  }
  else {
    uVar28 = 0xffffffff;
    ppppppplVar13 = &local_198;
    do {
      ppppppplVar30 = (long *******)((long)ppppppplVar13 + 1);
      bVar2 = *(byte *)ppppppplVar13;
      uVar32 = bVar2 + 0x20;
      if (0x19 < bVar2 - 0x41) {
        uVar32 = (uint)bVar2;
      }
      uVar28 = (&DAT_7104754084)[(uVar32 ^ uVar28) & 0xff] ^ uVar28 >> 8;
      ppppppplVar13 = ppppppplVar30;
    } while (ppppppplVar30 < (long *******)((long)&local_198 + (ulong)local_1a0._4_4_));
    uVar8 = (ulong)~uVar28;
  }
  local_1a0 = (undefined **)(uVar8 | ((long)(int)local_1a0._4_4_ & 0xffU) << 0x20);
  if ((long ********)local_1a0 != (long ********)0x0) {
    ppppplVar11 = *pppppplVar37;
    ppppppppplVar18 = (long *********)(long)*(int *)(ppppplVar11 + 0xe);
    param_4 = (byte ****)(ulong)*(uint *)(ppppplVar11 + 0xd);
    FUN_710323c4e0((long)ppppplVar11,&local_1a0,ppppppppplVar18,param_4,param_5,param_6,param_7,
                   param_8);
  }
  FUN_71003a4ca0((uint *)&local_218,"edit_stage_wallpaper_%02d",10,ppppppppplVar18,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103239920((uint *)&local_1a0,0x2e,1);
  FUN_7103239d20((uint *)&local_1a0,"%s.bntx");
  if (local_1a0._4_4_ == 0) {
    uVar8 = 0;
  }
  else {
    uVar28 = 0xffffffff;
    ppppppplVar13 = &local_198;
    do {
      ppppppplVar30 = (long *******)((long)ppppppplVar13 + 1);
      bVar2 = *(byte *)ppppppplVar13;
      uVar32 = bVar2 + 0x20;
      if (0x19 < bVar2 - 0x41) {
        uVar32 = (uint)bVar2;
      }
      uVar28 = (&DAT_7104754084)[(uVar32 ^ uVar28) & 0xff] ^ uVar28 >> 8;
      ppppppplVar13 = ppppppplVar30;
    } while (ppppppplVar30 < (long *******)((long)&local_198 + (ulong)local_1a0._4_4_));
    uVar8 = (ulong)~uVar28;
  }
  local_1a0 = (undefined **)(uVar8 | ((long)(int)local_1a0._4_4_ & 0xffU) << 0x20);
  if ((long ********)local_1a0 != (long ********)0x0) {
    ppppplVar11 = *pppppplVar37;
    ppppppppplVar19 = (long *********)(long)*(int *)(ppppplVar11 + 0xe);
    param_4 = (byte ****)(ulong)*(uint *)(ppppplVar11 + 0xd);
    FUN_710323c4e0((long)ppppplVar11,&local_1a0,ppppppppplVar19,param_4,param_5,param_6,param_7,
                   param_8);
  }
  FUN_71003a4ca0((uint *)&local_218,"edit_stage_wallpaper_%02d",0xb,ppppppppplVar19,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103239920((uint *)&local_1a0,0x2e,1);
  FUN_7103239d20((uint *)&local_1a0,"%s.bntx");
  if (local_1a0._4_4_ == 0) {
    uVar8 = 0;
  }
  else {
    uVar28 = 0xffffffff;
    ppppppplVar13 = &local_198;
    do {
      ppppppplVar30 = (long *******)((long)ppppppplVar13 + 1);
      bVar2 = *(byte *)ppppppplVar13;
      uVar32 = bVar2 + 0x20;
      if (0x19 < bVar2 - 0x41) {
        uVar32 = (uint)bVar2;
      }
      uVar28 = (&DAT_7104754084)[(uVar32 ^ uVar28) & 0xff] ^ uVar28 >> 8;
      ppppppplVar13 = ppppppplVar30;
    } while (ppppppplVar30 < (long *******)((long)&local_198 + (ulong)local_1a0._4_4_));
    uVar8 = (ulong)~uVar28;
  }
  local_1a0 = (undefined **)(uVar8 | ((long)(int)local_1a0._4_4_ & 0xffU) << 0x20);
  if ((long ********)local_1a0 != (long ********)0x0) {
    ppppplVar11 = *pppppplVar37;
    FUN_710323c4e0((long)ppppplVar11,&local_1a0,(long *********)(long)*(int *)(ppppplVar11 + 0xe),
                   (byte ****)(ulong)*(uint *)(ppppplVar11 + 0xd),param_5,param_6,param_7,param_8);
  }
  local_1a0 = (undefined **)0x3e25e799b6;
  plVar33 = plVar7 + 0x1b;
  lVar12 = *plVar33;
  FUN_710323beb0(lVar12,&local_1a0,(long)*(int *)(lVar12 + 0x70),(ulong)*(uint *)(lVar12 + 0x68),
                 (long ****)0x0,param_6,param_7,param_8);
  local_1a0 = (undefined **)0x393915b6e6;
  lVar12 = *plVar33;
  FUN_710323beb0(lVar12,&local_1a0,(long)*(int *)(lVar12 + 0x70),(ulong)*(uint *)(lVar12 + 0x68),
                 (long ****)0x0,param_6,param_7,param_8);
  local_218 = (undefined **)0x355f0f91bf;
  lVar12 = *plVar33;
  local_1a0 = (undefined **)0x1dd5d06117;
  FUN_710323beb0(lVar12,&local_1a0,(long)*(int *)(lVar12 + 0x70),(ulong)*(uint *)(lVar12 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar12 = *plVar33;
  local_1a0 = (undefined **)0x22f525ad60;
  FUN_710323beb0(lVar12,&local_1a0,(long)*(int *)(lVar12 + 0x70),(ulong)*(uint *)(lVar12 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar12 = *plVar33;
  FUN_710323beb0(lVar12,&local_218,(long)*(int *)(lVar12 + 0x70),(ulong)*(uint *)(lVar12 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  local_218 = (undefined **)0x1dd5d06117;
  lVar12 = *plVar33;
  local_1a0 = (undefined **)0x1dd5d06117;
  FUN_710323beb0(lVar12,&local_1a0,(long)*(int *)(lVar12 + 0x70),(ulong)*(uint *)(lVar12 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar12 = *plVar33;
  local_1a0 = (undefined **)0x22f525ad60;
  FUN_710323beb0(lVar12,&local_1a0,(long)*(int *)(lVar12 + 0x70),(ulong)*(uint *)(lVar12 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar12 = *plVar33;
  FUN_710323beb0(lVar12,&local_218,(long)*(int *)(lVar12 + 0x70),(ulong)*(uint *)(lVar12 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar12 = *plVar33;
  FUN_710323beb0(lVar12,(ulong *)&DAT_7104545cb0,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  local_218 = (undefined **)0x343a86ea32;
  lVar12 = *plVar33;
  local_1a0 = (undefined **)0x1dd5d06117;
  FUN_710323beb0(lVar12,&local_1a0,(long)*(int *)(lVar12 + 0x70),(ulong)*(uint *)(lVar12 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar12 = *plVar33;
  local_1a0 = (undefined **)0x22f525ad60;
  FUN_710323beb0(lVar12,&local_1a0,(long)*(int *)(lVar12 + 0x70),(ulong)*(uint *)(lVar12 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar12 = *plVar33;
  FUN_710323beb0(lVar12,&local_218,(long)*(int *)(lVar12 + 0x70),(ulong)*(uint *)(lVar12 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  local_218 = (undefined **)0x1dd5d06117;
  lVar12 = *plVar33;
  local_1a0 = (undefined **)0x1dd5d06117;
  FUN_710323beb0(lVar12,&local_1a0,(long)*(int *)(lVar12 + 0x70),(ulong)*(uint *)(lVar12 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar12 = *plVar33;
  local_1a0 = (undefined **)0x22f525ad60;
  FUN_710323beb0(lVar12,&local_1a0,(long)*(int *)(lVar12 + 0x70),(ulong)*(uint *)(lVar12 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar12 = *plVar33;
  FUN_710323beb0(lVar12,&local_218,(long)*(int *)(lVar12 + 0x70),(ulong)*(uint *)(lVar12 + 0x68),
                 (long ****)0x1,param_6,param_7,param_8);
  lVar12 = *plVar33;
  ppppppppplVar19 = (long *********)(long)*(int *)(lVar12 + 0x70);
  ppppbVar22 = (byte ****)(ulong)*(uint *)(lVar12 + 0x68);
  pppplVar23 = (long ****)0x0;
  FUN_710323beb0(lVar12,(ulong *)&DAT_7104545cb8,(long)ppppppppplVar19,(ulong)ppppbVar22,
                 (long ****)0x0,param_6,param_7,param_8);
  lVar12 = *plVar33;
  uVar8 = FUN_710323cb80(lVar12,extraout_x1_00,ppppppppplVar19,ppppbVar22,pppplVar23,param_6,param_7
                         ,param_8);
  while ((uVar8 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar8 = FUN_710323cb80(lVar12,extraout_x1_01,ppppppppplVar19,ppppbVar22,pppplVar23,param_6,
                           param_7,param_8);
  }
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,param_6,param_7
                          ,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_218 = (undefined **)((ulong)local_218 & 0xffffffff00000000);
      local_1a0 = (undefined **)&DAT_00000088;
      ppppppppplVar19 = (long *********)&local_1a0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_218);
      if (((uVar8 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,param_6
                                  ,param_7,param_8), puVar9 != (undefined8 *)0x0))
      goto LAB_710196edf0;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_710196edf0:
  FUN_7101eacc60(puVar9,plVar33,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,param_6,param_7,
                 param_8);
  puVar9[2] = &DAT_7105333600;
  *(undefined4 *)(puVar9 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar9 + 0x6c) = DAT_7105333664;
  do {
    uVar28 = DAT_7105333650;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar4) {
      DAT_7105333650 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0' || (uVar28 & 1) != 0);
  puVar9[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar9;
  FUN_71032caea0((long)puVar9,extraout_x1_02,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,
                 param_6,param_7,param_8);
  lVar12 = plVar7[0x1d];
  plVar7[0x1d] = (long)puVar9;
  if (lVar12 != 0) {
    FUN_71032cad20(lVar12);
  }
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,param_6,param_7
                          ,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_218 = (undefined **)((ulong)local_218 & 0xffffffff00000000);
      local_1a0 = (undefined **)&DAT_00000088;
      ppppppppplVar19 = (long *********)&local_1a0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_218);
      if (((uVar8 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,param_6
                                  ,param_7,param_8), puVar9 != (undefined8 *)0x0))
      goto LAB_710196eec8;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_710196eec8:
  *puVar9 = &PTR_FUN_71050b2d20;
  puVar9[1] = 0;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0x1ffffffff;
  puVar9[2] = 0;
  puVar9[3] = 0;
  *(undefined1 *)(puVar9 + 0xb) = 0;
  puVar9[0xf] = plVar33;
  *(undefined1 *)(puVar9 + 0xe) = 1;
  puVar9[9] = 0;
  puVar9[10] = 0;
  ppppppplVar13 =
       (long *******)
       FUN_710392e290(0x10,0x140,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,param_6,param_7,
                      param_8);
  uVar20 = extraout_x1_03;
  if (ppppppplVar13 == (long *******)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_218 = (undefined **)((ulong)local_218 & 0xffffffff00000000);
      local_1a0 = (undefined **)&DAT_00000140;
      ppppppppplVar19 = (long *********)&local_1a0;
      auVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_218);
      uVar20 = auVar38._8_8_;
      if (((auVar38._0_8_ & 1) != 0) &&
         (ppppppplVar13 =
               (long *******)
               FUN_710392e290(0x10,0x140,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,param_6,
                              param_7,param_8), uVar20 = extraout_x1_04,
         ppppppplVar13 != (long *******)0x0)) goto LAB_710196ef54;
    }
    ppppppplVar13 = (long *******)0x0;
  }
LAB_710196ef54:
  *(undefined4 *)(ppppppplVar13 + 1) = 0x1000;
  ppppppplVar30 = ppppppplVar13 + 0x21;
  ppppppplVar13[2] = (long ******)0x0;
  ppppppplVar13[3] = (long ******)0x0;
  ppppppplVar13[4] = (long ******)0x0;
  ppppppplVar13[6] = (long ******)0x0;
  ppppppplVar13[5] = (long ******)(ppppppplVar13 + 6);
  *(undefined8 *)((long)ppppppplVar13 + 0xdc) = 0xffffffff00000000;
  *(undefined8 *)((long)ppppppplVar13 + 0xe4) = 0xffffffff00000000;
  ppppppplVar13[7] = (long ******)0x0;
  ppppppplVar13[8] = (long ******)0x0;
  *ppppppplVar13 = (long ******)&DAT_71050b2c38;
  *(undefined1 *)((long)ppppppplVar13 + 0xec) = 0;
  *(undefined4 *)(ppppppplVar13 + 0x1b) = 0;
  ppppppplVar13[0x1e] = pppppplVar37;
  ppppppplVar13[9] = (long ******)ppppppplVar13;
  ppppppplVar13[10] = (long ******)0x0;
  ppppppplVar13[0xb] = (long ******)0x0;
  ppppppplVar13[0xc] = (long ******)0x0;
  ppppppplVar13[0xd] = (long ******)0x0;
  ppppppplVar13[0xe] = (long ******)0x0;
  ppppppplVar13[0x19] = (long ******)0x0;
  ppppppplVar13[0x1a] = (long ******)0x0;
  ppppppplVar13[0x17] = (long ******)0x0;
  ppppppplVar13[0x18] = (long ******)0x0;
  ppppppplVar13[0x15] = (long ******)0x0;
  ppppppplVar13[0x16] = (long ******)0x0;
  ppppppplVar13[0x13] = (long ******)0x0;
  ppppppplVar13[0x14] = (long ******)0x0;
  ppppppplVar13[0x11] = (long ******)0x0;
  ppppppplVar13[0x12] = (long ******)0x0;
  ppppppplVar13[0xf] = (long ******)0x0;
  ppppppplVar13[0x10] = (long ******)0x0;
  ppppppplVar13[0x1f] = (long ******)0x1;
  ppppppplVar13[0x20] = (long ******)0xd9ffff0000000000;
  FUN_7103776290(ppppppplVar30,uVar20,(long ****)ppppppppplVar19,ppppbVar22,pppplVar23,param_6,
                 param_7,param_8);
  FUN_7103776290(ppppppplVar13 + 0x23,extraout_x1_05,(long ****)ppppppppplVar19,ppppbVar22,
                 pppplVar23,param_6,param_7,param_8);
  FUN_7103776290(ppppppplVar13 + 0x25,extraout_x1_06,(long ****)ppppppppplVar19,ppppbVar22,
                 pppplVar23,param_6,param_7,param_8);
  ppppppplVar13[0xe] = (long ******)FUN_7101eb9a70;
  ppppppplVar13[0xf] = (long ******)0x0;
  *(undefined4 *)(ppppppplVar13 + 0x27) = 0xffffffff;
  *(undefined2 *)((long)ppppppplVar13 + 0x13c) = 0;
  *(undefined4 *)((long)ppppppplVar13 + 0xdc) = 0;
  ppppppplVar13[0x10] = (long ******)FUN_7101eb9a80;
  ppppppplVar13[0x11] = (long ******)0x0;
  *(undefined8 *)((long)ppppppplVar13 + 0xd4) = 0;
  *(undefined8 *)((long)ppppppplVar13 + 0xcc) = 0;
  *(undefined8 *)((long)ppppppplVar13 + 0xc4) = 0;
  *(undefined8 *)((long)ppppppplVar13 + 0xbc) = 0;
  *(undefined8 *)((long)ppppppplVar13 + 0xb4) = 0;
  *(undefined8 *)((long)ppppppplVar13 + 0xac) = 0;
  *(undefined8 *)((long)ppppppplVar13 + 0xa4) = 0;
  *(undefined8 *)((long)ppppppplVar13 + 0x9c) = 0;
  *(undefined8 *)((long)ppppppplVar13 + 0x94) = 0;
  ppppppplVar13[0x1c] = (long ******)&DAT_ffffffff;
  *(undefined4 *)(ppppppplVar13 + 0x1d) = 0xffffffff;
  *(undefined1 *)((long)ppppppplVar13 + 0xec) = 0;
  *(undefined4 *)(ppppppplVar13 + 0x12) = 0;
  ppppppplVar13[10] = (long ******)0x0;
  ppppppplVar13[0xb] = (long ******)0x0;
  FUN_7101eb9cd0((long *)(ppppppplVar13 + 9));
  *(undefined4 *)(ppppppplVar13 + 1) = 0x1001;
  puVar9[0x10] = ppppppplVar13;
  local_218 = (undefined **)0x3c647f731d;
  local_1a0 = (undefined **)&local_218;
  pppplVar23 = (long ****)&local_1a0;
  pppplVar24 = (long ****)0x1;
  ppppbVar22 = (byte ****)0x343a86ea32;
  local_198 = (long ******)0x1;
  FUN_71032cb040((long)ppppppplVar13,plVar33,pppplVar23,(byte ****)0x343a86ea32,(long ****)0x1,
                 param_6,param_7,param_8);
  pppppplVar25 = ppppppplVar13[2];
  if (ppppppplVar13[3] == pppppplVar25) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  FUN_7103776640(&local_1a0,(long)(***pppppplVar25 + 1),(byte ****)"set_btn_02",pppplVar23,
                 ppppbVar22,pppplVar24,param_6,param_7,param_8);
  pppppplVar25 = local_198;
  if ((long *******)&local_1a0 != ppppppplVar30) {
    local_198 = (long ******)0x0;
    pppppplVar34 = ppppppplVar13[0x22];
    ppppppplVar13[0x22] = pppppplVar25;
    if (pppppplVar34 != (long ******)0x0) {
      ppppplVar11 = pppppplVar34[3];
      pppppplVar34[2] = (long *****)&PTR_FUN_710523d9a8;
      pppppplVar34[3] = (long *****)0x0;
      if (ppppplVar11 != (long *****)0x0) {
        FUN_710392eb40((ulong)ppppplVar11);
      }
      FUN_710392eb40((ulong)pppppplVar34);
    }
  }
  pppppplVar25 = local_198;
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = (long ******)0x0;
  if (pppppplVar25 != (long ******)0x0) {
    ppppplVar11 = pppppplVar25[3];
    pppppplVar25[2] = (long *****)&PTR_FUN_710523d9a8;
    pppppplVar25[3] = (long *****)0x0;
    if (ppppplVar11 != (long *****)0x0) {
      FUN_710392eb40((ulong)ppppplVar11);
    }
    FUN_710392eb40((ulong)pppppplVar25);
  }
  FUN_7103776640(&local_1a0,(long)ppppppplVar30,(byte ****)"set_txt_bgm_scr_select",pppplVar23,
                 ppppbVar22,pppplVar24,param_6,param_7,param_8);
  pppppplVar25 = local_198;
  if ((long *******)&local_1a0 != ppppppplVar13 + 0x23) {
    local_198 = (long ******)0x0;
    pppppplVar34 = ppppppplVar13[0x24];
    ppppppplVar13[0x24] = pppppplVar25;
    if (pppppplVar34 != (long ******)0x0) {
      ppppplVar11 = pppppplVar34[3];
      pppppplVar34[2] = (long *****)&PTR_FUN_710523d9a8;
      pppppplVar34[3] = (long *****)0x0;
      if (ppppplVar11 != (long *****)0x0) {
        FUN_710392eb40((ulong)ppppplVar11);
      }
      FUN_710392eb40((ulong)pppppplVar34);
    }
  }
  pppppplVar25 = local_198;
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = (long ******)0x0;
  if (pppppplVar25 != (long ******)0x0) {
    ppppplVar11 = pppppplVar25[3];
    pppppplVar25[2] = (long *****)&PTR_FUN_710523d9a8;
    pppppplVar25[3] = (long *****)0x0;
    if (ppppplVar11 != (long *****)0x0) {
      FUN_710392eb40((ulong)ppppplVar11);
    }
    FUN_710392eb40((ulong)pppppplVar25);
  }
  FUN_7103776640(&local_1a0,(long)ppppppplVar30,(byte ****)"set_txt_bgm_scr_off",pppplVar23,
                 ppppbVar22,pppplVar24,param_6,param_7,param_8);
  pppppplVar25 = local_198;
  if ((long *******)&local_1a0 != ppppppplVar13 + 0x25) {
    local_198 = (long ******)0x0;
    pppppplVar34 = ppppppplVar13[0x26];
    ppppppplVar13[0x26] = pppppplVar25;
    if (pppppplVar34 != (long ******)0x0) {
      ppppplVar11 = pppppplVar34[3];
      pppppplVar34[2] = (long *****)&PTR_FUN_710523d9a8;
      pppppplVar34[3] = (long *****)0x0;
      if (ppppplVar11 != (long *****)0x0) {
        FUN_710392eb40((ulong)ppppplVar11);
      }
      FUN_710392eb40((ulong)pppppplVar34);
    }
  }
  pppppplVar25 = local_198;
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = (long ******)0x0;
  if (pppppplVar25 != (long ******)0x0) {
    ppppplVar11 = pppppplVar25[3];
    pppppplVar25[2] = (long *****)&PTR_FUN_710523d9a8;
    pppppplVar25[3] = (long *****)0x0;
    if (ppppplVar11 != (long *****)0x0) {
      FUN_710392eb40((ulong)ppppplVar11);
    }
    FUN_710392eb40((ulong)pppppplVar25);
  }
  pppppplVar25 = ppppppplVar13[8];
  ppppppplVar30 =
       (long *******)
       FUN_710392e290(0x10,0x38,pppplVar23,ppppbVar22,pppplVar24,param_6,param_7,param_8);
  if (ppppppplVar30 == (long *******)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_218 = (undefined **)((ulong)local_218 & 0xffffffff00000000);
      local_1a0 = (undefined **)&DAT_00000038;
      pppplVar23 = (long ****)&local_1a0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_218);
      if (((uVar8 & 1) != 0) &&
         (ppppppplVar30 =
               (long *******)
               FUN_710392e290(0x10,0x38,pppplVar23,ppppbVar22,pppplVar24,param_6,param_7,param_8),
         ppppppplVar30 != (long *******)0x0)) goto LAB_710196f2b0;
    }
    ppppppplVar30 = (long *******)0x0;
  }
LAB_710196f2b0:
  *ppppppplVar30 = (long ******)&PTR_FUN_71050b2c80;
  ppppppplVar30[2] = (long ******)ppppppplVar13;
  ppppppplVar30[3] = (long ******)0x0;
  ppppppplVar30[6] = (long ******)0x0;
  ppppppplVar30[4] = (long ******)0x0;
  ppppppplVar30[5] = (long ******)FUN_7101eb9da0;
  pppplVar23 = (long ****)&local_218;
  *(undefined4 *)(ppppppplVar30 + 1) = 1;
  local_218 = (undefined **)ppppppplVar30;
  FUN_7103376af0((long)pppppplVar25,(byte *)"is_error_input_device_kind",pppplVar23,ppppbVar22,
                 pppplVar24,param_6,param_7,param_8);
  ppppppplVar30 = (long *******)local_218;
  local_218 = (undefined **)0x0;
  if (ppppppplVar30 != (long *******)0x0) {
    (*(code *)(*ppppppplVar30)[1])();
  }
  pppppplVar25 = ppppppplVar13[8];
  ppplVar14 = (long ***)
              FUN_710392e290(0x10,0x28,pppplVar23,ppppbVar22,pppplVar24,param_6,param_7,param_8);
  if (ppplVar14 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1b0 = (long ***)((ulong)local_1b0._4_4_ << 0x20);
      local_1a0 = (undefined **)&DAT_00000028;
      pppplVar23 = (long ****)&local_1a0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
      if (((uVar8 & 1) != 0) &&
         (ppplVar14 = (long ***)
                      FUN_710392e290(0x10,0x28,pppplVar23,ppppbVar22,pppplVar24,param_6,param_7,
                                     param_8), ppplVar14 != (long ***)0x0)) goto LAB_710196f360;
    }
    ppplVar14 = (long ***)0x0;
  }
LAB_710196f360:
  *ppplVar14 = (long **)&PTR_FUN_71050b2ca8;
  ppplVar14[4] = (long **)0x0;
  ppplVar14[2] = (long **)ppppppplVar13;
  ppplVar14[3] = (long **)FUN_7101eb9e60;
  *(undefined4 *)(ppplVar14 + 1) = 0;
  pppplVar23 = (long ****)&local_1b0;
  local_1b0 = ppplVar14;
  FUN_7103376af0((long)pppppplVar25,(byte *)"show_com_frame_actor",pppplVar23,ppppbVar22,pppplVar24,
                 param_6,param_7,param_8);
  ppplVar14 = local_1b0;
  local_1b0 = (long ***)0x0;
  if (ppplVar14 != (long ***)0x0) {
    (*(code *)(*ppplVar14)[1])();
  }
  pppppplVar25 = ppppppplVar13[8];
  ppplVar14 = (long ***)
              FUN_710392e290(0x10,0x28,pppplVar23,ppppbVar22,pppplVar24,param_6,param_7,param_8);
  if (ppplVar14 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1b8 = (long ***)((ulong)local_1b8._4_4_ << 0x20);
      local_1a0 = (undefined **)&DAT_00000028;
      pppplVar23 = (long ****)&local_1a0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b8);
      if (((uVar8 & 1) != 0) &&
         (ppplVar14 = (long ***)
                      FUN_710392e290(0x10,0x28,pppplVar23,ppppbVar22,pppplVar24,param_6,param_7,
                                     param_8), ppplVar14 != (long ***)0x0)) goto LAB_710196f408;
    }
    ppplVar14 = (long ***)0x0;
  }
LAB_710196f408:
  *ppplVar14 = (long **)&PTR_FUN_71050b2cd0;
  ppplVar14[4] = (long **)0x0;
  ppplVar14[2] = (long **)ppppppplVar13;
  ppplVar14[3] = (long **)FUN_7101eba3b0;
  *(undefined4 *)(ppplVar14 + 1) = 0;
  pppplVar23 = (long ****)&local_1b8;
  local_1b8 = ppplVar14;
  FUN_7103376af0((long)pppppplVar25,(byte *)"set_space",pppplVar23,ppppbVar22,pppplVar24,param_6,
                 param_7,param_8);
  ppplVar14 = local_1b8;
  local_1b8 = (long ***)0x0;
  if (ppplVar14 != (long ***)0x0) {
    (*(code *)(*ppplVar14)[1])();
  }
  pppppplVar25 = ppppppplVar13[8];
  ppplVar14 = (long ***)
              FUN_710392e290(0x10,0x28,pppplVar23,ppppbVar22,pppplVar24,param_6,param_7,param_8);
  if (ppplVar14 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1c0 = (long ***)((ulong)local_1c0._4_4_ << 0x20);
      local_1a0 = (undefined **)&DAT_00000028;
      pppplVar23 = (long ****)&local_1a0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c0);
      if (((uVar8 & 1) != 0) &&
         (ppplVar14 = (long ***)
                      FUN_710392e290(0x10,0x28,pppplVar23,ppppbVar22,pppplVar24,param_6,param_7,
                                     param_8), ppplVar14 != (long ***)0x0)) goto LAB_710196f4b0;
    }
    ppplVar14 = (long ***)0x0;
  }
LAB_710196f4b0:
  *ppplVar14 = (long **)&PTR_FUN_71050b2cd0;
  ppplVar14[2] = (long **)ppppppplVar13;
  ppplVar14[3] = (long **)FUN_7101eba3c0;
  ppplVar14[4] = (long **)0x0;
  pppplVar23 = (long ****)&local_1c0;
  *(undefined4 *)(ppplVar14 + 1) = 0;
  local_1c0 = ppplVar14;
  FUN_7103376af0((long)pppppplVar25,(byte *)"set_bg",pppplVar23,ppppbVar22,pppplVar24,param_6,
                 param_7,param_8);
  ppplVar14 = local_1c0;
  local_1c0 = (long ***)0x0;
  if (ppplVar14 != (long ***)0x0) {
    (*(code *)(*ppplVar14)[1])();
  }
  pppppplVar25 = ppppppplVar13[8];
  ppplVar14 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar23,ppppbVar22,pppplVar24,param_6,param_7,param_8);
  if (ppplVar14 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1c8 = (long ***)((ulong)local_1c8._4_4_ << 0x20);
      local_1a0 = (undefined **)&DAT_00000038;
      pppplVar23 = (long ****)&local_1a0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c8);
      if (((uVar8 & 1) != 0) &&
         (ppplVar14 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar23,ppppbVar22,pppplVar24,param_6,param_7,
                                     param_8), ppplVar14 != (long ***)0x0)) goto LAB_710196f550;
    }
    ppplVar14 = (long ***)0x0;
  }
LAB_710196f550:
  ppplVar14[4] = (long **)0x0;
  ppplVar14[5] = (long **)FUN_7101eba4c0;
  ppplVar14[2] = (long **)ppppppplVar13;
  ppplVar14[3] = (long **)0x0;
  *ppplVar14 = (long **)&PTR_FUN_71050b2cf8;
  ppplVar14[6] = (long **)0x0;
  pppplVar23 = (long ****)&local_1c8;
  *(undefined4 *)(ppplVar14 + 1) = 1;
  local_1c8 = ppplVar14;
  FUN_7103376af0((long)pppppplVar25,(byte *)"get_space",pppplVar23,ppppbVar22,pppplVar24,param_6,
                 param_7,param_8);
  ppplVar14 = local_1c8;
  local_1c8 = (long ***)0x0;
  if (ppplVar14 != (long ***)0x0) {
    (*(code *)(*ppplVar14)[1])();
  }
  pppppplVar25 = ppppppplVar13[8];
  ppplVar14 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar23,ppppbVar22,pppplVar24,param_6,param_7,param_8);
  if (ppplVar14 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1d0 = (long ***)((ulong)local_1d0._4_4_ << 0x20);
      local_1a0 = (undefined **)&DAT_00000038;
      pppplVar23 = (long ****)&local_1a0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d0);
      if (((uVar8 & 1) != 0) &&
         (ppplVar14 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar23,ppppbVar22,pppplVar24,param_6,param_7,
                                     param_8), ppplVar14 != (long ***)0x0)) goto LAB_710196f600;
    }
    ppplVar14 = (long ***)0x0;
  }
LAB_710196f600:
  *ppplVar14 = (long **)&PTR_FUN_71050b2cf8;
  ppplVar14[4] = (long **)0x0;
  ppplVar14[5] = (long **)FUN_7101eba4d0;
  ppplVar14[2] = (long **)ppppppplVar13;
  ppplVar14[3] = (long **)0x0;
  pppplVar23 = (long ****)&local_1d0;
  ppplVar14[6] = (long **)0x0;
  *(undefined4 *)(ppplVar14 + 1) = 1;
  local_1d0 = ppplVar14;
  FUN_7103376af0((long)pppppplVar25,(byte *)"get_bg",pppplVar23,ppppbVar22,pppplVar24,param_6,
                 param_7,param_8);
  ppplVar14 = local_1d0;
  local_1d0 = (long ***)0x0;
  if (ppplVar14 != (long ***)0x0) {
    (*(code *)(*ppplVar14)[1])();
  }
  pppppplVar25 = ppppppplVar13[8];
  local_1a0 = (undefined **)
              FUN_710392e290(0x10,0x28,pppplVar23,ppppbVar22,pppplVar24,param_6,param_7,param_8);
  if ((long ********)local_1a0 == (long ********)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1a4 = 0;
      local_1a0 = (undefined **)&DAT_00000028;
      pppplVar23 = (long ****)&local_1a0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1a4);
      if (((uVar8 & 1) != 0) &&
         (local_1a0 = (undefined **)
                      FUN_710392e290(0x10,0x28,pppplVar23,ppppbVar22,pppplVar24,param_6,param_7,
                                     param_8), (long ********)local_1a0 != (long ********)0x0))
      goto LAB_710196f6a8;
    }
    local_1a0 = (undefined **)0x0;
  }
LAB_710196f6a8:
  *local_1a0 = (undefined *)&PTR_FUN_71050b2ca8;
  local_1a0[2] = (undefined *)ppppppplVar13;
  local_1a0[3] = FUN_7101eba4e0;
  local_1a0[4] = (undefined *)0x0;
  *(undefined4 *)(local_1a0 + 1) = 0;
  FUN_7103376af0((long)pppppplVar25,(byte *)"select_bgm_button",(long ****)&local_1a0,ppppbVar22,
                 pppplVar24,param_6,param_7,param_8);
  pppppppplVar5 = (long ********)local_1a0;
  local_1a0 = (undefined **)0x0;
  if (pppppppplVar5 != (long ********)0x0) {
    (*(code *)(*pppppppplVar5)[1])();
  }
  pcVar21 = &DAT_71042b2a84;
  ppppbVar22 = (byte ****)&DAT_0000000c;
  FUN_7103375650((long *)*ppppppplVar13[8],"NUM_BG",&DAT_71042b2a84);
  pppppplVar25 = ppppppplVar13[8];
  ppppplVar11 = *pppppplVar25;
  pppplVar35 = *ppppplVar11;
  *(undefined4 *)(ppppplVar11 + 2) = 0;
  ppplVar14 = pppplVar35[2];
  *ppplVar14 = (long **)pppplVar35;
  *(undefined4 *)(ppplVar14 + 1) = 0x48;
  ppplVar14 = pppplVar35[2];
  pppplVar35[2] = ppplVar14 + 2;
  pppplVar23 = (long ****)pppplVar35[3][0x19];
  pppplVar35[2] = ppplVar14;
  if (pppplVar23 == pppplVar35) {
    pplVar26 = pppplVar35[3][8];
    if (*(uint *)((long)pplVar26 + 0xc) < 2) {
      plVar16 = pplVar26[3] +
                ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)((long)pplVar26 + 0xb) & 0x3f)) & 2)
                * 4;
      do {
        if (((int)plVar16[3] == 0x13) && (plVar17 = plVar16, plVar16[2] == 2)) break;
        piVar1 = (int *)((long)plVar16 + 0x1c);
        plVar16 = plVar16 + (long)*piVar1 * 4;
        plVar17 = &DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      plVar17 = pplVar26[2] + 2;
    }
    pcVar21 = "initialize";
    FUN_71038f4d40((long)pppplVar35,plVar17,"initialize");
    uVar20 = extraout_x1_08;
  }
  else {
    FUN_71038f4b20((long)pppplVar35,"initialize");
    FUN_71038f4fc0((long)pppplVar35,-2);
    uVar20 = extraout_x1_07;
  }
  ppplVar14 = pppplVar35[2] + -2;
  if ((ppplVar14 == (long ***)&DAT_7104862960) || (((ulong)pppplVar35[2][-1] & 0xf) != 6)) {
    pppplVar35[2] = ppplVar14;
  }
  else {
    FUN_7103377130(pppppplVar25,0,(long ****)pcVar21,ppppbVar22,pppplVar24,param_6,param_7,param_8);
    uVar20 = extraout_x1_09;
  }
  puVar9[2] = &DAT_7105333600;
  *(undefined4 *)(puVar9 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar9 + 0x6c) = DAT_7105333664;
  do {
    uVar28 = DAT_7105333650;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar4) {
      DAT_7105333650 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0' || (uVar28 & 1) != 0);
  puVar9[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar9;
  FUN_71032caea0((long)puVar9,uVar20,(long ****)pcVar21,ppppbVar22,pppplVar24,param_6,param_7,
                 param_8);
  lVar12 = plVar7[0x1e];
  plVar7[0x1e] = (long)puVar9;
  if (lVar12 != 0) {
    FUN_71032cad20(lVar12);
  }
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)pcVar21,ppppbVar22,pppplVar24,param_6,param_7,param_8
                         );
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_218 = (undefined **)((ulong)local_218 & 0xffffffff00000000);
      local_1a0 = (undefined **)&DAT_00000088;
      pcVar21 = (char *)&local_1a0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_218);
      if (((uVar8 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)pcVar21,ppppbVar22,pppplVar24,param_6,param_7
                                  ,param_8), puVar9 != (undefined8 *)0x0)) goto LAB_710196f8e8;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_710196f8e8:
  *puVar9 = &PTR_FUN_71050b2d98;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 0xb) = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  puVar9[0xf] = plVar33;
  *(undefined1 *)(puVar9 + 0xe) = 1;
  puVar9[9] = 0;
  puVar9[10] = 0;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0x1ffffffff;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x120,(long ****)pcVar21,ppppbVar22,pppplVar24,param_6,param_7,
                           param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_218 = (undefined **)((ulong)local_218 & 0xffffffff00000000);
      local_1a0 = (undefined **)&DAT_00000120;
      pcVar21 = (char *)&local_1a0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_218);
      if (((uVar8 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x120,(long ****)pcVar21,ppppbVar22,pppplVar24,param_6,
                                   param_7,param_8), puVar10 != (undefined8 *)0x0))
      goto LAB_710196f970;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_710196f970:
  *(undefined2 *)(puVar10 + 1) = 0x100;
  *(undefined4 *)((long)puVar10 + 0xc) = 0x4001;
  *(undefined1 *)(puVar10 + 2) = 1;
  *(undefined4 *)((long)puVar10 + 0x14) = 1;
  *puVar10 = &PTR_FUN_71050b2d58;
  *(undefined1 *)(puVar10 + 3) = 0;
  puVar10[4] = puVar10;
  puVar10[8] = 0;
  puVar10[5] = 0;
  *(undefined4 *)(puVar10 + 0x1e) = 0xffffffff;
  *(undefined1 *)((long)puVar10 + 0xf4) = 0;
  puVar10[9] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[0x1c] = 0;
  puVar10[0x1d] = 0xffffffff;
  puVar10[0x1a] = 0;
  puVar10[0x1b] = 0;
  puVar10[0x18] = 0;
  puVar10[0x19] = 0;
  puVar10[0x16] = 0;
  puVar10[0x17] = 0;
  puVar10[0x14] = 0;
  puVar10[0x15] = 0;
  puVar10[0x12] = 0;
  puVar10[0x13] = 0;
  puVar10[0x10] = 0;
  puVar10[0x11] = 0;
  puVar10[0xe] = 0;
  puVar10[0xf] = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  puVar10[10] = 0;
  puVar10[0xb] = 0;
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)pcVar21,ppppbVar22,pppplVar24,param_6,param_7,param_8);
  uVar20 = extraout_x1_10;
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_218 = (undefined **)((ulong)local_218 & 0xffffffff00000000);
      local_1a0 = (undefined **)&DAT_00000008;
      pcVar21 = (char *)&local_1a0;
      auVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_218);
      uVar20 = auVar38._8_8_;
      if (((auVar38._0_8_ & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)pcVar21,ppppbVar22,pppplVar24,param_6,param_7,
                                   param_8), uVar20 = extraout_x1_11, puVar15 != (undefined8 *)0x0))
      goto LAB_710196fa48;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_710196fa48:
  FUN_7103773200(puVar15,uVar20,(long ****)pcVar21,ppppbVar22,pppplVar24,param_6,param_7,param_8);
  *(undefined4 *)(puVar10 + 0x22) = 0;
  puVar10[0x20] = 0;
  puVar10[0x21] = 0;
  puVar10[0x1f] = puVar15;
  *(undefined8 *)((long)puVar10 + 0x114) = 3;
  puVar10[9] = FUN_7101ebb240;
  puVar10[10] = 0;
  *(undefined1 *)((long)puVar10 + 0x11c) = 0;
  puVar10[0xb] = FUN_7101ebb250;
  puVar10[0xc] = 0;
  puVar10[0xf] = FUN_7101ebb3f0;
  puVar10[0x10] = 0;
  puVar10[0x11] = FUN_7101ebb4b0;
  puVar10[0x12] = 0;
  puVar10[0xd] = FUN_7101ebb310;
  puVar10[0xe] = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  *(undefined8 *)((long)puVar10 + 0xdc) = 0;
  *(undefined8 *)((long)puVar10 + 0xd4) = 0;
  *(undefined8 *)((long)puVar10 + 0xcc) = 0;
  *(undefined8 *)((long)puVar10 + 0xc4) = 0;
  *(undefined8 *)((long)puVar10 + 0xbc) = 0;
  *(undefined8 *)((long)puVar10 + 0xb4) = 0;
  *(undefined8 *)((long)puVar10 + 0xac) = 0;
  *(undefined8 *)((long)puVar10 + 0xa4) = 0;
  *(undefined8 *)((long)puVar10 + 0x9c) = 0;
  *(undefined8 *)((long)puVar10 + 0xe4) = 0xffffffff00000000;
  *(undefined8 *)((long)puVar10 + 0xec) = 0xffffffff00000000;
  *(undefined1 *)((long)puVar10 + 0xf4) = 0;
  *(undefined4 *)(puVar10 + 0x13) = 0;
  FUN_7101ebb640(puVar10 + 4);
  puVar9[0x10] = puVar10;
  ppppbVar22 = (byte ****)0x1;
  FUN_71032cbf30(puVar10 + 0x1f,*plVar33,(ulong *)&DAT_7104545cb8,(byte ****)0x1,pppplVar24,param_6,
                 param_7,param_8);
  FUN_71037760f0(**(long **)puVar10[0x1f],0);
  puVar15 = (undefined8 *)(*(long *)puVar10[0x1f] + 8);
  uVar20 = 0;
  FUN_7103776910(&local_218,(long)puVar15,(long ****)"set_btn_wallpaper_%02d",0,ppppbVar22,
                 pppplVar24,param_6,param_7,param_8);
  FUN_71003a4ca0((uint *)&local_1a0,"edit_stage_wallpaper_%02d",0,uVar20,ppppbVar22,pppplVar24,
                 param_6,param_7,param_8);
  ppppppppplVar19 = (long *********)&DAT_0000002e;
  plVar16 = FUN_71032410c0((long *)pppppplVar37,(long ****)&local_198,0x2e,ppppbVar22,pppplVar24,
                           param_6,param_7,param_8);
  FUN_7103778b80((long)local_210[0],(long)plVar16,ppppppppplVar19,ppppbVar22,pppplVar24,param_6,
                 param_7,param_8);
  pppppppplVar5 = local_210[0];
  local_218 = &PTR_FUN_710523d9a8;
  local_210[0] = (long ********)0x0;
  if (pppppppplVar5 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar5);
  }
  uVar20 = 1;
  FUN_7103776910(&local_218,(long)puVar15,(long ****)"set_btn_wallpaper_%02d",1,ppppbVar22,
                 pppplVar24,param_6,param_7,param_8);
  FUN_71003a4ca0((uint *)&local_1a0,"edit_stage_wallpaper_%02d",1,uVar20,ppppbVar22,pppplVar24,
                 param_6,param_7,param_8);
  ppppppppplVar19 = (long *********)&DAT_0000002e;
  plVar16 = FUN_71032410c0((long *)pppppplVar37,(long ****)&local_198,0x2e,ppppbVar22,pppplVar24,
                           param_6,param_7,param_8);
  FUN_7103778b80((long)local_210[0],(long)plVar16,ppppppppplVar19,ppppbVar22,pppplVar24,param_6,
                 param_7,param_8);
  pppppppplVar5 = local_210[0];
  local_218 = &PTR_FUN_710523d9a8;
  local_210[0] = (long ********)0x0;
  if (pppppppplVar5 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar5);
  }
  uVar20 = 2;
  FUN_7103776910(&local_218,(long)puVar15,(long ****)"set_btn_wallpaper_%02d",2,ppppbVar22,
                 pppplVar24,param_6,param_7,param_8);
  FUN_71003a4ca0((uint *)&local_1a0,"edit_stage_wallpaper_%02d",2,uVar20,ppppbVar22,pppplVar24,
                 param_6,param_7,param_8);
  ppppppppplVar19 = (long *********)&DAT_0000002e;
  plVar16 = FUN_71032410c0((long *)pppppplVar37,(long ****)&local_198,0x2e,ppppbVar22,pppplVar24,
                           param_6,param_7,param_8);
  FUN_7103778b80((long)local_210[0],(long)plVar16,ppppppppplVar19,ppppbVar22,pppplVar24,param_6,
                 param_7,param_8);
  pppppppplVar5 = local_210[0];
  local_218 = &PTR_FUN_710523d9a8;
  local_210[0] = (long ********)0x0;
  if (pppppppplVar5 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar5);
  }
  uVar20 = 3;
  FUN_7103776910(&local_218,(long)puVar15,(long ****)"set_btn_wallpaper_%02d",3,ppppbVar22,
                 pppplVar24,param_6,param_7,param_8);
  FUN_71003a4ca0((uint *)&local_1a0,"edit_stage_wallpaper_%02d",3,uVar20,ppppbVar22,pppplVar24,
                 param_6,param_7,param_8);
  ppppppppplVar19 = (long *********)&DAT_0000002e;
  plVar16 = FUN_71032410c0((long *)pppppplVar37,(long ****)&local_198,0x2e,ppppbVar22,pppplVar24,
                           param_6,param_7,param_8);
  FUN_7103778b80((long)local_210[0],(long)plVar16,ppppppppplVar19,ppppbVar22,pppplVar24,param_6,
                 param_7,param_8);
  pppppppplVar5 = local_210[0];
  local_218 = &PTR_FUN_710523d9a8;
  local_210[0] = (long ********)0x0;
  if (pppppppplVar5 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar5);
  }
  uVar20 = 4;
  FUN_7103776910(&local_218,(long)puVar15,(long ****)"set_btn_wallpaper_%02d",4,ppppbVar22,
                 pppplVar24,param_6,param_7,param_8);
  FUN_71003a4ca0((uint *)&local_1a0,"edit_stage_wallpaper_%02d",4,uVar20,ppppbVar22,pppplVar24,
                 param_6,param_7,param_8);
  ppppppppplVar19 = (long *********)&DAT_0000002e;
  plVar16 = FUN_71032410c0((long *)pppppplVar37,(long ****)&local_198,0x2e,ppppbVar22,pppplVar24,
                           param_6,param_7,param_8);
  FUN_7103778b80((long)local_210[0],(long)plVar16,ppppppppplVar19,ppppbVar22,pppplVar24,param_6,
                 param_7,param_8);
  pppppppplVar5 = local_210[0];
  local_218 = &PTR_FUN_710523d9a8;
  local_210[0] = (long ********)0x0;
  if (pppppppplVar5 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar5);
  }
  uVar20 = 5;
  FUN_7103776910(&local_218,(long)puVar15,(long ****)"set_btn_wallpaper_%02d",5,ppppbVar22,
                 pppplVar24,param_6,param_7,param_8);
  FUN_71003a4ca0((uint *)&local_1a0,"edit_stage_wallpaper_%02d",5,uVar20,ppppbVar22,pppplVar24,
                 param_6,param_7,param_8);
  ppppppppplVar19 = (long *********)&DAT_0000002e;
  plVar16 = FUN_71032410c0((long *)pppppplVar37,(long ****)&local_198,0x2e,ppppbVar22,pppplVar24,
                           param_6,param_7,param_8);
  FUN_7103778b80((long)local_210[0],(long)plVar16,ppppppppplVar19,ppppbVar22,pppplVar24,param_6,
                 param_7,param_8);
  pppppppplVar5 = local_210[0];
  local_218 = &PTR_FUN_710523d9a8;
  local_210[0] = (long ********)0x0;
  if (pppppppplVar5 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar5);
  }
  uVar20 = 6;
  FUN_7103776910(&local_218,(long)puVar15,(long ****)"set_btn_wallpaper_%02d",6,ppppbVar22,
                 pppplVar24,param_6,param_7,param_8);
  FUN_71003a4ca0((uint *)&local_1a0,"edit_stage_wallpaper_%02d",6,uVar20,ppppbVar22,pppplVar24,
                 param_6,param_7,param_8);
  ppppppppplVar19 = (long *********)&DAT_0000002e;
  plVar16 = FUN_71032410c0((long *)pppppplVar37,(long ****)&local_198,0x2e,ppppbVar22,pppplVar24,
                           param_6,param_7,param_8);
  FUN_7103778b80((long)local_210[0],(long)plVar16,ppppppppplVar19,ppppbVar22,pppplVar24,param_6,
                 param_7,param_8);
  pppppppplVar5 = local_210[0];
  local_218 = &PTR_FUN_710523d9a8;
  local_210[0] = (long ********)0x0;
  if (pppppppplVar5 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar5);
  }
  uVar20 = 7;
  FUN_7103776910(&local_218,(long)puVar15,(long ****)"set_btn_wallpaper_%02d",7,ppppbVar22,
                 pppplVar24,param_6,param_7,param_8);
  FUN_71003a4ca0((uint *)&local_1a0,"edit_stage_wallpaper_%02d",7,uVar20,ppppbVar22,pppplVar24,
                 param_6,param_7,param_8);
  ppppppppplVar19 = (long *********)&DAT_0000002e;
  plVar16 = FUN_71032410c0((long *)pppppplVar37,(long ****)&local_198,0x2e,ppppbVar22,pppplVar24,
                           param_6,param_7,param_8);
  FUN_7103778b80((long)local_210[0],(long)plVar16,ppppppppplVar19,ppppbVar22,pppplVar24,param_6,
                 param_7,param_8);
  pppppppplVar5 = local_210[0];
  local_218 = &PTR_FUN_710523d9a8;
  local_210[0] = (long ********)0x0;
  if (pppppppplVar5 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar5);
  }
  uVar20 = 8;
  FUN_7103776910(&local_218,(long)puVar15,(long ****)"set_btn_wallpaper_%02d",8,ppppbVar22,
                 pppplVar24,param_6,param_7,param_8);
  FUN_71003a4ca0((uint *)&local_1a0,"edit_stage_wallpaper_%02d",8,uVar20,ppppbVar22,pppplVar24,
                 param_6,param_7,param_8);
  ppppppppplVar19 = (long *********)&DAT_0000002e;
  plVar16 = FUN_71032410c0((long *)pppppplVar37,(long ****)&local_198,0x2e,ppppbVar22,pppplVar24,
                           param_6,param_7,param_8);
  FUN_7103778b80((long)local_210[0],(long)plVar16,ppppppppplVar19,ppppbVar22,pppplVar24,param_6,
                 param_7,param_8);
  pppppppplVar5 = local_210[0];
  local_218 = &PTR_FUN_710523d9a8;
  local_210[0] = (long ********)0x0;
  if (pppppppplVar5 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar5);
  }
  uVar20 = 9;
  FUN_7103776910(&local_218,(long)puVar15,(long ****)"set_btn_wallpaper_%02d",9,ppppbVar22,
                 pppplVar24,param_6,param_7,param_8);
  FUN_71003a4ca0((uint *)&local_1a0,"edit_stage_wallpaper_%02d",9,uVar20,ppppbVar22,pppplVar24,
                 param_6,param_7,param_8);
  ppppppppplVar19 = (long *********)&DAT_0000002e;
  plVar16 = FUN_71032410c0((long *)pppppplVar37,(long ****)&local_198,0x2e,ppppbVar22,pppplVar24,
                           param_6,param_7,param_8);
  FUN_7103778b80((long)local_210[0],(long)plVar16,ppppppppplVar19,ppppbVar22,pppplVar24,param_6,
                 param_7,param_8);
  pppppppplVar5 = local_210[0];
  local_218 = &PTR_FUN_710523d9a8;
  local_210[0] = (long ********)0x0;
  if (pppppppplVar5 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar5);
  }
  uVar20 = 10;
  FUN_7103776910(&local_218,(long)puVar15,(long ****)"set_btn_wallpaper_%02d",10,ppppbVar22,
                 pppplVar24,param_6,param_7,param_8);
  FUN_71003a4ca0((uint *)&local_1a0,"edit_stage_wallpaper_%02d",10,uVar20,ppppbVar22,pppplVar24,
                 param_6,param_7,param_8);
  ppppppppplVar19 = (long *********)&DAT_0000002e;
  plVar16 = FUN_71032410c0((long *)pppppplVar37,(long ****)&local_198,0x2e,ppppbVar22,pppplVar24,
                           param_6,param_7,param_8);
  FUN_7103778b80((long)local_210[0],(long)plVar16,ppppppppplVar19,ppppbVar22,pppplVar24,param_6,
                 param_7,param_8);
  pppppppplVar5 = local_210[0];
  local_218 = &PTR_FUN_710523d9a8;
  local_210[0] = (long ********)0x0;
  if (pppppppplVar5 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar5);
  }
  uVar20 = 0xb;
  plVar16 = puVar10 + 0x20;
  FUN_7103776910(&local_218,(long)puVar15,(long ****)"set_btn_wallpaper_%02d",0xb,ppppbVar22,
                 pppplVar24,param_6,param_7,param_8);
  FUN_71003a4ca0((uint *)&local_1a0,"edit_stage_wallpaper_%02d",0xb,uVar20,ppppbVar22,pppplVar24,
                 param_6,param_7,param_8);
  ppppppppplVar19 = (long *********)&DAT_0000002e;
  plVar17 = FUN_71032410c0((long *)pppppplVar37,(long ****)&local_198,0x2e,ppppbVar22,pppplVar24,
                           param_6,param_7,param_8);
  FUN_7103778b80((long)local_210[0],(long)plVar17,ppppppppplVar19,ppppbVar22,pppplVar24,param_6,
                 param_7,param_8);
  pppppppplVar5 = local_210[0];
  local_218 = &PTR_FUN_710523d9a8;
  local_210[0] = (long ********)0x0;
  if (pppppppplVar5 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar5);
  }
  local_1a0 = (undefined **)0x0;
  local_198 = (long ******)&DAT_00000101;
  local_190 = 1;
  local_18c = 1;
  local_18a = 1;
  local_188 = &DAT_41f0000000000000;
  local_180 = 0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_90 = (long *)0x0;
  local_80 = 0;
  FUN_710337df20((long)&local_1a0);
  ppppbVar22 = (byte ****)&local_1a0;
  local_188 = (undefined1 *)((ulong)local_188 & 0xffffffff);
  FUN_7103770b30(plVar16,puVar15,(long ****)"selector_0",ppppbVar22,pppplVar24,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar16,0,"set_btn_r",ppppbVar22,pppplVar24,param_6,param_7,param_8);
  FUN_71037717d0(plVar16,1,"set_btn_l",ppppbVar22,pppplVar24,param_6,param_7,param_8);
  (**(code **)(*(long *)*plVar16 + 0x60))((long *)*plVar16,0);
  (**(code **)(*(long *)*plVar16 + 0x70))((long *)*plVar16,0);
  pcVar21 = "selector_1";
  ppppbVar22 = (byte ****)&local_1a0;
  FUN_7103770b30(puVar10 + 0x21,puVar15,(long ****)"selector_1",ppppbVar22,pppplVar24,param_6,
                 param_7,param_8);
  plVar16 = (long *)puVar10[0x21];
  uVar8 = plVar16[0x31] - plVar16[0x30];
  if (0 < (int)(uVar8 >> 3)) {
    pcVar21 = *(char **)plVar16[0x30];
    uVar8 = uVar8 >> 3 & 0xffffffff;
    FUN_710376e070(plVar16,0,(long ****)pcVar21,ppppbVar22,pppplVar24,param_6,param_7,param_8);
    if (uVar8 != 1) {
      uVar36 = 1;
      do {
        pcVar21 = *(char **)(plVar16[0x30] + uVar36 * 8);
        FUN_710376e070(plVar16,(int)uVar36,(long ****)pcVar21,ppppbVar22,pppplVar24,param_6,param_7,
                       param_8);
        uVar36 = uVar36 + 1;
      } while (uVar8 != uVar36);
    }
  }
  (**(code **)(*(long *)puVar10[0x21] + 0x60))((long *)puVar10[0x21],0);
  (**(code **)(*(long *)puVar10[0x21] + 0x70))((long *)puVar10[0x21],0);
  *(undefined2 *)(puVar10 + 1) = 0x100;
  *(undefined2 *)((long)puVar10 + 10) = (undefined2)local_1b0;
  *(undefined4 *)((long)puVar10 + 0xc) = 0x16001;
  *(undefined1 *)(puVar10 + 2) = 1;
  *(undefined1 *)((long)puVar10 + 0x13) = local_218._2_1_;
  *(undefined2 *)((long)puVar10 + 0x11) = (undefined2)local_218;
  *(undefined4 *)((long)puVar10 + 0x14) = 6;
  *(undefined1 *)(puVar10 + 3) = 0;
  lVar29 = **(long **)puVar10[0x1f];
  *(undefined4 *)(*(long *)(lVar29 + 0x600) + 0x494) = 6;
  lVar12 = *(long *)(lVar29 + 0x608);
  lVar29 = *(long *)(lVar29 + 0x610);
  if (lVar12 != lVar29) {
    uVar8 = (lVar29 + -0x10) - lVar12;
    uVar28 = ((uint)(uVar8 >> 4) & 0xfffffff) + 1;
    if ((uVar28 & 3) != 0) {
      lVar31 = -((ulong)uVar28 & 3);
      do {
        plVar16 = (long *)(lVar12 + 8);
        lVar12 = lVar12 + 0x10;
        lVar31 = lVar31 + 1;
        *(undefined4 *)(*plVar16 + 0x494) = 6;
      } while (lVar31 != 0);
    }
    if (0x2f < uVar8) {
      do {
        *(undefined4 *)(*(long *)(lVar12 + 8) + 0x494) = 6;
        *(undefined4 *)(*(long *)(lVar12 + 0x18) + 0x494) = 6;
        *(undefined4 *)(*(long *)(lVar12 + 0x28) + 0x494) = 6;
        plVar16 = (long *)(lVar12 + 0x38);
        lVar12 = lVar12 + 0x40;
        *(undefined4 *)(*plVar16 + 0x494) = 6;
      } while (lVar29 != lVar12);
    }
  }
  if (alStack_b0 == local_90) {
    pcVar27 = *(code **)(*local_90 + 0x20);
LAB_71019701c0:
    (*pcVar27)();
    uVar20 = extraout_x1_13;
  }
  else {
    uVar20 = extraout_x1_12;
    if (local_90 != (long *)0x0) {
      pcVar27 = *(code **)(*local_90 + 0x28);
      goto LAB_71019701c0;
    }
  }
  if (alStack_e0 == local_c0) {
    pcVar27 = *(code **)(*local_c0 + 0x20);
LAB_71019701f0:
    (*pcVar27)();
    uVar20 = extraout_x1_14;
  }
  else if (local_c0 != (long *)0x0) {
    pcVar27 = *(code **)(*local_c0 + 0x28);
    goto LAB_71019701f0;
  }
  if (alStack_110 == local_f0) {
    pcVar27 = *(code **)(*local_f0 + 0x20);
LAB_7101970220:
    (*pcVar27)();
    uVar20 = extraout_x1_15;
  }
  else if (local_f0 != (long *)0x0) {
    pcVar27 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101970220;
  }
  if (alStack_140 == local_120) {
    pcVar27 = *(code **)(*local_120 + 0x20);
LAB_7101970250:
    (*pcVar27)();
    uVar20 = extraout_x1_16;
  }
  else if (local_120 != (long *)0x0) {
    pcVar27 = *(code **)(*local_120 + 0x28);
    goto LAB_7101970250;
  }
  if (alStack_170 == local_150) {
    pcVar27 = *(code **)(*local_150 + 0x20);
  }
  else {
    if (local_150 == (long *)0x0) goto LAB_7101970284;
    pcVar27 = *(code **)(*local_150 + 0x28);
  }
  (*pcVar27)();
  uVar20 = extraout_x1_17;
LAB_7101970284:
  puVar9[2] = &DAT_7105333600;
  *(undefined4 *)(puVar9 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar9 + 0x6c) = DAT_7105333664;
  do {
    uVar28 = DAT_7105333650;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar4) {
      DAT_7105333650 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0' || (uVar28 & 1) != 0);
  puVar9[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar9;
  FUN_71032caea0((long)puVar9,uVar20,(long ****)pcVar21,ppppbVar22,pppplVar24,param_6,param_7,
                 param_8);
  lVar12 = plVar7[0x1f];
  plVar7[0x1f] = (long)puVar9;
  uVar20 = extraout_x1_18;
  if (lVar12 != 0) {
    FUN_71032cad20(lVar12);
    uVar20 = extraout_x1_19;
  }
  FUN_710323b9e0(*plVar33,uVar20,(long *********)pcVar21,ppppbVar22,pppplVar24,param_6,param_7,
                 param_8);
  return;
}

