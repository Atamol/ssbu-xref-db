// addr:      71019bc840
// offset:    0x19bc840
// name:      FUN_71019bc840
// mangled:   
// signature: undefined __cdecl FUN_71019bc840(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019bc840(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  long ***ppplVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long **pplVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar10;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long ****pppplVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  byte ****ppppbVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong *puVar19;
  long ***ppplVar20;
  undefined1 auVar21 [16];
  undefined8 local_80;
  long ***local_78;
  undefined4 local_64;
  
  pppplVar12 = (long ****)&local_80;
  pppplVar11 = (long ****)&local_80;
  pppplVar13 = (long ****)&local_80;
  pppplVar14 = (long ****)&local_80;
  *param_1 = &PTR_FUN_71050a76a8;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0xf] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x470,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (undefined **)0x470;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      param_3 = pppplVar12;
      if (((uVar5 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x470,pppplVar12,param_4,param_5,param_6,param_7,param_8),
         param_3 = pppplVar12, puVar4 != (undefined8 *)0x0)) goto LAB_71019bc8f0;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_71019bc8f0:
  *(undefined2 *)(puVar4 + 1) = 0x100;
  *(undefined4 *)((long)puVar4 + 0xc) = 0x4001;
  *(undefined1 *)(puVar4 + 2) = 1;
  *(undefined4 *)((long)puVar4 + 0x14) = 1;
  *(undefined1 *)(puVar4 + 3) = 0;
  *puVar4 = &PTR_FUN_71050a7620;
  puVar6 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar10 = extraout_x1;
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (undefined **)&DAT_00000008;
      auVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      uVar10 = auVar21._8_8_;
      param_3 = pppplVar11;
      if (((auVar21._0_8_ & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,8,pppplVar11,param_4,param_5,param_6,param_7,param_8),
         uVar10 = extraout_x1_00, param_3 = pppplVar11, puVar6 != (undefined8 *)0x0))
      goto LAB_71019bc974;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_71019bc974:
  FUN_7103773200(puVar6,uVar10,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar4[4] = puVar6;
  puVar6 = puVar4 + 5;
  FUN_7103776290(puVar6,extraout_x1_01,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776290(puVar4 + 7,extraout_x1_02,param_3,param_4,param_5,param_6,param_7,param_8);
  pppplVar12 = (long ****)0x16c;
  puVar19 = puVar4 + 9;
  *puVar19 = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  *(undefined4 *)((long)puVar4 + 500) = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0xc] = puVar4;
  puVar4[0x3f] = 0xffffffff;
  *(undefined4 *)(puVar4 + 0x40) = 0xffffffff;
  *(undefined1 *)((long)puVar4 + 0x204) = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  memset(puVar4 + 0x11,0,0x16c);
  *(undefined4 *)(puVar4 + 0x41) = 0xffffffff;
  puVar4[0x44] = 0;
  puVar4[0x43] = 0;
  puVar4[0x42] = 0;
  puVar4[0x45] = param_2;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x80,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (undefined **)&DAT_00000080;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      pppplVar12 = pppplVar13;
      if (((uVar5 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,pppplVar13,param_4,param_5,param_6,param_7,param_8),
         pppplVar12 = pppplVar13, puVar7 != (undefined8 *)0x0)) goto LAB_71019bca3c;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71019bca3c:
  *puVar7 = &PTR_FUN_7105181b40;
  puVar7[2] = 0;
  puVar7[1] = puVar7 + 2;
  puVar7[5] = 0;
  puVar7[3] = 0;
  puVar7[4] = puVar7 + 5;
  puVar7[8] = 0;
  puVar7[6] = 0;
  puVar7[7] = puVar7 + 8;
  puVar7[0xb] = 0;
  puVar7[9] = 0;
  puVar7[10] = puVar7 + 0xb;
  *(undefined4 *)(puVar7 + 0xd) = 2;
  puVar7[0xc] = 0;
  *(undefined4 *)(puVar7 + 0xf) = 0;
  puVar7[0xe] = 0;
  puVar4[0x47] = puVar4 + 0x47;
  puVar4[0x4c] = 0;
  puVar4[0x4c] = FUN_7103345940;
  puVar4[0x4e] = 0;
  puVar4[0x4e] = FUN_7103345950;
  puVar4[0x52] = 0;
  puVar4[0x52] = FUN_7103345a70;
  puVar4[0x50] = 0;
  puVar4[0x50] = FUN_7103345b50;
  puVar4[0x54] = 0;
  puVar4[0x54] = FUN_7103345d80;
  puVar4[0x56] = 0;
  puVar4[0x56] = FUN_7103345eb0;
  puVar4[0x58] = 0;
  puVar4[0x58] = FUN_7103345f60;
  puVar4[0x46] = puVar7;
  puVar4[0x5a] = 0;
  puVar4[0x5a] = FUN_71033460a0;
  puVar4[0x4b] = 0;
  puVar4[0x4a] = 0;
  puVar4[0x49] = 0;
  puVar4[0x48] = 0;
  puVar4[0x68] = 0xffffffff;
  *(undefined4 *)(puVar4 + 0x69) = 0xffffffff;
  *(undefined1 *)((long)puVar4 + 0x34c) = 0;
  puVar4[0x67] = 0;
  puVar4[0x66] = 0;
  puVar4[0x65] = 0;
  puVar4[100] = 0;
  puVar4[99] = 0;
  puVar4[0x62] = 0;
  puVar4[0x61] = 0;
  puVar4[0x60] = 0;
  puVar4[0x5f] = 0;
  puVar4[0x5e] = 0;
  puVar4[0x5d] = 0;
  puVar4[0x5c] = 0;
  puVar4[0x5b] = 0;
  puVar4[0x59] = 0;
  puVar4[0x57] = 0;
  puVar4[0x55] = 0;
  puVar4[0x53] = 0;
  puVar4[0x51] = 0;
  puVar4[0x4f] = 0;
  puVar4[0x4d] = 0;
  puVar4[0x4d] = 0;
  puVar4[0x4f] = 0;
  puVar4[0x53] = 0;
  puVar4[0x51] = 0;
  puVar4[0x55] = 0;
  puVar4[0x57] = 0;
  puVar4[0x59] = 0;
  puVar4[0x5b] = 0;
  puVar4[0x5c] = FUN_7103346140;
  puVar4[0x5d] = 0;
  *(undefined4 *)(puVar4 + 0x5e) = 0;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0xb8,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (undefined **)&DAT_000000b8;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar5 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0xb8,pppplVar14,param_4,param_5,param_6,param_7,param_8),
         puVar7 != (undefined8 *)0x0)) goto LAB_71019bcc0c;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71019bcc0c:
  *(undefined4 *)(puVar7 + 0x15) = 0xffffffff;
  *puVar7 = &PTR_FUN_71050a7138;
  puVar7[1] = puVar7;
  puVar7[7] = 0;
  puVar7[8] = 0;
  *(undefined1 *)((long)puVar7 + 0xac) = 0;
  *(undefined4 *)(puVar7 + 0x16) = 0xffffffff;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[6] = FUN_71019904d0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  *(undefined4 *)(puVar7 + 10) = 0;
  puVar7[8] = FUN_71019904e0;
  puVar7[9] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[0x13] = 0;
  puVar7[0x14] = 0xffffffff;
  puVar7[0x11] = 0;
  puVar7[0x12] = 0;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar4[0x6c] = puVar4 + 0x6c;
  puVar4[0x71] = 0;
  puVar4[0x71] = FUN_71019b8240;
  puVar4[0x73] = 0;
  puVar4[0x73] = FUN_71019b8250;
  puVar4[0x88] = 0x87650000000000;
  puVar4[0x86] = &PTR_FUN_7104f73d30;
  puVar4[0x8a] = 0xffffffffffffffff;
  puVar4[0x6a] = puVar7;
  *(undefined4 *)(puVar4 + 0x6b) = 0;
  puVar4[0x6f] = 0;
  puVar4[0x6e] = 0;
  puVar4[0x6d] = 0;
  puVar4[0x70] = 0;
  puVar4[0x7f] = 0xffffffff;
  *(undefined4 *)(puVar4 + 0x80) = 0xffffffff;
  *(undefined1 *)((long)puVar4 + 0x404) = 0;
  puVar4[0x7e] = 0;
  puVar4[0x7d] = 0;
  puVar4[0x7c] = 0;
  puVar4[0x7b] = 0;
  puVar4[0x7a] = 0;
  puVar4[0x79] = 0;
  puVar4[0x78] = 0;
  puVar4[0x77] = 0;
  puVar4[0x76] = 0;
  puVar4[0x75] = 0;
  puVar4[0x74] = 0;
  puVar4[0x72] = 0;
  puVar4[0x81] = 0;
  puVar4[0x72] = 0;
  puVar4[0x74] = 0;
  *(undefined4 *)(puVar4 + 0x75) = 0;
  *(undefined1 *)(puVar4 + 0x82) = 0;
  *(undefined1 *)((long)puVar4 + 0x414) = 0;
  *(undefined1 *)((long)puVar4 + 0x41c) = 0;
  puVar4[0x87] = 0;
  *(undefined1 *)(puVar4 + 0x89) = 0;
  *(undefined4 *)(puVar4 + 0x85) = 0;
  puVar4[0x8c] = 0;
  puVar4[0x8b] = 0;
  *(undefined1 *)(puVar4 + 0x8d) = 0;
  puVar4[0x11] = FUN_71019b8420;
  puVar4[0x12] = 0;
  puVar4[0x15] = FUN_71019b8770;
  puVar4[0x16] = 0;
  puVar4[0x17] = FUN_71019b8840;
  puVar4[0x18] = 0;
  puVar4[0x1b] = FUN_71019b9780;
  puVar4[0x1c] = 0;
  puVar4[0x1f] = FUN_71019b98c0;
  puVar4[0x20] = 0;
  puVar4[0x23] = FUN_71019bab50;
  puVar4[0x24] = 0;
  puVar4[0x1d] = FUN_71019babf0;
  puVar4[0x1e] = 0;
  puVar4[0x27] = FUN_71019bacf0;
  puVar4[0x28] = 0;
  puVar4[0x29] = FUN_71019bade0;
  puVar4[0x2a] = 0;
  puVar4[0x13] = FUN_71019b8430;
  puVar4[0x14] = 0;
  puVar4[0x2d] = FUN_71019bb340;
  puVar4[0x2e] = 0;
  puVar4[0x19] = FUN_71019b91e0;
  puVar4[0x1a] = 0;
  puVar4[0x2f] = FUN_71019bb3d0;
  puVar4[0x30] = 0;
  puVar4[0x21] = FUN_71019ba8b0;
  puVar4[0x22] = 0;
  puVar4[0x25] = FUN_71019bac50;
  puVar4[0x26] = 0;
  puVar4[0x2b] = FUN_71019bb060;
  puVar4[0x2c] = 0;
  puVar4[0x31] = FUN_71019bb510;
  puVar4[0x32] = 0;
  puVar4[0x33] = FUN_71019bb700;
  puVar4[0x34] = 0;
  if (0x12 < *(uint *)((long)puVar4 + 500)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)((long)puVar4 + (long)(int)*(uint *)((long)puVar4 + 500) * 4 + 0x1a8) = 0;
  pppplVar12 = (long ****)&DAT_71045439e0;
  ppppbVar15 = (byte ****)0x1;
  FUN_71032cbf30(puVar4 + 4,*(long *)puVar4[0x45],(ulong *)&DAT_71045439e0,(byte ****)0x1,param_5,
                 param_6,param_7,param_8);
  lVar16 = *(long *)puVar4[4];
  if ((undefined8 *)(lVar16 + 8) != puVar6) {
    *(undefined8 *)puVar4[6] = **(undefined8 **)(lVar16 + 0x10);
    *(undefined8 *)(puVar4[6] + 8) = *(undefined8 *)(*(long *)(lVar16 + 0x10) + 8);
    lVar17 = *(long *)(lVar16 + 0x10);
    lVar16 = puVar4[6];
    if (lVar16 != lVar17) {
      **(undefined8 **)(lVar16 + 0x18) = **(undefined8 **)(lVar17 + 0x18);
      *(undefined8 *)(*(long *)(lVar16 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar17 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar17 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar17 + 0x18) + 0x18);
    }
  }
  FUN_7103776640(&local_80,(long)puVar6,(byte ****)"set_parts_amiibo_chip_05",pppplVar12,ppppbVar15,
                 param_5,param_6,param_7,param_8);
  ppplVar3 = local_78;
  if (&local_80 != puVar4 + 7) {
    local_78 = (long ***)0x0;
    uVar5 = puVar4[8];
    puVar4[8] = ppplVar3;
    if (uVar5 != 0) {
      uVar8 = *(ulong *)(uVar5 + 0x18);
      *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar5 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar5);
    }
  }
  ppplVar3 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = (long ***)0x0;
  if (ppplVar3 != (long ***)0x0) {
    uVar5 = *(ulong *)((long)ppplVar3 + 0x18);
    *(undefined ***)((long)ppplVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppplVar3 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40((ulong)ppplVar3);
  }
  FUN_7103776cd0(&local_80,(long)puVar6,"chip_pos",pppplVar12,ppppbVar15,param_5,param_6,param_7,
                 param_8);
  ppplVar3 = (long ***)local_80;
  lVar16 = (long)local_78 - (long)local_80;
  uVar5 = lVar16 >> 4;
  if ((long ***)local_80 != (long ***)0x0) {
    ppplVar20 = local_78;
    if (local_78 != (long ***)local_80) {
      do {
        ppplVar20 = ppplVar20 + -2;
        (*(code *)**ppplVar20)(ppplVar20);
      } while (ppplVar3 != ppplVar20);
      local_78 = ppplVar3;
      if (ppplVar3 == (long ***)0x0) goto LAB_71019bcfa8;
    }
    local_78 = ppplVar3;
    FUN_710392eb40((ulong)ppplVar3);
  }
LAB_71019bcfa8:
  FUN_71019bb740(puVar19,uVar5,pppplVar12,ppppbVar15,param_5,param_6,param_7,param_8);
  if (lVar16 != 0) {
    uVar8 = 0;
    do {
      pppplVar12 = (long ****)(uVar8 & 0xffffffff);
      FUN_7103776640(&local_80,(long)puVar6,(byte ****)"set_parts_amiibo_chip_%02d",pppplVar12,
                     ppppbVar15,param_5,param_6,param_7,param_8);
      if ((undefined8 *)puVar4[10] == (undefined8 *)puVar4[0xb]) {
        FUN_71019bb8f0((long *)puVar19,&local_80,pppplVar12,ppppbVar15,param_5,param_6,param_7,
                       param_8);
      }
      else {
        FUN_7103776390((undefined8 *)puVar4[10],&local_80,pppplVar12,ppppbVar15,param_5,param_6,
                       param_7,param_8);
        puVar4[10] = puVar4[10] + 0x10;
      }
      ppplVar3 = local_78;
      local_80 = &PTR_FUN_710523d988;
      local_78 = (long ***)0x0;
      if (ppplVar3 != (long ***)0x0) {
        pplVar9 = ppplVar3[3];
        ppplVar3[2] = (long **)&PTR_FUN_710523d9a8;
        ppplVar3[3] = (long **)0x0;
        if (pplVar9 != (long **)0x0) {
          FUN_710392eb40((ulong)pplVar9);
        }
        FUN_710392eb40((ulong)ppplVar3);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar5);
  }
  *(undefined1 *)(*(long *)(**(long **)puVar4[4] + 0x600) + 0x4aa) = 0;
  *(undefined2 *)(puVar4 + 1) = 0x101;
  *(undefined2 *)((long)puVar4 + 10) = (undefined2)local_64;
  *(undefined1 *)(puVar4 + 2) = 1;
  *(undefined4 *)((long)puVar4 + 0xc) = 0x11000;
  *(undefined4 *)((long)puVar4 + 0xc) = 0x11000;
  *(undefined2 *)((long)puVar4 + 0x11) = (undefined2)local_80;
  *(undefined1 *)((long)puVar4 + 0x13) = local_80._2_1_;
  *(undefined4 *)((long)puVar4 + 0x14) = 1;
  *(undefined1 *)(puVar4 + 3) = 0;
  lVar17 = **(long **)puVar4[4];
  *(undefined4 *)(*(long *)(lVar17 + 0x600) + 0x494) = 1;
  lVar16 = *(long *)(lVar17 + 0x608);
  lVar17 = *(long *)(lVar17 + 0x610);
  if (lVar16 != lVar17) {
    uVar5 = (lVar17 + -0x10) - lVar16;
    uVar2 = ((uint)(uVar5 >> 4) & 0xfffffff) + 1;
    if ((uVar2 & 3) != 0) {
      lVar18 = -((ulong)uVar2 & 3);
      do {
        plVar1 = (long *)(lVar16 + 8);
        lVar16 = lVar16 + 0x10;
        lVar18 = lVar18 + 1;
        *(undefined4 *)(*plVar1 + 0x494) = 1;
      } while (lVar18 != 0);
    }
    if (0x2f < uVar5) {
      do {
        *(undefined4 *)(*(long *)(lVar16 + 8) + 0x494) = 1;
        *(undefined4 *)(*(long *)(lVar16 + 0x18) + 0x494) = 1;
        *(undefined4 *)(*(long *)(lVar16 + 0x28) + 0x494) = 1;
        plVar1 = (long *)(lVar16 + 0x38);
        lVar16 = lVar16 + 0x40;
        *(undefined4 *)(*plVar1 + 0x494) = 1;
      } while (lVar17 != lVar16);
    }
  }
  param_1[0x10] = puVar4;
  return;
}

