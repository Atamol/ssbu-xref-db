// addr:      71017fb950
// offset:    0x17fb950
// name:      FUN_71017fb950
// mangled:   
// signature: undefined __cdecl FUN_71017fb950(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71017fb950(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
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
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  char *pcVar19;
  long ****pppplVar20;
  undefined *puVar21;
  byte ****ppppbVar22;
  undefined8 uVar23;
  long ****pppplVar24;
  long *plVar25;
  code *pcVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  long *plVar30;
  long lVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  long lVar34;
  ulong uVar35;
  long *plVar36;
  long *plVar37;
  undefined1 auVar38 [16];
  undefined2 local_1c4;
  undefined8 local_1c0;
  ulong local_1b8;
  undefined8 local_1b0;
  ulong local_1a8;
  undefined8 local_1a0;
  ulong local_198;
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
  
  lVar9 = FUN_710392e290(0x10,0x2f8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar9 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
      local_1a0 = (undefined **)0x2f8;
      param_3 = (long *********)&local_1a0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
      if (((uVar10 & 1) != 0) &&
         (lVar9 = FUN_710392e290(0x10,0x2f8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                 param_8), lVar9 != 0)) goto LAB_71017fb9d4;
    }
    lVar9 = 0;
  }
LAB_71017fb9d4:
  *(undefined8 *)(lVar9 + 0x10) = 0;
  *(undefined8 *)(lVar9 + 0x18) = 0;
  *(undefined4 *)(lVar9 + 0x120) = 0xffffffff;
  *(long *)lVar9 = lVar9;
  *(undefined8 *)(lVar9 + 8) = 0;
  *(undefined1 *)(lVar9 + 0x124) = 0;
  *(undefined4 *)(lVar9 + 0x128) = 0;
  *(undefined8 *)(lVar9 + 0x110) = 0;
  *(undefined8 *)(lVar9 + 0x118) = 0xffffffff;
  *(undefined8 *)(lVar9 + 0x100) = 0;
  *(undefined8 *)(lVar9 + 0x108) = 0;
  *(undefined8 *)(lVar9 + 0xf0) = 0;
  *(undefined8 *)(lVar9 + 0xf8) = 0;
  *(undefined8 *)(lVar9 + 0xe0) = 0;
  *(undefined8 *)(lVar9 + 0xe8) = 0;
  *(undefined8 *)(lVar9 + 0xd0) = 0;
  *(undefined8 *)(lVar9 + 0xd8) = 0;
  *(undefined8 *)(lVar9 + 0xc0) = 0;
  *(undefined8 *)(lVar9 + 200) = 0;
  *(undefined8 *)(lVar9 + 0xb0) = 0;
  *(undefined8 *)(lVar9 + 0xb8) = 0;
  *(undefined8 *)(lVar9 + 0xa0) = 0;
  *(undefined8 *)(lVar9 + 0xa8) = 0;
  *(undefined8 *)(lVar9 + 0x90) = 0;
  *(undefined8 *)(lVar9 + 0x98) = 0;
  *(undefined8 *)(lVar9 + 0x80) = 0;
  *(undefined8 *)(lVar9 + 0x88) = 0;
  *(undefined8 *)(lVar9 + 0x70) = 0;
  *(undefined8 *)(lVar9 + 0x78) = 0;
  *(undefined8 *)(lVar9 + 0x60) = 0;
  *(undefined8 *)(lVar9 + 0x68) = 0;
  *(undefined8 *)(lVar9 + 0x50) = 0;
  *(undefined8 *)(lVar9 + 0x58) = 0;
  *(undefined8 *)(lVar9 + 0x40) = 0;
  *(undefined8 *)(lVar9 + 0x48) = 0;
  *(undefined8 *)(lVar9 + 0x30) = 0;
  *(undefined8 *)(lVar9 + 0x38) = 0;
  *(undefined8 *)(lVar9 + 0x20) = 0;
  *(undefined8 *)(lVar9 + 0x28) = 0;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
      local_1a0 = (undefined **)&DAT_00000080;
      param_3 = (long *********)&local_1a0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
      if (((uVar10 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar11 != (undefined8 *)0x0)) goto LAB_71017fba80;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71017fba80:
  puVar11[2] = 0;
  *puVar11 = &PTR_FUN_7105181b40;
  puVar11[1] = puVar11 + 2;
  puVar11[5] = 0;
  puVar11[3] = 0;
  puVar11[4] = puVar11 + 5;
  puVar11[8] = 0;
  puVar11[6] = 0;
  puVar11[7] = puVar11 + 8;
  puVar33 = &DAT_c1ffff0000000000;
  puVar11[0xb] = 0;
  puVar11[0xc] = 0;
  *(undefined4 *)(puVar11 + 0xd) = 2;
  *(undefined4 *)(puVar11 + 0xf) = 0;
  puVar11[0xe] = 0;
  puVar11[9] = 0;
  puVar11[10] = puVar11 + 0xb;
  *(undefined4 *)(lVar9 + 0x180) = 0;
  *(undefined1 **)(lVar9 + 0x188) = &DAT_c1ffff0000000000;
  *(undefined4 *)(lVar9 + 400) = 0;
  *(undefined ***)(lVar9 + 0x198) = &PTR_FUN_710523da48;
  *(undefined8 **)(lVar9 + 0x130) = puVar11;
  *(undefined8 *)(lVar9 + 0x138) = 0;
  *(undefined8 *)(lVar9 + 0x170) = 0;
  *(undefined8 *)(lVar9 + 0x178) = 0;
  *(undefined8 *)(lVar9 + 0x160) = 0;
  *(undefined8 *)(lVar9 + 0x168) = 0;
  *(undefined8 *)(lVar9 + 0x150) = 0;
  *(undefined8 *)(lVar9 + 0x158) = 0;
  *(undefined8 *)(lVar9 + 0x140) = 0;
  *(undefined8 *)(lVar9 + 0x148) = 0;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
      local_1a0 = (undefined **)&DAT_00000010;
      param_3 = (long *********)&local_1a0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
      if (((uVar10 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar11 != (undefined8 *)0x0)) goto LAB_71017fbb54;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71017fbb54:
  *puVar11 = 0;
  puVar11[1] = 0;
  *(undefined8 **)(lVar9 + 0x1a0) = puVar11;
  *(undefined4 *)(lVar9 + 0x1a8) = 0xffffffff;
  *(undefined8 *)(lVar9 + 0x1ac) = 0;
  *(undefined8 *)(lVar9 + 0x1bc) = 0;
  *(undefined8 *)(lVar9 + 0x1c4) = 0;
  *(undefined8 *)(lVar9 + 0x1cc) = 0;
  *(undefined8 *)(lVar9 + 0x1b4) = 0;
  *(undefined8 *)(lVar9 + 500) = 0;
  *(undefined8 *)(lVar9 + 0x1ec) = 0;
  *(undefined8 *)(lVar9 + 0x1e4) = 0;
  *(undefined8 *)(lVar9 + 0x1d4) = 0;
  *(undefined8 *)(lVar9 + 0x1dc) = 0;
  *(undefined4 *)(lVar9 + 0x1ac) = 0xffffffff;
  *(undefined2 *)(lVar9 + 0x1b0) = 0xffff;
  *(undefined1 *)(lVar9 + 0x1bc) = 0;
  *(undefined4 *)(lVar9 + 0x1c0) = 0xffffffff;
  *(undefined2 *)(lVar9 + 0x1c4) = 0xffff;
  *(undefined1 *)(lVar9 + 0x1d0) = 0;
  *(undefined8 *)(lVar9 + 0x1c8) = 0;
  *(undefined4 *)(lVar9 + 0x1d4) = 0xffffffff;
  *(undefined2 *)(lVar9 + 0x1d8) = 0xffff;
  *(undefined8 *)(lVar9 + 0x1dc) = 0;
  *(undefined1 *)(lVar9 + 0x1e4) = 0;
  *(undefined4 *)(lVar9 + 0x1e8) = 0xffffffff;
  *(undefined2 *)(lVar9 + 0x1ec) = 0xffff;
  *(undefined1 *)(lVar9 + 0x1f8) = 0;
  *(undefined8 *)(lVar9 + 0x1f0) = 0;
  *(undefined1 *)(lVar9 + 0x250) = 0;
  *(undefined8 *)(lVar9 + 0x248) = 0;
  *(undefined2 *)(lVar9 + 0x290) = 0;
  *(undefined2 *)(lVar9 + 0x294) = 0;
  *(undefined4 *)(lVar9 + 0x2a8) = 0;
  *(undefined8 *)(lVar9 + 0x2a0) = 0;
  *(undefined8 *)(lVar9 + 0x298) = 0;
  *(undefined8 *)(lVar9 + 0x201) = 0;
  *(undefined8 *)(lVar9 + 0x1fc) = 0;
  *(undefined1 *)(lVar9 + 0x2ac) = 2;
  *(undefined1 *)(lVar9 + 0x2ad) = 0;
  *(undefined2 *)(lVar9 + 0x2ae) = 0xffff;
  *(undefined4 *)(lVar9 + 0x2b0) = 0;
  *(undefined4 *)(lVar9 + 0x2d4) = 0;
  *(undefined1 *)(lVar9 + 0x2d0) = 0;
  *(undefined8 *)(lVar9 + 0x2c8) = 0;
  *(undefined8 *)(lVar9 + 0x2c0) = 0;
  *(undefined8 *)(lVar9 + 0x2b8) = 0;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0xb8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar23 = extraout_x1;
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
      local_1a0 = (undefined **)&DAT_000000b8;
      param_3 = (long *********)&local_1a0;
      auVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
      uVar23 = auVar38._8_8_;
      if (((auVar38._0_8_ & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0xb8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), uVar23 = extraout_x1_00, puVar11 != (undefined8 *)0x0))
      goto LAB_71017fbc94;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71017fbc94:
  *puVar11 = &PTR_FUN_71050a7138;
  puVar11[1] = puVar11;
  *(undefined4 *)(puVar11 + 0x15) = 0xffffffff;
  puVar11[2] = 0;
  puVar11[3] = 0;
  *(undefined1 *)((long)puVar11 + 0xac) = 0;
  *(undefined4 *)(puVar11 + 0x16) = 0xffffffff;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[0x13] = 0;
  puVar11[0x14] = 0xffffffff;
  puVar11[0x11] = 0;
  puVar11[0x12] = 0;
  puVar11[0xf] = 0;
  puVar11[0x10] = 0;
  puVar11[0xd] = 0;
  puVar11[0xe] = 0;
  puVar11[0xb] = 0;
  puVar11[0xc] = 0;
  puVar11[9] = 0;
  puVar11[10] = 0;
  *(undefined4 *)(puVar11 + 10) = 0;
  puVar11[7] = 0;
  puVar11[8] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[6] = FUN_71019904d0;
  puVar11[8] = FUN_71019904e0;
  puVar11[9] = 0;
  *(undefined8 **)(lVar9 + 0x2d8) = puVar11;
  *(undefined1 *)(lVar9 + 0x2e8) = 0;
  *(undefined8 *)(lVar9 + 0x2e0) = 0;
  *(undefined4 *)(lVar9 + 0x2f0) = 0;
  *(undefined1 *)(lVar9 + 0x2f4) = 0;
  puVar11 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar11 != (undefined8 *)0x0) {
    if (((DAT_7105324798 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_7105324798), iVar8 != 0)) {
      if (((DAT_7105324748 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_7105324748), iVar8 != 0))
      {
        if (((DAT_7105324750 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(&DAT_7105324750), iVar8 != 0)) {
          DAT_7105324758 = 0;
          __cxa_guard_release(&DAT_7105324750);
        }
        DAT_7105324760 = &DAT_7105324758;
        __cxa_guard_release(&DAT_7105324748);
      }
      DAT_71053247a0 = &DAT_7105324760;
      __cxa_guard_release(&DAT_7105324798);
    }
    auVar38 = (**(code **)*puVar11)(puVar11);
    uVar23 = auVar38._8_8_;
    for (puVar12 = auVar38._0_8_; puVar12 != (undefined8 *)0x0; puVar12 = (undefined8 *)*puVar12) {
      if ((undefined8 **)puVar12 == &DAT_71053247a0) {
        *(undefined4 *)(lVar9 + 0x2f0) = *(undefined4 *)(puVar11 + 1);
        break;
      }
    }
  }
  *(code **)(lVar9 + 0x28) = FUN_71017f92a0;
  *(undefined8 *)(lVar9 + 0x30) = 0;
  *(code **)(lVar9 + 0x38) = FUN_71017f9650;
  *(undefined8 *)(lVar9 + 0x40) = 0;
  *(code **)(lVar9 + 0x58) = FUN_71017f9d70;
  *(undefined8 *)(lVar9 + 0x60) = 0;
  *(code **)(lVar9 + 0x68) = FUN_71017f9e50;
  *(undefined8 *)(lVar9 + 0x70) = 0;
  *(code **)(lVar9 + 0x48) = FUN_71017f9b80;
  *(undefined8 *)(lVar9 + 0x50) = 0;
  *(code **)(lVar9 + 0x88) = FUN_71017fa1c0;
  *(undefined8 *)(lVar9 + 0x90) = 0;
  *(code **)(lVar9 + 0x78) = FUN_71017fa170;
  *(undefined8 *)(lVar9 + 0x80) = 0;
  *(code **)(lVar9 + 0x98) = FUN_71017fafb0;
  *(undefined8 *)(lVar9 + 0xa0) = 0;
  *(code **)(lVar9 + 0xa8) = FUN_71017fb050;
  *(undefined8 *)(lVar9 + 0xb0) = 0;
  *(code **)(lVar9 + 0xb8) = FUN_71017fb2b0;
  *(undefined8 *)(lVar9 + 0xc0) = 0;
  if (DAT_710532f498 == (undefined4 *)0x0) {
    puVar13 = (undefined4 *)
              FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    uVar23 = extraout_x1_01;
    if (puVar13 == (undefined4 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (undefined **)&DAT_00000008;
        param_3 = (long *********)&local_1a0;
        auVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        uVar23 = auVar38._8_8_;
        if (((auVar38._0_8_ & 1) != 0) &&
           (puVar13 = (undefined4 *)
                      FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                     param_8), uVar23 = extraout_x1_02, puVar13 != (undefined4 *)0x0
           )) goto LAB_71017fbe2c;
      }
      puVar13 = (undefined4 *)0x0;
    }
LAB_71017fbe2c:
    *puVar13 = 2;
    *(undefined1 *)(puVar13 + 1) = 0;
    DAT_710532f498 = puVar13;
  }
  uVar10 = *(ulong *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar9;
  if (uVar10 != 0) {
    FUN_71017fb640(uVar10,uVar23,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_710392eb40(uVar10);
    lVar9 = *(long *)(param_1 + 0x58);
  }
  iVar8 = *(int *)(lVar9 + 0x2f0);
  if (iVar8 == 1) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    bVar5 = FUN_71032e14a0(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
    if (bVar5) {
      iVar8 = *(int *)(lVar9 + 0x2f0);
      goto LAB_71017fbe98;
    }
    uVar10 = 0;
    bVar5 = false;
    *(undefined4 *)(lVar9 + 0x2f0) = 0;
LAB_71017fbf6c:
    lVar34 = *(long *)(lVar9 + 0x130);
    FUN_710323beb0(lVar34,(ulong *)&DAT_71045439a8,(long)*(int *)(lVar34 + 0x70),
                   (ulong)*(uint *)(lVar34 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  }
  else {
LAB_71017fbe98:
    if (iVar8 != 2) {
      uVar10 = 0;
      bVar5 = false;
      goto LAB_71017fbf6c;
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    piVar14 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
    puVar32 = *(undefined1 **)(piVar14 + 2);
    lVar34 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
    uVar6 = FUN_71032632a0(lVar34,(ulong)puVar32);
    puVar33 = puVar32;
    if ((uVar6 & 1) != 0) {
      puVar33 = FUN_71032631a0(lVar34,0x11b1ccb807);
    }
    uVar7 = FUN_71032633f0(lVar34,(ulong)puVar32);
    uVar6 = (uint)*(byte *)((long)piVar14 + 0x12);
    if (uVar7 <= *(byte *)((long)piVar14 + 0x12)) {
      uVar6 = 0;
    }
    if (*(int *)(lVar9 + 0x2f0) != 2) {
      bVar5 = true;
      uVar10 = (ulong)uVar6;
      goto LAB_71017fbf6c;
    }
    bVar5 = true;
    uVar10 = (ulong)uVar6;
  }
  plVar1 = (long *)(lVar9 + 0x130);
  lVar34 = *plVar1;
  pcVar19 = (char *)(long)*(int *)(lVar34 + 0x70);
  ppppbVar22 = (byte ****)(ulong)*(uint *)(lVar34 + 0x68);
  pppplVar24 = (long ****)0x0;
  FUN_710323beb0(lVar34,(ulong *)&DAT_7104543930,(long)pcVar19,(ulong)ppppbVar22,(long ****)0x0,
                 param_6,param_7,param_8);
  uVar23 = extraout_x1_03;
  if (bVar5) {
    pcVar19 = (char *)0x3;
    local_1a0 = (undefined **)FUN_7103238a70((ulong)puVar33,uVar10,3);
    if (((ulong)local_1a0 & 0xffffffffff) != 0) {
      lVar34 = *(long *)(lVar9 + 0x130);
      pcVar19 = (char *)(long)*(int *)(lVar34 + 0x70);
      ppppbVar22 = (byte ****)(ulong)*(uint *)(lVar34 + 0x68);
      FUN_710323c4e0(lVar34,&local_1a0,(long *********)pcVar19,ppppbVar22,pppplVar24,param_6,param_7
                     ,param_8);
    }
    uVar15 = FUN_7103263f80(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),(ulong)puVar33);
    local_1a0 = (undefined **)FUN_7103238d60(uVar15,0x12);
    uVar23 = extraout_x1_04;
    if (((ulong)local_1a0 & 0xffffffffff) != 0) {
      lVar34 = *(long *)(lVar9 + 0x130);
      pcVar19 = (char *)(long)*(int *)(lVar34 + 0x70);
      ppppbVar22 = (byte ****)(ulong)*(uint *)(lVar34 + 0x68);
      FUN_710323c4e0(lVar34,&local_1a0,(long *********)pcVar19,ppppbVar22,pppplVar24,param_6,param_7
                     ,param_8);
      uVar23 = extraout_x1_05;
    }
  }
  lVar34 = *(long *)(lVar9 + 0x130);
  uVar15 = FUN_710323cb80(lVar34,uVar23,(long *********)pcVar19,ppppbVar22,pppplVar24,param_6,
                          param_7,param_8);
  while ((uVar15 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar15 = FUN_710323cb80(lVar34,extraout_x1_06,(long *********)pcVar19,ppppbVar22,pppplVar24,
                            param_6,param_7,param_8);
  }
  if (*(int *)(lVar9 + 0x2f0) != 2) {
    puVar11 = (undefined8 *)
              FUN_710392e290(0x10,0x88,(long ****)pcVar19,ppppbVar22,pppplVar24,param_6,param_7,
                             param_8);
    if (puVar11 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (undefined **)&DAT_00000088;
        pcVar19 = (char *)&local_1a0;
        uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar15 & 1) != 0) &&
           (puVar11 = (undefined8 *)
                      FUN_710392e290(0x10,0x88,(long ****)pcVar19,ppppbVar22,pppplVar24,param_6,
                                     param_7,param_8), puVar11 != (undefined8 *)0x0))
        goto LAB_71017fc0bc;
      }
      puVar11 = (undefined8 *)0x0;
    }
LAB_71017fc0bc:
    *puVar11 = &PTR_FUN_71050a73a0;
    puVar11[1] = 0;
    *(undefined1 *)(puVar11 + 0xb) = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[0xf] = plVar1;
    *(undefined1 *)(puVar11 + 0xe) = 1;
    puVar11[9] = 0;
    puVar11[10] = 0;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0x1ffffffff;
    puVar12 = (undefined8 *)
              FUN_710392e290(0x10,0x570,(long ****)pcVar19,ppppbVar22,pppplVar24,param_6,param_7,
                             param_8);
    if (puVar12 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (undefined **)0x570;
        pcVar19 = (char *)&local_1a0;
        uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar15 & 1) != 0) &&
           (puVar12 = (undefined8 *)
                      FUN_710392e290(0x10,0x570,(long ****)pcVar19,ppppbVar22,pppplVar24,param_6,
                                     param_7,param_8), puVar12 != (undefined8 *)0x0))
        goto LAB_71017fc144;
      }
      puVar12 = (undefined8 *)0x0;
    }
LAB_71017fc144:
    *(undefined2 *)(puVar12 + 1) = 0x100;
    *(undefined4 *)((long)puVar12 + 0xc) = 0x4001;
    *(undefined1 *)(puVar12 + 2) = 1;
    *(undefined4 *)((long)puVar12 + 0x14) = 1;
    *(undefined1 *)(puVar12 + 3) = 0;
    *puVar12 = &PTR_FUN_71050a7240;
    puVar16 = (undefined8 *)
              FUN_710392e290(0x10,8,(long ****)pcVar19,ppppbVar22,pppplVar24,param_6,param_7,param_8
                            );
    uVar23 = extraout_x1_07;
    if (puVar16 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (undefined **)&DAT_00000008;
        pcVar19 = (char *)&local_1a0;
        auVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        uVar23 = auVar38._8_8_;
        if (((auVar38._0_8_ & 1) != 0) &&
           (puVar16 = (undefined8 *)
                      FUN_710392e290(0x10,8,(long ****)pcVar19,ppppbVar22,pppplVar24,param_6,param_7
                                     ,param_8), uVar23 = extraout_x1_08,
           puVar16 != (undefined8 *)0x0)) goto LAB_71017fc1cc;
      }
      puVar16 = (undefined8 *)0x0;
    }
LAB_71017fc1cc:
    FUN_7103773200(puVar16,uVar23,(long ****)pcVar19,ppppbVar22,pppplVar24,param_6,param_7,param_8);
    puVar12[4] = puVar16;
    puVar16 = puVar12 + 5;
    FUN_7103776290(puVar16,extraout_x1_09,(long ****)pcVar19,ppppbVar22,pppplVar24,param_6,param_7,
                   param_8);
    FUN_7103776290(puVar12 + 7,extraout_x1_10,(long ****)pcVar19,ppppbVar22,pppplVar24,param_6,
                   param_7,param_8);
    pppplVar20 = (long ****)0x25c;
    *(undefined4 *)((long)puVar12 + 0x2cc) = 0;
    puVar12[0xc] = 0;
    puVar12[0xd] = 0;
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    puVar12[9] = puVar12;
    puVar12[0x5a] = 0xffffffff;
    *(undefined4 *)(puVar12 + 0x5b) = 0xffffffff;
    *(undefined1 *)((long)puVar12 + 0x2dc) = 0;
    memset(puVar12 + 0xe,0,0x25c);
    puVar12[0x5c] = 0;
    puVar12[0x5d] = &PTR_FUN_71052401d0;
    puVar17 = (undefined8 *)
              FUN_710392e290(0x10,0x10,pppplVar20,ppppbVar22,pppplVar24,param_6,param_7,param_8);
    if (puVar17 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (undefined **)&DAT_00000010;
        pppplVar20 = (long ****)&local_1a0;
        uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar15 & 1) != 0) &&
           (puVar17 = (undefined8 *)
                      FUN_710392e290(0x10,0x10,pppplVar20,ppppbVar22,pppplVar24,param_6,param_7,
                                     param_8), puVar17 != (undefined8 *)0x0)) goto LAB_71017fc280;
      }
      puVar17 = (undefined8 *)0x0;
    }
LAB_71017fc280:
    *puVar17 = 0;
    puVar17[1] = 0;
    puVar12[0x5e] = puVar17;
    puVar17 = (undefined8 *)
              FUN_710392e290(0x10,0x80,pppplVar20,ppppbVar22,pppplVar24,param_6,param_7,param_8);
    if (puVar17 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (undefined **)&DAT_00000080;
        pppplVar20 = (long ****)&local_1a0;
        uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar15 & 1) != 0) &&
           (puVar17 = (undefined8 *)
                      FUN_710392e290(0x10,0x80,pppplVar20,ppppbVar22,pppplVar24,param_6,param_7,
                                     param_8), puVar17 != (undefined8 *)0x0)) goto LAB_71017fc2dc;
      }
      puVar17 = (undefined8 *)0x0;
    }
LAB_71017fc2dc:
    *puVar17 = &PTR_FUN_7105181b40;
    puVar17[2] = 0;
    puVar17[1] = puVar17 + 2;
    puVar17[5] = 0;
    puVar17[3] = 0;
    puVar17[4] = puVar17 + 5;
    puVar17[8] = 0;
    puVar17[6] = 0;
    puVar17[7] = puVar17 + 8;
    puVar17[0xb] = 0;
    puVar17[9] = 0;
    puVar17[10] = puVar17 + 0xb;
    puVar17[0xc] = 0;
    *(undefined4 *)(puVar17 + 0xd) = 2;
    *(undefined4 *)(puVar17 + 0xf) = 0;
    puVar17[0xe] = 0;
    puVar12[0x5f] = puVar17;
    *(undefined4 *)(puVar12 + 0x60) = 0xffffffff;
    *(undefined2 *)((long)puVar12 + 0x304) = 0xffff;
    *(undefined2 *)(puVar12 + 100) = 0;
    puVar12[99] = 0;
    puVar12[0x62] = 0;
    puVar12[0x61] = 0;
    puVar17 = (undefined8 *)
              FUN_710392e290(0x10,0xb8,pppplVar20,ppppbVar22,pppplVar24,param_6,param_7,param_8);
    uVar23 = extraout_x1_11;
    if (puVar17 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (undefined **)&DAT_000000b8;
        pppplVar20 = (long ****)&local_1a0;
        auVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        uVar23 = auVar38._8_8_;
        if (((auVar38._0_8_ & 1) != 0) &&
           (puVar17 = (undefined8 *)
                      FUN_710392e290(0x10,0xb8,pppplVar20,ppppbVar22,pppplVar24,param_6,param_7,
                                     param_8), uVar23 = extraout_x1_12, puVar17 != (undefined8 *)0x0
           )) goto LAB_71017fc3a0;
      }
      puVar17 = (undefined8 *)0x0;
    }
LAB_71017fc3a0:
    *puVar17 = &PTR_FUN_71050a7138;
    puVar17[1] = puVar17;
    puVar17[2] = 0;
    puVar17[3] = 0;
    *(undefined4 *)(puVar17 + 0x15) = 0xffffffff;
    *(undefined1 *)((long)puVar17 + 0xac) = 0;
    *(undefined4 *)(puVar17 + 0x16) = 0xffffffff;
    puVar17[4] = 0;
    puVar17[5] = 0;
    puVar17[0x13] = 0;
    puVar17[0x14] = 0xffffffff;
    puVar17[0x11] = 0;
    puVar17[0x12] = 0;
    puVar17[0xf] = 0;
    puVar17[0x10] = 0;
    puVar17[0xd] = 0;
    puVar17[0xe] = 0;
    puVar17[0xb] = 0;
    puVar17[0xc] = 0;
    puVar17[9] = 0;
    puVar17[10] = 0;
    *(undefined4 *)(puVar17 + 10) = 0;
    puVar17[7] = 0;
    puVar17[8] = 0;
    puVar17[6] = 0;
    puVar17[7] = 0;
    puVar17[6] = FUN_71019904d0;
    puVar17[8] = FUN_71019904e0;
    puVar17[9] = 0;
    puVar12[0x66] = puVar12 + 0x66;
    puVar12[0x7f] = &DAT_300000002;
    *(undefined1 *)((long)puVar12 + 0x404) = 1;
    puVar12[0x6b] = 0;
    puVar12[0x6b] = FUN_7103345430;
    puVar12[0x6d] = 0;
    puVar12[0x6d] = FUN_7103345440;
    puVar12[0x6f] = 0;
    puVar12[0x6f] = FUN_7103345520;
    puVar12[0x71] = 0;
    puVar12[0x71] = FUN_71033457a0;
    puVar12[0x81] = puVar12 + 0x81;
    puVar12[0x86] = 0;
    puVar12[0x86] = FUN_7103345940;
    puVar12[0x88] = 0;
    puVar12[0x88] = FUN_7103345950;
    puVar12[0x8c] = 0;
    puVar12[0x8c] = FUN_7103345a70;
    puVar12[0x8a] = 0;
    puVar12[0x8a] = FUN_7103345b50;
    puVar12[0x8e] = 0;
    puVar12[0x8e] = FUN_7103345d80;
    puVar12[0x90] = 0;
    puVar12[0x90] = FUN_7103345eb0;
    puVar12[0x92] = 0;
    puVar12[0x92] = FUN_7103345f60;
    puVar12[0x65] = puVar17;
    puVar12[0x94] = 0;
    puVar12[0x94] = FUN_71033460a0;
    puVar12[0x69] = 0;
    puVar12[0x68] = 0;
    puVar12[0x67] = 0;
    puVar12[0x6a] = 0;
    puVar12[0x7d] = 0xffffffff;
    *(undefined4 *)(puVar12 + 0x7e) = 0xffffffff;
    *(undefined1 *)((long)puVar12 + 0x3f4) = 0;
    puVar12[0x7c] = 0;
    puVar12[0x7b] = 0;
    puVar12[0x7a] = 0;
    puVar12[0x79] = 0;
    puVar12[0x78] = 0;
    puVar12[0x77] = 0;
    puVar12[0x76] = 0;
    puVar12[0x75] = 0;
    puVar12[0x74] = 0;
    puVar12[0x73] = 0;
    puVar12[0x72] = 0;
    puVar12[0x70] = 0;
    puVar12[0x6e] = 0;
    puVar12[0x6c] = 0;
    *(undefined4 *)(puVar12 + 0x80) = 0;
    puVar12[0x6c] = 0;
    puVar12[0x6e] = 0;
    puVar12[0x70] = 0;
    puVar12[0x72] = 0;
    *(undefined4 *)(puVar12 + 0x73) = 0;
    puVar12[0xa1] = 0;
    puVar12[0x85] = 0;
    puVar12[0x84] = 0;
    puVar12[0x83] = 0;
    puVar12[0x82] = 0;
    puVar12[0xa2] = 0xffffffff;
    *(undefined4 *)(puVar12 + 0xa3) = 0xffffffff;
    *(undefined1 *)((long)puVar12 + 0x51c) = 0;
    puVar12[0xa0] = 0;
    puVar12[0x9f] = 0;
    puVar12[0x9e] = 0;
    puVar12[0x9d] = 0;
    puVar12[0x9c] = 0;
    puVar12[0x9b] = 0;
    puVar12[0x9a] = 0;
    puVar12[0x99] = 0;
    puVar12[0x98] = 0;
    puVar12[0x97] = 0;
    puVar12[0x96] = 0;
    puVar12[0x95] = 0;
    puVar12[0x93] = 0;
    puVar12[0x91] = 0;
    puVar12[0x8f] = 0;
    puVar12[0x8d] = 0;
    puVar12[0x8b] = 0;
    puVar12[0x89] = 0;
    puVar12[0x87] = 0;
    puVar12[0x87] = 0;
    puVar12[0x89] = 0;
    puVar12[0x8d] = 0;
    puVar12[0x8b] = 0;
    puVar12[0x8f] = 0;
    puVar12[0x91] = 0;
    puVar12[0x93] = 0;
    puVar12[0x95] = 0;
    puVar12[0x96] = FUN_7103346140;
    puVar12[0x97] = 0;
    *(undefined4 *)(puVar12 + 0x98) = 0;
    FUN_7103382c30(puVar12 + 0xa4,uVar23,pppplVar20,ppppbVar22,pppplVar24,param_6,param_7,param_8);
    puVar12[0xa8] = 0x87650000000000;
    *(undefined1 *)(puVar12 + 0xa9) = 0;
    puVar12[0xa6] = &PTR_FUN_7104f73d30;
    *(undefined4 *)(puVar12 + 0xa5) = 0;
    puVar12[0xaa] = 0xffffffffffffffff;
    puVar12[0xa7] = 0;
    *(undefined8 *)((long)puVar12 + 0x565) = 0;
    puVar12[0xac] = 0;
    puVar12[0xab] = 0;
    puVar12[0x41] = 0;
    puVar12[0x43] = 0;
    puVar12[0x45] = 0;
    puVar12[0x47] = 0;
    puVar12[0x49] = 0;
    puVar12[0x4b] = 0;
    puVar12[0x4d] = 0;
    puVar12[0x4f] = 0;
    puVar12[0xe] = FUN_71019a6540;
    puVar12[0xf] = 0;
    puVar12[0x12] = FUN_71019a6880;
    puVar12[0x13] = 0;
    puVar12[0x14] = FUN_71019a6920;
    puVar12[0x15] = 0;
    puVar12[0x18] = FUN_71019a77e0;
    puVar12[0x19] = 0;
    puVar12[0x1a] = FUN_71019a7880;
    puVar12[0x1b] = 0;
    puVar12[0x1e] = FUN_71019a7a70;
    puVar12[0x1f] = 0;
    puVar12[0x20] = FUN_71019a7b30;
    puVar12[0x21] = 0;
    puVar12[0x26] = FUN_71019a7fb0;
    puVar12[0x27] = 0;
    puVar12[0x28] = FUN_71019a85d0;
    puVar12[0x29] = 0;
    puVar12[0x2c] = FUN_71019a8970;
    puVar12[0x2d] = 0;
    puVar12[0x2e] = FUN_71019a8b30;
    puVar12[0x2f] = 0;
    puVar12[0x3e] = FUN_71019a9940;
    puVar12[0x3f] = 0;
    puVar12[0x40] = FUN_71019a9a30;
    puVar12[0x3c] = FUN_71019a9b20;
    puVar12[0x3d] = 0;
    puVar12[0x32] = FUN_71019a9b60;
    puVar12[0x33] = 0;
    puVar12[0x34] = FUN_71019aa670;
    puVar12[0x35] = 0;
    puVar12[0x38] = FUN_71019aac70;
    puVar12[0x39] = 0;
    puVar12[0x3a] = FUN_71019aacd0;
    puVar12[0x3b] = 0;
    puVar12[0x42] = FUN_71019aad50;
    puVar12[0x44] = FUN_71019aad80;
    puVar12[0x46] = FUN_71019ab7c0;
    puVar12[0x48] = FUN_71019abca0;
    puVar12[0x4a] = FUN_71019abf80;
    puVar12[0x4c] = FUN_71019ac040;
    puVar12[0x4e] = FUN_71019ac100;
    puVar12[0x10] = FUN_71019a6550;
    puVar12[0x11] = 0;
    puVar12[0x16] = FUN_71019a71a0;
    puVar12[0x17] = 0;
    puVar12[0x1c] = FUN_71019a7970;
    puVar12[0x1d] = 0;
    puVar12[0x22] = FUN_71019a7d70;
    puVar12[0x23] = 0;
    puVar12[0x2a] = FUN_71019a87e0;
    puVar12[0x2b] = 0;
    puVar12[0x30] = FUN_71019a93d0;
    puVar12[0x31] = 0;
    puVar12[0x36] = FUN_71019aabd0;
    puVar12[0x37] = 0;
    puVar12[0x24] = FUN_71019aad10;
    puVar12[0x25] = 0;
    if (0x12 < *(uint *)((long)puVar12 + 0x2cc)) goto LAB_71017fd384;
    *(undefined4 *)((long)puVar12 + (long)(int)*(uint *)((long)puVar12 + 0x2cc) * 4 + 0x280) = 0;
    puVar21 = &DAT_71045439a8;
    uVar23 = 1;
    FUN_71032cbf30(puVar12 + 4,*(long *)(lVar9 + 0x130),(ulong *)&DAT_71045439a8,(byte ****)0x1,
                   pppplVar24,param_6,param_7,param_8);
    lVar34 = *(long *)puVar12[4];
    if ((undefined8 *)(lVar34 + 8) != puVar16) {
      *(undefined8 *)puVar12[6] = **(undefined8 **)(lVar34 + 0x10);
      *(undefined8 *)(puVar12[6] + 8) = *(undefined8 *)(*(long *)(lVar34 + 0x10) + 8);
      lVar27 = *(long *)(lVar34 + 0x10);
      lVar34 = puVar12[6];
      if (lVar34 != lVar27) {
        **(undefined8 **)(lVar34 + 0x18) = **(undefined8 **)(lVar27 + 0x18);
        *(undefined8 *)(*(long *)(lVar34 + 0x18) + 8) =
             *(undefined8 *)(*(long *)(lVar27 + 0x18) + 8);
        *(undefined8 *)(*(long *)(lVar34 + 0x18) + 0x10) =
             *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x10);
        *(undefined8 *)(*(long *)(lVar34 + 0x18) + 0x18) =
             *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x18);
      }
    }
    FUN_7103776640(&local_1a0,(long)puVar16,(byte ****)"controller_amiibo",puVar21,uVar23,pppplVar24
                   ,param_6,param_7,param_8);
    uVar15 = local_198;
    if (&local_1a0 != puVar12 + 7) {
      local_198 = 0;
      uVar35 = puVar12[8];
      puVar12[8] = uVar15;
      if (uVar35 != 0) {
        uVar15 = *(ulong *)(uVar35 + 0x18);
        *(undefined ***)(uVar35 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar35 + 0x18) = 0;
        if (uVar15 != 0) {
          FUN_710392eb40(uVar15);
        }
        FUN_710392eb40(uVar35);
      }
    }
    uVar15 = local_198;
    plVar18 = puVar12 + 0x5c;
    local_1a0 = &PTR_FUN_710523d988;
    local_198 = 0;
    if (uVar15 != 0) {
      uVar35 = *(ulong *)(uVar15 + 0x18);
      *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar15 + 0x18) = 0;
      if (uVar35 != 0) {
        FUN_710392eb40(uVar35);
      }
      FUN_710392eb40(uVar15);
    }
    lVar34 = **(long **)puVar12[4];
    *(undefined4 *)(*(long *)(lVar34 + 0x600) + 0xdc) = 0x80;
    *(undefined4 *)(*(long *)(lVar34 + 0x600) + 0xe0) = 0x80;
    *(undefined4 *)(*(long *)(lVar34 + 0x600) + 0x18) = 0x80;
    local_1a0 = (undefined **)0x0;
    local_198 = 0x101;
    local_190 = 1;
    local_18c = 1;
    local_18a = 1;
    local_180 = 0;
    local_150 = (long *)0x0;
    local_188 = &DAT_41f0000000000000;
    local_120 = (long *)0x0;
    local_f0 = (long *)0x0;
    local_c0 = (long *)0x0;
    local_90 = (long *)0x0;
    local_80 = 0;
    FUN_710337df20((long)&local_1a0);
    ppppbVar22 = (byte ****)&local_1a0;
    local_1a0 = (undefined **)0x0;
    local_198 = CONCAT71(local_198._1_7_,1);
    FUN_7103770b30(plVar18,puVar16,(long ****)"selector_0",ppppbVar22,pppplVar24,param_6,param_7,
                   param_8);
    FUN_71037717d0(plVar18,0,"set_parts_btn_00",ppppbVar22,pppplVar24,param_6,param_7,param_8);
    lVar34 = *(long *)(*plVar18 + 0x1b8);
    if (lVar34 != 0) {
      lVar27 = *plVar18 + 0x1b8;
      lVar31 = lVar27;
      lVar29 = lVar34;
      do {
        bVar4 = *(int *)(lVar29 + 0x20) < 0;
        if (!bVar4) {
          lVar31 = lVar29;
        }
        lVar29 = *(long *)(lVar29 + (ulong)bVar4 * 8);
      } while (lVar29 != 0);
      if (((lVar31 != lVar27) && (*(int *)(lVar31 + 0x20) < 1)) &&
         (plVar36 = *(long **)(lVar31 + 0x28), plVar36 != (long *)0x0)) {
        (**(code **)(*plVar36 + 0x1f8))(plVar36,1);
        (**(code **)(*plVar36 + 0x388))(plVar36,0,0);
        lVar27 = *plVar18 + 0x1b8;
        lVar34 = *(long *)(*plVar18 + 0x1b8);
      }
      lVar31 = lVar27;
      if (lVar34 != 0) {
        do {
          bVar4 = *(int *)(lVar34 + 0x20) < 0;
          if (!bVar4) {
            lVar31 = lVar34;
          }
          lVar34 = *(long *)(lVar34 + (ulong)bVar4 * 8);
        } while (lVar34 != 0);
        if (((lVar31 != lVar27) && (*(int *)(lVar31 + 0x20) < 1)) &&
           (plVar36 = *(long **)(lVar31 + 0x28), plVar36 != (long *)0x0)) {
          (**(code **)(*plVar36 + 0x208))(plVar36,1);
          (**(code **)(*plVar36 + 0x388))(plVar36,0,0);
        }
      }
    }
    pcVar19 = "set_parts_btn_01";
    FUN_71037717d0(plVar18,1,"set_parts_btn_01",ppppbVar22,pppplVar24,param_6,param_7,param_8);
    plVar36 = (long *)*plVar18;
    plVar28 = (long *)plVar36[0x37];
    if (plVar28 != (long *)0x0) {
      plVar25 = plVar36 + 0x37;
      plVar37 = plVar25;
      plVar30 = plVar28;
      do {
        if (0 < (int)plVar30[4]) {
          plVar37 = plVar30;
        }
        plVar30 = (long *)plVar30[(int)plVar30[4] < 1];
      } while (plVar30 != (long *)0x0);
      if (((plVar37 != plVar25) && ((int)plVar37[4] < 2)) &&
         (plVar37 = (long *)plVar37[5], plVar37 != (long *)0x0)) {
        (**(code **)(*plVar37 + 0x1f8))(plVar37,1);
        pcVar19 = (char *)0x0;
        (**(code **)(*plVar37 + 0x388))(plVar37,0);
        plVar36 = (long *)*plVar18;
        plVar28 = (long *)plVar36[0x37];
        plVar25 = plVar36 + 0x37;
      }
      plVar37 = plVar25;
      if (plVar28 != (long *)0x0) {
        do {
          if (0 < (int)plVar28[4]) {
            plVar37 = plVar28;
          }
          plVar28 = (long *)plVar28[(int)plVar28[4] < 1];
        } while (plVar28 != (long *)0x0);
        if (((plVar37 != plVar25) && ((int)plVar37[4] < 2)) &&
           (plVar28 = (long *)plVar37[5], plVar28 != (long *)0x0)) {
          (**(code **)(*plVar28 + 0x208))(plVar28,1);
          pcVar19 = (char *)0x0;
          (**(code **)(*plVar28 + 0x388))(plVar28,0);
          plVar36 = (long *)*plVar18;
        }
      }
    }
    (**(code **)(*plVar36 + 0x60))(plVar36,0);
    FUN_7103776640(&local_1b0,(long)puVar16,(byte ****)"set_parts_keyhelp",pcVar19,ppppbVar22,
                   pppplVar24,param_6,param_7,param_8);
    FUN_7103776910(&local_1c0,(long)&local_1b0,(long ****)"set_txt_key",pcVar19,ppppbVar22,
                   pppplVar24,param_6,param_7,param_8);
    FUN_710377a120((long)&local_1c0,"mnu_amiibo_reading_helpguide_guide",pcVar19,ppppbVar22,
                   pppplVar24,param_6,param_7,param_8);
    uVar15 = local_1b8;
    local_1c0 = &PTR_FUN_710523d9a8;
    local_1b8 = 0;
    uVar23 = extraout_x1_13;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
      uVar23 = extraout_x1_14;
    }
    uVar15 = local_1a8;
    *(undefined1 *)(*(long *)(**(long **)puVar12[4] + 0x600) + 0x4aa) = 0;
    *(undefined2 *)(puVar12 + 1) = 0x101;
    *(undefined2 *)((long)puVar12 + 10) = local_1c4;
    *(undefined1 *)(puVar12 + 2) = 1;
    *(undefined4 *)((long)puVar12 + 0xc) = 0x11000;
    *(undefined4 *)((long)puVar12 + 0xc) = 0x11000;
    *(undefined2 *)((long)puVar12 + 0x11) = (undefined2)local_1c0;
    *(undefined1 *)((long)puVar12 + 0x13) = local_1c0._2_1_;
    *(undefined4 *)((long)puVar12 + 0x14) = 1;
    *(undefined1 *)(puVar12 + 3) = 0;
    lVar27 = **(long **)puVar12[4];
    *(undefined4 *)(*(long *)(lVar27 + 0x600) + 0x494) = 1;
    lVar34 = *(long *)(lVar27 + 0x608);
    lVar27 = *(long *)(lVar27 + 0x610);
    if (lVar34 != lVar27) {
      uVar35 = (lVar27 + -0x10) - lVar34;
      uVar6 = ((uint)(uVar35 >> 4) & 0xfffffff) + 1;
      if ((uVar6 & 3) != 0) {
        lVar31 = -((ulong)uVar6 & 3);
        do {
          plVar18 = (long *)(lVar34 + 8);
          lVar34 = lVar34 + 0x10;
          lVar31 = lVar31 + 1;
          *(undefined4 *)(*plVar18 + 0x494) = 1;
        } while (lVar31 != 0);
      }
      if (0x2f < uVar35) {
        do {
          *(undefined4 *)(*(long *)(lVar34 + 8) + 0x494) = 1;
          *(undefined4 *)(*(long *)(lVar34 + 0x18) + 0x494) = 1;
          *(undefined4 *)(*(long *)(lVar34 + 0x28) + 0x494) = 1;
          plVar18 = (long *)(lVar34 + 0x38);
          lVar34 = lVar34 + 0x40;
          *(undefined4 *)(*plVar18 + 0x494) = 1;
        } while (lVar27 != lVar34);
      }
    }
    local_1b0 = &PTR_FUN_710523d988;
    local_1a8 = 0;
    if (uVar15 != 0) {
      uVar35 = *(ulong *)(uVar15 + 0x18);
      *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar15 + 0x18) = 0;
      if (uVar35 != 0) {
        FUN_710392eb40(uVar35);
      }
      FUN_710392eb40(uVar15);
      uVar23 = extraout_x1_15;
    }
    if (alStack_b0 == local_90) {
      (**(code **)(*local_90 + 0x20))();
      uVar23 = extraout_x1_17;
    }
    else if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x28))();
      uVar23 = extraout_x1_16;
    }
    if (alStack_e0 == local_c0) {
      pcVar26 = *(code **)(*local_c0 + 0x20);
LAB_71017fcd88:
      (*pcVar26)();
      uVar23 = extraout_x1_18;
    }
    else if (local_c0 != (long *)0x0) {
      pcVar26 = *(code **)(*local_c0 + 0x28);
      goto LAB_71017fcd88;
    }
    if (alStack_110 == local_f0) {
      pcVar26 = *(code **)(*local_f0 + 0x20);
LAB_71017fcdb8:
      (*pcVar26)();
      uVar23 = extraout_x1_19;
    }
    else if (local_f0 != (long *)0x0) {
      pcVar26 = *(code **)(*local_f0 + 0x28);
      goto LAB_71017fcdb8;
    }
    if (alStack_140 == local_120) {
      (**(code **)(*local_120 + 0x20))();
      uVar23 = extraout_x1_21;
    }
    else if (local_120 != (long *)0x0) {
      (**(code **)(*local_120 + 0x28))();
      uVar23 = extraout_x1_20;
    }
    if (alStack_170 == local_150) {
      pcVar26 = *(code **)(*local_150 + 0x20);
LAB_71017fce24:
      (*pcVar26)();
      uVar23 = extraout_x1_22;
    }
    else if (local_150 != (long *)0x0) {
      pcVar26 = *(code **)(*local_150 + 0x28);
      goto LAB_71017fce24;
    }
    puVar11[0x10] = puVar12;
    puVar11[2] = &DAT_7105333600;
    uVar3 = DAT_7105333664;
    *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
    *(undefined4 *)((long)puVar11 + 0x6c) = uVar3;
    do {
      uVar6 = DAT_7105333650;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
      if (bVar4) {
        DAT_7105333650 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0' || (uVar6 & 1) != 0);
    puVar11[9] = DAT_7105333648;
    DAT_7105333650 = 0;
    DAT_7105333648 = puVar11;
    FUN_71032caea0((long)puVar11,uVar23,(long ****)pcVar19,ppppbVar22,pppplVar24,param_6,param_7,
                   param_8);
    lVar34 = *(long *)(lVar9 + 0x168);
    *(undefined8 **)(lVar9 + 0x168) = puVar11;
    if (lVar34 != 0) {
      FUN_71032cad20(lVar34);
    }
  }
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)pcVar19,ppppbVar22,pppplVar24,param_6,param_7,
                           param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
      local_1a0 = (undefined **)&DAT_00000088;
      pcVar19 = (char *)&local_1a0;
      uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
      if (((uVar15 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)pcVar19,ppppbVar22,pppplVar24,param_6,
                                   param_7,param_8), puVar11 != (undefined8 *)0x0))
      goto LAB_71017fcef0;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71017fcef0:
  *puVar11 = &PTR_FUN_71050a7088;
  puVar11[1] = 0;
  puVar11[0xc] = 0;
  puVar11[0xd] = 0x1ffffffff;
  puVar11[2] = 0;
  puVar11[3] = 0;
  *(undefined1 *)(puVar11 + 0xb) = 0;
  puVar11[0xf] = plVar1;
  *(undefined1 *)(puVar11 + 0xe) = 1;
  puVar11[9] = 0;
  puVar11[10] = 0;
  plVar18 = (long *)FUN_710392e290(0x10,0x128,(long ****)pcVar19,ppppbVar22,pppplVar24,param_6,
                                   param_7,param_8);
  if (plVar18 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
      local_1a0 = (undefined **)&DAT_00000128;
      pcVar19 = (char *)&local_1a0;
      uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
      if (((uVar15 & 1) != 0) &&
         (plVar18 = (long *)FUN_710392e290(0x10,0x128,(long ****)pcVar19,ppppbVar22,pppplVar24,
                                           param_6,param_7,param_8), plVar18 != (long *)0x0))
      goto LAB_71017fcf78;
    }
    plVar18 = (long *)0x0;
  }
LAB_71017fcf78:
  *plVar18 = (long)plVar1;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x80,(long ****)pcVar19,ppppbVar22,pppplVar24,param_6,param_7,
                           param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
      local_1a0 = (undefined **)&DAT_00000080;
      pcVar19 = (char *)&local_1a0;
      uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
      if (((uVar15 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x80,(long ****)pcVar19,ppppbVar22,pppplVar24,param_6,
                                   param_7,param_8), puVar12 != (undefined8 *)0x0))
      goto LAB_71017fcfd0;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_71017fcfd0:
  puVar12[2] = 0;
  *puVar12 = &PTR_FUN_7105181b40;
  puVar12[1] = puVar12 + 2;
  puVar12[5] = 0;
  puVar12[3] = 0;
  puVar12[4] = puVar12 + 5;
  puVar12[8] = 0;
  puVar12[6] = 0;
  puVar12[7] = puVar12 + 8;
  puVar12[0xc] = 0;
  puVar12[0xb] = 0;
  *(undefined4 *)(puVar12 + 0xf) = 0;
  puVar12[0xe] = 0;
  puVar12[9] = 0;
  puVar12[10] = puVar12 + 0xb;
  *(undefined4 *)(puVar12 + 0xd) = 2;
  plVar18[1] = (long)puVar12;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)pcVar19,ppppbVar22,pppplVar24,param_6,param_7,param_8);
  uVar23 = extraout_x1_23;
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
      local_1a0 = (undefined **)&DAT_00000008;
      pcVar19 = (char *)&local_1a0;
      auVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
      uVar23 = auVar38._8_8_;
      if (((auVar38._0_8_ & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)pcVar19,ppppbVar22,pppplVar24,param_6,param_7,
                                   param_8), uVar23 = extraout_x1_24, puVar12 != (undefined8 *)0x0))
      goto LAB_71017fd078;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_71017fd078:
  FUN_7103773200(puVar12,uVar23,(long ****)pcVar19,ppppbVar22,pppplVar24,param_6,param_7,param_8);
  plVar18[2] = (long)puVar12;
  FUN_7103776290(plVar18 + 3,extraout_x1_25,(long ****)pcVar19,ppppbVar22,pppplVar24,param_6,param_7
                 ,param_8);
  plVar18[8] = 0;
  plVar18[9] = 0;
  plVar18[6] = 0;
  plVar18[7] = 0;
  ppppbVar22 = (byte ****)0x1;
  plVar18[5] = (long)plVar18;
  *(undefined4 *)(plVar18 + 0x1d) = 0xffffffff;
  *(undefined1 *)((long)plVar18 + 0xec) = 0;
  plVar18[0x12] = 0;
  plVar18[0x1b] = 0;
  plVar18[0x1c] = 0xffffffff;
  plVar18[0x19] = 0;
  plVar18[0x1a] = 0;
  plVar18[0x17] = 0;
  plVar18[0x18] = 0;
  plVar18[0x15] = 0;
  plVar18[0x16] = 0;
  plVar18[0x13] = 0;
  plVar18[0x14] = 0;
  *(bool *)(plVar18 + 0x1e) = bVar5;
  *(undefined4 *)((long)plVar18 + 0xf1) = (undefined4)local_1a0;
  *(undefined1 *)((long)plVar18 + 0xf7) = local_1a0._6_1_;
  *(undefined2 *)((long)plVar18 + 0xf5) = local_1a0._4_2_;
  plVar18[0x1f] = (long)puVar33;
  *(char *)(plVar18 + 0x20) = (char)uVar10;
  *(undefined4 *)((long)plVar18 + 0x101) = (undefined4)local_1b0;
  *(undefined1 *)((long)plVar18 + 0x107) = local_1b0._6_1_;
  *(undefined2 *)((long)plVar18 + 0x105) = local_1b0._4_2_;
  *(undefined4 *)(plVar18 + 0x21) = 0;
  *(undefined1 *)(plVar18 + 0x24) = 0;
  *(undefined4 *)(plVar18 + 0x12) = 0;
  plVar18[0xe] = (long)FUN_710198df80;
  plVar18[0xf] = 0;
  plVar18[0x22] = 0x2dffff0000000000;
  plVar18[0x23] = 0;
  plVar18[10] = (long)FUN_710198dc00;
  plVar18[0xb] = 0;
  plVar18[0xc] = (long)FUN_710198dc10;
  plVar18[0xd] = 0;
  plVar18[0x10] = (long)FUN_710198e010;
  plVar18[0x11] = 0;
  FUN_71032cbf30(plVar18 + 2,*(long *)(lVar9 + 0x130),(ulong *)&DAT_7104543930,(byte ****)0x1,
                 pppplVar24,param_6,param_7,param_8);
  pppplVar20 = (long ****)&DAT_00001000;
  FUN_7103775dc0(*(long **)plVar18[2],0,(long ****)&DAT_00001000,ppppbVar22,pppplVar24,param_6,
                 param_7,param_8);
  lVar34 = *(long *)plVar18[2];
  if ((long *)(lVar34 + 8) != plVar18 + 3) {
    *(undefined8 *)plVar18[4] = **(undefined8 **)(lVar34 + 0x10);
    *(undefined8 *)(plVar18[4] + 8) = *(undefined8 *)(*(long *)(lVar34 + 0x10) + 8);
    lVar27 = *(long *)(lVar34 + 0x10);
    lVar34 = plVar18[4];
    if (lVar34 != lVar27) {
      **(undefined8 **)(lVar34 + 0x18) = **(undefined8 **)(lVar27 + 0x18);
      *(undefined8 *)(*(long *)(lVar34 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar27 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar34 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar34 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x18);
    }
  }
  uVar23 = extraout_x1_26;
  if ((char)plVar18[0x1e] != '\0') {
    uVar10 = FUN_7103263f80(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),plVar18[0x1f]);
    plVar18[0x22] = uVar10;
    uVar23 = extraout_x1_27;
  }
  puVar11[0x10] = plVar18;
  puVar11[2] = &DAT_7105333600;
  uVar3 = DAT_7105333664;
  *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar11 + 0x6c) = uVar3;
  do {
    uVar6 = DAT_7105333650;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar5) {
      DAT_7105333650 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0' || (uVar6 & 1) != 0);
  puVar11[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar11;
  FUN_71032caea0((long)puVar11,uVar23,pppplVar20,ppppbVar22,pppplVar24,param_6,param_7,param_8);
  lVar34 = *(long *)(lVar9 + 0x170);
  *(undefined8 **)(lVar9 + 0x170) = puVar11;
  if (lVar34 != 0) {
    FUN_71032cad20(lVar34);
  }
  if (*(uint *)(lVar9 + 0x114) < 0x13) {
    *(undefined4 *)(lVar9 + (long)(int)*(uint *)(lVar9 + 0x114) * 4 + 200) = 0;
    return;
  }
LAB_71017fd384:
                    /* WARNING: Subroutine does not return */
  abort();
}

