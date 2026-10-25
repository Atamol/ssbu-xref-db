// addr:      71025d9250
// offset:    0x25d9250
// name:      FUN_71025d9250
// mangled:   
// signature: undefined __cdecl FUN_71025d9250(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)


/* WARNING: Removing unreachable block (ram,0x0071025da6e0) */

void FUN_71025d9250(long *param_1,undefined8 param_2,long *********param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   long ******param_7,long ***param_8)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined1 auVar4 [16];
  long ********pppppppplVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  long *plVar16;
  long ********pppppppplVar17;
  long ********pppppppplVar18;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  ulong extraout_x1_07;
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
  undefined8 uVar19;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  char *pcVar20;
  char *pcVar21;
  byte ****ppppbVar22;
  int iVar23;
  undefined8 *puVar24;
  long lVar25;
  long *******ppppppplVar26;
  long ******pppppplVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  ulong *puVar34;
  long *plVar35;
  byte bVar36;
  undefined8 *puVar37;
  long *plVar38;
  int iVar39;
  byte *pbVar40;
  uint uVar41;
  long *plVar42;
  long *********ppppppppplVar43;
  long ****pppplVar44;
  ulong *puVar45;
  ulong uVar46;
  ulong uVar47;
  long *plVar48;
  ulong *puVar49;
  ulong uVar50;
  long ********pppppppplVar51;
  long *******ppppppplVar52;
  ulong *puVar53;
  long *********ppppppppplVar54;
  long *******ppppppplVar55;
  long ****pppplVar56;
  long *********ppppppppplVar57;
  ulong *puVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined1 auVar63 [16];
  ulong local_200;
  uint local_1e8 [2];
  long ********local_1e0;
  byte *pbStack_1d8;
  long ********local_1d0;
  byte *pbStack_1c8;
  long ********local_1c0;
  long ********local_1b8;
  uint local_1a8 [2];
  undefined8 local_1a0;
  long ********pppppppplStack_198;
  long ********local_190;
  long *plStack_188;
  long *local_180;
  ulong uStack_178;
  undefined8 local_170;
  ulong uStack_168;
  ushort local_a0;
  
  (**(code **)(*param_1 + 0x540))(&local_1a0);
  uVar46 = param_1[0x38];
  if (uVar46 != 0) {
    uVar50 = param_1[0x39];
    if (uVar50 == uVar46) {
      param_1[0x39] = uVar46;
      uVar50 = uVar46;
    }
    else {
      do {
        while( true ) {
          plVar42 = *(long **)(uVar50 - 8);
          uVar50 = uVar50 - 0x10;
          if (plVar42 != (long *)0x0) break;
LAB_71025d92d0:
          if (uVar50 == uVar46) goto LAB_71025d92fc;
        }
        plVar48 = plVar42 + 1;
        do {
          lVar29 = *plVar48;
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar48,0x10);
          if (bVar7) {
            *plVar48 = lVar29 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar29 != 0) goto LAB_71025d92d0;
        (**(code **)(*plVar42 + 0x10))(plVar42);
        std::__shared_weak_count::__release_weak();
      } while (uVar50 != uVar46);
LAB_71025d92fc:
      uVar50 = param_1[0x38];
      param_1[0x39] = uVar46;
    }
    if (uVar50 != 0) {
      FUN_710392eb40(uVar50);
    }
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x38] = 0;
  }
  param_1[0x38] = (long)local_1a0;
  param_1[0x39] = (long)pppppppplStack_198;
  param_1[0x3a] = (long)local_190;
  if (local_1a0 == pppppppplStack_198) {
    FUN_710353da30((uint *)&local_1a0,0x32887dab3a);
    uVar8 = (uint)local_1a0;
    if ((uint)local_1a0 != 0xffffff) {
      FUN_7102610650(param_1 + 0x33,(uint *)&local_1a0,param_3,(byte ****)param_4,(long ****)param_5
                     ,param_6,param_7,param_8);
      FUN_7103540b10(DAT_7105332f20,uVar8,param_3,(byte ****)param_4,(long ****)param_5,param_6,
                     param_7,param_8);
      local_1a0 = (long ********)CONCAT44(local_1a0._4_4_,0xffffff);
    }
  }
  else {
    ppppppplVar55 = *local_1a0;
    ppppppplVar26 = local_1a0[1];
    if (ppppppplVar26 != (long *******)0x0) {
      ppppppplVar52 = ppppppplVar26 + 1;
      do {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppppplVar52,0x10);
        if (bVar7) {
          *ppppppplVar52 = (long ******)((long)*ppppppplVar52 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar42 = (long *)param_1[0x34];
    param_1[0x33] = (long)ppppppplVar55;
    param_1[0x34] = (long)ppppppplVar26;
    if (plVar42 != (long *)0x0) {
      plVar48 = plVar42 + 1;
      do {
        lVar29 = *plVar48;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar48,0x10);
        if (bVar7) {
          *plVar48 = lVar29 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*plVar42 + 0x10))(plVar42);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  plVar42 = param_1 + 0x33;
  FUN_71025e46e0((ulong)param_1,0);
  (**(code **)(*param_1 + 0x548))(param_1);
  (**(code **)(*param_1 + 0x558))(param_1);
  plStack_188 = param_1 + 1;
  pppppppplStack_198 = (long ********)0x0;
  local_190 = (long ********)0x0;
  local_1a0 = (long ********)0x0;
  puVar10 = (undefined8 *)param_1[0x36];
  local_180 = plVar42;
  if ((undefined8 *)param_1[0x35] != puVar10) {
    pppppppplVar51 = (long ********)0x0;
    pppppppplVar17 = (long ********)0x0;
    puVar24 = (undefined8 *)param_1[0x35];
    do {
      while( true ) {
        puVar37 = puVar24 + 1;
        ppppppplVar55 = (long *******)*puVar24;
        puVar24 = puVar37;
        if (local_190 <= pppppppplVar51) break;
        *pppppppplVar51 = ppppppplVar55;
        pppppppplVar51 = pppppppplStack_198 + 1;
        pppppppplStack_198 = pppppppplVar51;
        if (puVar10 == puVar37) goto LAB_71025d9564;
      }
      ppppppppplVar43 = (long *********)((long)pppppppplVar51 - (long)pppppppplVar17);
      uVar46 = ((long)ppppppppplVar43 >> 3) + 1;
      if (uVar46 >> 0x3d != 0) goto LAB_71025dd4f0;
      if ((ulong)((long)local_190 - (long)pppppppplVar17 >> 3) < 0xfffffffffffffff) {
        uVar50 = (long)local_190 - (long)pppppppplVar17 >> 2;
        if (uVar46 <= uVar50) {
          uVar46 = uVar50;
        }
        if (uVar46 != 0) {
          if (uVar46 >> 0x3d == 0) goto LAB_71025d94bc;
          goto LAB_71025dd4f8;
        }
LAB_71025d951c:
        pppppppplVar18 = (long ********)0x0;
      }
      else {
        uVar46 = 0x1fffffffffffffff;
LAB_71025d94bc:
        pppppppplVar51 = (long ********)(uVar46 * 8);
        if (pppppppplVar51 == (long ********)0x0) {
          pppppppplVar51 = (long ********)0x1;
        }
        pppppppplVar18 =
             (long ********)
             FUN_710392e290(0x10,pppppppplVar51,(long ****)param_3,(byte ****)param_4,
                            (long ****)param_5,param_6,param_7,param_8);
        if (pppppppplVar18 == (long ********)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1d0 = (long ********)((ulong)local_1d0 & 0xffffffff00000000);
            param_3 = &local_1c0;
            local_1c0 = pppppppplVar51;
            uVar50 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d0);
            if (((uVar50 & 1) != 0) &&
               (pppppppplVar18 =
                     (long ********)
                     FUN_710392e290(0x10,pppppppplVar51,(long ****)param_3,(byte ****)param_4,
                                    (long ****)param_5,param_6,param_7,param_8),
               pppppppplVar18 != (long ********)0x0)) goto LAB_71025d9520;
          }
          goto LAB_71025d951c;
        }
      }
LAB_71025d9520:
      pppppppplVar51 = pppppppplVar18 + ((long)ppppppppplVar43 >> 3) + 1;
      pppppppplVar18[(long)ppppppppplVar43 >> 3] = ppppppplVar55;
      if (0 < (long)ppppppppplVar43) {
        memcpy(pppppppplVar18,pppppppplVar17,(size_t)ppppppppplVar43);
        param_3 = ppppppppplVar43;
      }
      local_1a0 = pppppppplVar18;
      pppppppplStack_198 = pppppppplVar51;
      local_190 = pppppppplVar18 + uVar46;
      if (pppppppplVar17 != (long ********)0x0) {
        FUN_710392eb40((ulong)pppppppplVar17);
      }
      pppppppplVar17 = pppppppplVar18;
    } while (puVar10 != puVar37);
  }
LAB_71025d9564:
  (**(code **)(*(long *)param_1[0x61] + 0x10))((long *)param_1[0x61],&local_1a0);
  if (local_1a0 != (long ********)0x0) {
    pppppppplStack_198 = local_1a0;
    FUN_710392eb40((ulong)local_1a0);
  }
  (**(code **)(*param_1 + 0x560))(param_1);
  (**(code **)(*param_1 + 0x568))(param_1);
  (**(code **)(*param_1 + 0x570))(param_1);
  (**(code **)(*param_1 + 0x578))(param_1);
  (**(code **)(*param_1 + 0x580))(param_1);
  FUN_710353da30(local_1e8,0x302741d7b2);
  uVar46 = extraout_x1;
  if (local_1e8[0] != 0xffffff) {
    plVar48 = param_1 + 0x30;
    if (param_1[0x30] != 0) {
      FUN_710392eb40(param_1[0x30]);
    }
    *plVar48 = 0;
    param_1[0x31] = 0;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x1b80,(long ****)param_3,(byte ****)param_4,(long ****)param_5,
                             param_6,param_7,param_8);
    uVar46 = extraout_x1_00;
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1c0 = (long ********)((ulong)local_1c0 & 0xffffffff00000000);
        local_1a0 = (long ********)0x1b80;
        param_3 = (long *********)&local_1a0;
        auVar63 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c0);
        uVar46 = auVar63._8_8_;
        if (((auVar63._0_8_ & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x1b80,(long ****)param_3,(byte ****)param_4,
                                     (long ****)param_5,param_6,param_7,param_8),
           uVar46 = extraout_x1_01, puVar10 != (undefined8 *)0x0)) goto LAB_71025d966c;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71025d966c:
    uVar8 = local_1e8[0];
    *puVar10 = 0x3f80000000000000;
    puVar10[0x50] = 0x3f80000000000000;
    puVar10[100] = 0x3f80000000000000;
    puVar10[0x78] = 0x3f80000000000000;
    puVar10[0x8c] = 0x3f80000000000000;
    puVar10[0xa0] = 0x3f80000000000000;
    puVar10[0xb4] = 0x3f80000000000000;
    puVar10[200] = 0x3f80000000000000;
    puVar10[0xdc] = 0x3f80000000000000;
    puVar10[0xf0] = 0x3f80000000000000;
    puVar10[600] = 0x3f80000000000000;
    puVar10[0x244] = 0x3f80000000000000;
    puVar10[0x230] = 0x3f80000000000000;
    puVar10[0x21c] = 0x3f80000000000000;
    puVar10[0x208] = 0x3f80000000000000;
    puVar10[500] = 0x3f80000000000000;
    puVar10[0x1e0] = 0x3f80000000000000;
    puVar10[0x1cc] = 0x3f80000000000000;
    puVar10[0x1b8] = 0x3f80000000000000;
    puVar10[0x1a4] = 0x3f80000000000000;
    puVar10[400] = 0x3f80000000000000;
    puVar10[0x17c] = 0x3f80000000000000;
    puVar10[0x168] = 0x3f80000000000000;
    puVar10[0x154] = 0x3f80000000000000;
    puVar10[0x140] = 0x3f80000000000000;
    puVar10[300] = 0x3f80000000000000;
    puVar10[0x118] = 0x3f80000000000000;
    puVar10[0x104] = 0x3f80000000000000;
    puVar10[0x26c] = 0x3f80000000000000;
    puVar10[0x280] = 0x3f80000000000000;
    puVar10[0x294] = 0x3f80000000000000;
    puVar10[0x2a8] = 0x3f80000000000000;
    puVar10[700] = 0x3f80000000000000;
    puVar10[0x2d0] = 0x3f80000000000000;
    puVar10[0x2e4] = 0x3f80000000000000;
    puVar10[0x2f8] = 0x3f80000000000000;
    puVar10[0x30c] = 0x3f80000000000000;
    puVar10[800] = 0x3f80000000000000;
    puVar10[0x334] = 0x3f80000000000000;
    puVar10[0x348] = 0x3f80000000000000;
    *(undefined4 *)(puVar10 + 1) = 0;
    *(undefined2 *)(puVar10 + 2) = 0;
    *(undefined2 *)(puVar10 + 8) = 0;
    *(undefined2 *)(puVar10 + 0xe) = 0;
    *(undefined4 *)(puVar10 + 0x15) = 0;
    *(undefined2 *)(puVar10 + 0x16) = 0;
    *(undefined2 *)(puVar10 + 0x1c) = 0;
    *(undefined2 *)(puVar10 + 0x22) = 0;
    *(undefined4 *)(puVar10 + 0x29) = 0;
    *(undefined2 *)(puVar10 + 0x2a) = 0;
    *(undefined2 *)(puVar10 + 0x30) = 0;
    *(undefined2 *)(puVar10 + 0x36) = 0;
    *(undefined4 *)(puVar10 + 0x3d) = 0;
    *(undefined2 *)(puVar10 + 0x3e) = 0;
    *(undefined2 *)(puVar10 + 0x44) = 0;
    puVar10[0x45] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0x4a) = 0;
    puVar10[0x4b] = 0x724832b32;
    *(undefined4 *)(puVar10 + 0x51) = 0;
    *(undefined2 *)(puVar10 + 0x52) = 0;
    puVar10[0x53] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0x58) = 0;
    puVar10[0x59] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0x5e) = 0;
    puVar10[0x5f] = 0x724832b32;
    *(undefined4 *)(puVar10 + 0x65) = 0;
    *(undefined2 *)(puVar10 + 0x66) = 0;
    puVar10[0x67] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0x6c) = 0;
    puVar10[0x6d] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0x72) = 0;
    puVar10[0x73] = 0x724832b32;
    *(undefined4 *)(puVar10 + 0x79) = 0;
    *(undefined2 *)(puVar10 + 0x7a) = 0;
    puVar10[0x7b] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0x80) = 0;
    puVar10[0x81] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0x86) = 0;
    puVar10[0x87] = 0x724832b32;
    *(undefined4 *)(puVar10 + 0x8d) = 0;
    *(undefined2 *)(puVar10 + 0x8e) = 0;
    puVar10[0x8f] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0x94) = 0;
    puVar10[0x95] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0x9a) = 0;
    puVar10[0x9b] = 0x724832b32;
    *(undefined4 *)(puVar10 + 0xa1) = 0;
    *(undefined2 *)(puVar10 + 0xa2) = 0;
    puVar10[0xa3] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0xa8) = 0;
    puVar10[0xa9] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0xae) = 0;
    puVar10[0xaf] = 0x724832b32;
    *(undefined4 *)(puVar10 + 0xb5) = 0;
    *(undefined2 *)(puVar10 + 0xb6) = 0;
    puVar10[0xb7] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0xbc) = 0;
    puVar10[0xbd] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0xc2) = 0;
    puVar10[0xc3] = 0x724832b32;
    *(undefined4 *)(puVar10 + 0xc9) = 0;
    *(undefined2 *)(puVar10 + 0xca) = 0;
    puVar10[0xcb] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0xd0) = 0;
    puVar10[0xd1] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0xd6) = 0;
    puVar10[0xd7] = 0x724832b32;
    *(undefined4 *)(puVar10 + 0xdd) = 0;
    *(undefined2 *)(puVar10 + 0xde) = 0;
    puVar10[0xdf] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0xe4) = 0;
    puVar10[0xe5] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0xea) = 0;
    puVar10[0xeb] = 0x724832b32;
    *(undefined4 *)(puVar10 + 0xf1) = 0;
    *(undefined2 *)(puVar10 + 0xf2) = 0;
    puVar10[0xf3] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0xf8) = 0;
    puVar10[0xf9] = 0x724832b32;
    puVar10[0x25b] = 0x724832b32;
    *(undefined4 *)(puVar10 + 0x259) = 0;
    *(undefined2 *)(puVar10 + 0x25a) = 0;
    *(undefined2 *)(puVar10 + 0x252) = 0;
    puVar10[0x253] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0x24c) = 0;
    puVar10[0x24d] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0x246) = 0;
    puVar10[0x247] = 0x724832b32;
    *(undefined4 *)(puVar10 + 0x245) = 0;
    *(undefined2 *)(puVar10 + 0x23e) = 0;
    puVar10[0x23f] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0x238) = 0;
    puVar10[7] = 0x7fb997a80;
    puVar10[0xd] = 0x7fb997a80;
    puVar10[0x239] = 0x724832b32;
    *(undefined4 *)(puVar10 + 0x231) = 0;
    *(undefined2 *)(puVar10 + 0x232) = 0;
    puVar10[0x233] = 0x724832b32;
    puVar10[0x1b] = 0x7fb997a80;
    puVar10[0x21] = 0x7fb997a80;
    puVar10[0x22b] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0x22a) = 0;
    puVar10[0x225] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0x224) = 0;
    puVar10[0x2f] = 0x7fb997a80;
    puVar10[0x35] = 0x7fb997a80;
    puVar10[0x21f] = 0x724832b32;
    puVar10[0x41] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x21d) = 0;
    *(undefined2 *)(puVar10 + 0x21e) = 0;
    puVar10[0x42] = 0x7fb997a80;
    puVar10[0x43] = 0x7fb997a80;
    puVar10[0x46] = 0x7fb997a80;
    puVar10[0x47] = 0x7fb997a80;
    puVar10[0x48] = 0x7fb997a80;
    puVar10[0x49] = 0x7fb997a80;
    puVar10[0x4c] = 0x7fb997a80;
    puVar10[0x4d] = 0x7fb997a80;
    puVar10[0x4e] = 0x7fb997a80;
    puVar10[0x4f] = 0x7fb997a80;
    puVar10[0x54] = 0x7fb997a80;
    puVar10[0x55] = 0x7fb997a80;
    puVar10[0x56] = 0x7fb997a80;
    puVar10[0x57] = 0x7fb997a80;
    puVar10[0x5a] = 0x7fb997a80;
    puVar10[0x5b] = 0x7fb997a80;
    puVar10[0x5c] = 0x7fb997a80;
    puVar10[0x5d] = 0x7fb997a80;
    puVar10[0x60] = 0x7fb997a80;
    puVar10[0x61] = 0x7fb997a80;
    puVar10[0x62] = 0x7fb997a80;
    puVar10[99] = 0x7fb997a80;
    puVar10[0x68] = 0x7fb997a80;
    puVar10[0x69] = 0x7fb997a80;
    puVar10[0x6a] = 0x7fb997a80;
    puVar10[0x6b] = 0x7fb997a80;
    puVar10[0x6e] = 0x7fb997a80;
    puVar10[0x6f] = 0x7fb997a80;
    puVar10[0x70] = 0x7fb997a80;
    puVar10[0x71] = 0x7fb997a80;
    puVar10[0x74] = 0x7fb997a80;
    puVar10[0x75] = 0x7fb997a80;
    puVar10[0x76] = 0x7fb997a80;
    puVar10[0x77] = 0x7fb997a80;
    puVar10[0x7c] = 0x7fb997a80;
    puVar10[0x7d] = 0x7fb997a80;
    puVar10[0x7e] = 0x7fb997a80;
    puVar10[0x7f] = 0x7fb997a80;
    puVar10[0x82] = 0x7fb997a80;
    puVar10[0x83] = 0x7fb997a80;
    puVar10[0x84] = 0x7fb997a80;
    puVar10[0x85] = 0x7fb997a80;
    puVar10[0x88] = 0x7fb997a80;
    puVar10[0x89] = 0x7fb997a80;
    puVar10[0x8a] = 0x7fb997a80;
    puVar10[0x8b] = 0x7fb997a80;
    puVar10[0x90] = 0x7fb997a80;
    puVar10[0x91] = 0x7fb997a80;
    puVar10[0x92] = 0x7fb997a80;
    puVar10[0x93] = 0x7fb997a80;
    puVar10[0x96] = 0x7fb997a80;
    puVar10[0x97] = 0x7fb997a80;
    puVar10[0x98] = 0x7fb997a80;
    puVar10[0x99] = 0x7fb997a80;
    puVar10[0x9c] = 0x7fb997a80;
    puVar10[0x9d] = 0x7fb997a80;
    puVar10[0x9e] = 0x7fb997a80;
    puVar10[0x9f] = 0x7fb997a80;
    puVar10[0xa4] = 0x7fb997a80;
    puVar10[0xa5] = 0x7fb997a80;
    puVar10[0xa6] = 0x7fb997a80;
    puVar10[0xa7] = 0x7fb997a80;
    puVar10[0xaa] = 0x7fb997a80;
    puVar10[0xab] = 0x7fb997a80;
    puVar10[0xac] = 0x7fb997a80;
    puVar10[0xad] = 0x7fb997a80;
    puVar10[0xb0] = 0x7fb997a80;
    puVar10[0xb1] = 0x7fb997a80;
    puVar10[0xb2] = 0x7fb997a80;
    puVar10[0xb3] = 0x7fb997a80;
    puVar10[0xb8] = 0x7fb997a80;
    puVar10[0xb9] = 0x7fb997a80;
    puVar10[0xba] = 0x7fb997a80;
    puVar10[0xbb] = 0x7fb997a80;
    puVar10[0xbe] = 0x7fb997a80;
    puVar10[0xbf] = 0x7fb997a80;
    puVar10[0xc0] = 0x7fb997a80;
    puVar10[0xc1] = 0x7fb997a80;
    puVar10[0xc4] = 0x7fb997a80;
    puVar10[0xc5] = 0x7fb997a80;
    puVar10[0xc6] = 0x7fb997a80;
    puVar10[199] = 0x7fb997a80;
    puVar10[0xcc] = 0x7fb997a80;
    puVar10[0xcd] = 0x7fb997a80;
    puVar10[0xce] = 0x7fb997a80;
    puVar10[0xcf] = 0x7fb997a80;
    puVar10[0xd2] = 0x7fb997a80;
    puVar10[0xd3] = 0x7fb997a80;
    puVar10[0xd4] = 0x7fb997a80;
    puVar10[0xd5] = 0x7fb997a80;
    puVar10[0xd8] = 0x7fb997a80;
    puVar10[0xd9] = 0x7fb997a80;
    puVar10[0xda] = 0x7fb997a80;
    puVar10[0xdb] = 0x7fb997a80;
    puVar10[0xe0] = 0x7fb997a80;
    puVar10[0xe1] = 0x7fb997a80;
    puVar10[0xe2] = 0x7fb997a80;
    puVar10[0xe3] = 0x7fb997a80;
    puVar10[0xe6] = 0x7fb997a80;
    puVar10[0xe7] = 0x7fb997a80;
    puVar10[0xe8] = 0x7fb997a80;
    puVar10[0xe9] = 0x7fb997a80;
    puVar10[0xec] = 0x7fb997a80;
    puVar10[0xed] = 0x7fb997a80;
    puVar10[0xee] = 0x7fb997a80;
    puVar10[0xef] = 0x7fb997a80;
    puVar10[0xf4] = 0x7fb997a80;
    puVar10[0xf5] = 0x7fb997a80;
    puVar10[0xf6] = 0x7fb997a80;
    puVar10[0xf7] = 0x7fb997a80;
    puVar10[0xfa] = 0x7fb997a80;
    puVar10[0xfb] = 0x7fb997a80;
    puVar10[0xfc] = 0x7fb997a80;
    puVar10[0x25c] = 0x7fb997a80;
    puVar10[0x255] = 0x7fb997a80;
    puVar10[0x256] = 0x7fb997a80;
    puVar10[599] = 0x7fb997a80;
    puVar10[0x254] = 0x7fb997a80;
    puVar10[0x24f] = 0x7fb997a80;
    puVar10[0x250] = 0x7fb997a80;
    puVar10[0x251] = 0x7fb997a80;
    puVar10[0x24e] = 0x7fb997a80;
    puVar10[0x249] = 0x7fb997a80;
    puVar10[0x24a] = 0x7fb997a80;
    puVar10[0x24b] = 0x7fb997a80;
    puVar10[0x248] = 0x7fb997a80;
    puVar10[0x243] = 0x7fb997a80;
    puVar10[0x240] = 0x7fb997a80;
    puVar10[0x241] = 0x7fb997a80;
    puVar10[0x242] = 0x7fb997a80;
    puVar10[0x23d] = 0x7fb997a80;
    puVar10[0x23a] = 0x7fb997a80;
    puVar10[0x23b] = 0x7fb997a80;
    puVar10[0x23c] = 0x7fb997a80;
    puVar10[0x237] = 0x7fb997a80;
    puVar10[0x234] = 0x7fb997a80;
    puVar10[0x235] = 0x7fb997a80;
    puVar10[0x236] = 0x7fb997a80;
    puVar10[0x22e] = 0x7fb997a80;
    puVar10[0x22f] = 0x7fb997a80;
    puVar10[0x22c] = 0x7fb997a80;
    puVar10[0x22d] = 0x7fb997a80;
    puVar10[0x228] = 0x7fb997a80;
    puVar10[0x229] = 0x7fb997a80;
    puVar10[0x226] = 0x7fb997a80;
    puVar10[0x227] = 0x7fb997a80;
    puVar10[0x222] = 0x7fb997a80;
    puVar10[0x223] = 0x7fb997a80;
    puVar10[0x220] = 0x7fb997a80;
    puVar10[0x221] = 0x7fb997a80;
    puVar10[0x219] = 0x7fb997a80;
    puVar10[0x21a] = 0x7fb997a80;
    puVar10[0x21b] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x216) = 0;
    puVar10[0x217] = 0x724832b32;
    puVar10[0x218] = 0x7fb997a80;
    puVar10[0x213] = 0x7fb997a80;
    puVar10[0x214] = 0x7fb997a80;
    puVar10[0x215] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x210) = 0;
    puVar10[0x211] = 0x724832b32;
    puVar10[0x212] = 0x7fb997a80;
    puVar10[0x20d] = 0x7fb997a80;
    puVar10[0x20e] = 0x7fb997a80;
    puVar10[0x20f] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x20a) = 0;
    puVar10[0x20b] = 0x724832b32;
    puVar10[0x20c] = 0x7fb997a80;
    puVar10[0x207] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x209) = 0;
    puVar10[0x204] = 0x7fb997a80;
    puVar10[0x205] = 0x7fb997a80;
    puVar10[0x206] = 0x7fb997a80;
    puVar10[0x201] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x202) = 0;
    puVar10[0x203] = 0x724832b32;
    puVar10[0x1fe] = 0x7fb997a80;
    puVar10[0x1ff] = 0x7fb997a80;
    puVar10[0x200] = 0x7fb997a80;
    puVar10[0x1fb] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x1fc) = 0;
    puVar10[0x1fd] = 0x724832b32;
    puVar10[0x1f8] = 0x7fb997a80;
    puVar10[0x1f9] = 0x7fb997a80;
    puVar10[0x1fa] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x1f5) = 0;
    *(undefined2 *)(puVar10 + 0x1f6) = 0;
    puVar10[0x1f7] = 0x724832b32;
    puVar10[0x1f2] = 0x7fb997a80;
    puVar10[499] = 0x7fb997a80;
    puVar10[0x1ef] = 0x724832b32;
    puVar10[0x1f0] = 0x7fb997a80;
    puVar10[0x1f1] = 0x7fb997a80;
    puVar10[0x1ec] = 0x7fb997a80;
    puVar10[0x1ed] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x1ee) = 0;
    puVar10[0x1e9] = 0x724832b32;
    puVar10[0x1ea] = 0x7fb997a80;
    puVar10[0x1eb] = 0x7fb997a80;
    puVar10[0x1e6] = 0x7fb997a80;
    puVar10[0x1e7] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x1e8) = 0;
    puVar10[0x1e3] = 0x724832b32;
    puVar10[0x1e4] = 0x7fb997a80;
    puVar10[0x1e5] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x1e1) = 0;
    *(undefined2 *)(puVar10 + 0x1e2) = 0;
    puVar10[0x1dd] = 0x7fb997a80;
    puVar10[0x1de] = 0x7fb997a80;
    puVar10[0x1df] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x1da) = 0;
    puVar10[0x1db] = 0x724832b32;
    puVar10[0x1dc] = 0x7fb997a80;
    puVar10[0x1d7] = 0x7fb997a80;
    puVar10[0x1d8] = 0x7fb997a80;
    puVar10[0x1d9] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x1d4) = 0;
    puVar10[0x1d5] = 0x724832b32;
    puVar10[0x1d6] = 0x7fb997a80;
    puVar10[0x1d1] = 0x7fb997a80;
    puVar10[0x1d2] = 0x7fb997a80;
    puVar10[0x1d3] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x1ce) = 0;
    puVar10[0x1cf] = 0x724832b32;
    puVar10[0x1d0] = 0x7fb997a80;
    puVar10[0x1cb] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x1cd) = 0;
    puVar10[0x1c8] = 0x7fb997a80;
    puVar10[0x1c9] = 0x7fb997a80;
    puVar10[0x1ca] = 0x7fb997a80;
    puVar10[0x1c5] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x1c6) = 0;
    puVar10[0x1c7] = 0x724832b32;
    puVar10[0x1c2] = 0x7fb997a80;
    puVar10[0x1c3] = 0x7fb997a80;
    puVar10[0x1c4] = 0x7fb997a80;
    puVar10[0x1bf] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x1c0) = 0;
    puVar10[0x1c1] = 0x724832b32;
    puVar10[0x1bc] = 0x7fb997a80;
    puVar10[0x1bd] = 0x7fb997a80;
    puVar10[0x1be] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x1b9) = 0;
    *(undefined2 *)(puVar10 + 0x1ba) = 0;
    puVar10[0x1bb] = 0x724832b32;
    puVar10[0x1b6] = 0x7fb997a80;
    puVar10[0x1b7] = 0x7fb997a80;
    puVar10[0x1b3] = 0x724832b32;
    puVar10[0x1b4] = 0x7fb997a80;
    puVar10[0x1b5] = 0x7fb997a80;
    puVar10[0x1b0] = 0x7fb997a80;
    puVar10[0x1b1] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x1b2) = 0;
    puVar10[0x1ad] = 0x724832b32;
    puVar10[0x1ae] = 0x7fb997a80;
    puVar10[0x1af] = 0x7fb997a80;
    puVar10[0x1aa] = 0x7fb997a80;
    puVar10[0x1ab] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x1ac) = 0;
    puVar10[0x1a7] = 0x724832b32;
    puVar10[0x1a8] = 0x7fb997a80;
    puVar10[0x1a9] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x1a5) = 0;
    *(undefined2 *)(puVar10 + 0x1a6) = 0;
    puVar10[0x1a1] = 0x7fb997a80;
    puVar10[0x1a2] = 0x7fb997a80;
    puVar10[0x1a3] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x19e) = 0;
    puVar10[0x19f] = 0x724832b32;
    puVar10[0x1a0] = 0x7fb997a80;
    puVar10[0x19b] = 0x7fb997a80;
    puVar10[0x19c] = 0x7fb997a80;
    puVar10[0x19d] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x198) = 0;
    puVar10[0x199] = 0x724832b32;
    puVar10[0x19a] = 0x7fb997a80;
    puVar10[0x195] = 0x7fb997a80;
    puVar10[0x196] = 0x7fb997a80;
    puVar10[0x197] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x192) = 0;
    puVar10[0x193] = 0x724832b32;
    puVar10[0x194] = 0x7fb997a80;
    puVar10[399] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x191) = 0;
    puVar10[0x18c] = 0x7fb997a80;
    puVar10[0x18d] = 0x7fb997a80;
    puVar10[0x18e] = 0x7fb997a80;
    puVar10[0x189] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x18a) = 0;
    puVar10[0x18b] = 0x724832b32;
    puVar10[0x186] = 0x7fb997a80;
    puVar10[0x187] = 0x7fb997a80;
    puVar10[0x188] = 0x7fb997a80;
    puVar10[0x183] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x184) = 0;
    puVar10[0x185] = 0x724832b32;
    puVar10[0x180] = 0x7fb997a80;
    puVar10[0x181] = 0x7fb997a80;
    puVar10[0x182] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x17d) = 0;
    *(undefined2 *)(puVar10 + 0x17e) = 0;
    puVar10[0x17f] = 0x724832b32;
    puVar10[0x17a] = 0x7fb997a80;
    puVar10[0x17b] = 0x7fb997a80;
    puVar10[0x177] = 0x724832b32;
    puVar10[0x178] = 0x7fb997a80;
    puVar10[0x179] = 0x7fb997a80;
    puVar10[0x174] = 0x7fb997a80;
    puVar10[0x175] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x176) = 0;
    puVar10[0x171] = 0x724832b32;
    puVar10[0x172] = 0x7fb997a80;
    puVar10[0x173] = 0x7fb997a80;
    puVar10[0x16e] = 0x7fb997a80;
    puVar10[0x16f] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x170) = 0;
    puVar10[0x16b] = 0x724832b32;
    puVar10[0x16c] = 0x7fb997a80;
    puVar10[0x16d] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x169) = 0;
    *(undefined2 *)(puVar10 + 0x16a) = 0;
    puVar10[0x165] = 0x7fb997a80;
    puVar10[0x166] = 0x7fb997a80;
    puVar10[0x167] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x162) = 0;
    puVar10[0x163] = 0x724832b32;
    puVar10[0x164] = 0x7fb997a80;
    puVar10[0x15f] = 0x7fb997a80;
    puVar10[0x160] = 0x7fb997a80;
    puVar10[0x161] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x15c) = 0;
    puVar10[0x15d] = 0x724832b32;
    puVar10[0x15e] = 0x7fb997a80;
    puVar10[0x159] = 0x7fb997a80;
    puVar10[0x15a] = 0x7fb997a80;
    puVar10[0x15b] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x156) = 0;
    puVar10[0x157] = 0x724832b32;
    puVar10[0x158] = 0x7fb997a80;
    puVar10[0x153] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x155) = 0;
    puVar10[0x150] = 0x7fb997a80;
    puVar10[0x151] = 0x7fb997a80;
    puVar10[0x152] = 0x7fb997a80;
    puVar10[0x14d] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x14e) = 0;
    puVar10[0x14f] = 0x724832b32;
    puVar10[0x14a] = 0x7fb997a80;
    puVar10[0x14b] = 0x7fb997a80;
    puVar10[0x14c] = 0x7fb997a80;
    puVar10[0x147] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x148) = 0;
    puVar10[0x149] = 0x724832b32;
    puVar10[0x144] = 0x7fb997a80;
    puVar10[0x145] = 0x7fb997a80;
    puVar10[0x146] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x141) = 0;
    *(undefined2 *)(puVar10 + 0x142) = 0;
    puVar10[0x143] = 0x724832b32;
    puVar10[0x13e] = 0x7fb997a80;
    puVar10[0x13f] = 0x7fb997a80;
    puVar10[0x13b] = 0x724832b32;
    puVar10[0x13c] = 0x7fb997a80;
    puVar10[0x13d] = 0x7fb997a80;
    puVar10[0x138] = 0x7fb997a80;
    puVar10[0x139] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x13a) = 0;
    puVar10[0x135] = 0x724832b32;
    puVar10[0x136] = 0x7fb997a80;
    puVar10[0x137] = 0x7fb997a80;
    puVar10[0x132] = 0x7fb997a80;
    puVar10[0x133] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x134) = 0;
    puVar10[0x12f] = 0x724832b32;
    puVar10[0x130] = 0x7fb997a80;
    puVar10[0x131] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x12d) = 0;
    *(undefined2 *)(puVar10 + 0x12e) = 0;
    puVar10[0x129] = 0x7fb997a80;
    puVar10[0x12a] = 0x7fb997a80;
    puVar10[299] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x126) = 0;
    puVar10[0x127] = 0x724832b32;
    puVar10[0x128] = 0x7fb997a80;
    puVar10[0x123] = 0x7fb997a80;
    puVar10[0x124] = 0x7fb997a80;
    puVar10[0x125] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x120) = 0;
    puVar10[0x121] = 0x724832b32;
    puVar10[0x122] = 0x7fb997a80;
    puVar10[0x11d] = 0x7fb997a80;
    puVar10[0x11e] = 0x7fb997a80;
    puVar10[0x11f] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x11a) = 0;
    puVar10[0x11b] = 0x724832b32;
    puVar10[0x11c] = 0x7fb997a80;
    puVar10[0x117] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x119) = 0;
    puVar10[0x114] = 0x7fb997a80;
    puVar10[0x115] = 0x7fb997a80;
    puVar10[0x116] = 0x7fb997a80;
    puVar10[0x111] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x112) = 0;
    puVar10[0x113] = 0x724832b32;
    puVar10[0x10e] = 0x7fb997a80;
    puVar10[0x10f] = 0x7fb997a80;
    puVar10[0x110] = 0x7fb997a80;
    puVar10[0x10b] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x10c) = 0;
    puVar10[0x10d] = 0x724832b32;
    puVar10[0x108] = 0x7fb997a80;
    puVar10[0x109] = 0x7fb997a80;
    puVar10[0x10a] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x105) = 0;
    *(undefined2 *)(puVar10 + 0x106) = 0;
    puVar10[0x107] = 0x724832b32;
    puVar10[0x102] = 0x7fb997a80;
    puVar10[0x103] = 0x7fb997a80;
    puVar10[0xff] = 0x724832b32;
    puVar10[0x100] = 0x7fb997a80;
    puVar10[0x101] = 0x7fb997a80;
    puVar10[0xfd] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0xfe) = 0;
    puVar10[0x25d] = 0x7fb997a80;
    puVar10[0x25e] = 0x7fb997a80;
    puVar10[0x25f] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x260) = 0;
    puVar10[0x261] = 0x724832b32;
    puVar10[0x262] = 0x7fb997a80;
    puVar10[0x263] = 0x7fb997a80;
    puVar10[0x264] = 0x7fb997a80;
    puVar10[0x265] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x266) = 0;
    puVar10[0x267] = 0x724832b32;
    puVar10[0x268] = 0x7fb997a80;
    puVar10[0x269] = 0x7fb997a80;
    puVar10[0x26a] = 0x7fb997a80;
    puVar10[0x26b] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x26d) = 0;
    *(undefined2 *)(puVar10 + 0x26e) = 0;
    puVar10[0x26f] = 0x724832b32;
    puVar10[0x270] = 0x7fb997a80;
    puVar10[0x271] = 0x7fb997a80;
    puVar10[0x272] = 0x7fb997a80;
    puVar10[0x273] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x274) = 0;
    puVar10[0x275] = 0x724832b32;
    puVar10[0x276] = 0x7fb997a80;
    puVar10[0x277] = 0x7fb997a80;
    puVar10[0x278] = 0x7fb997a80;
    puVar10[0x279] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x27a) = 0;
    puVar10[0x27b] = 0x724832b32;
    puVar10[0x27c] = 0x7fb997a80;
    puVar10[0x27d] = 0x7fb997a80;
    puVar10[0x27e] = 0x7fb997a80;
    puVar10[0x27f] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x281) = 0;
    *(undefined2 *)(puVar10 + 0x282) = 0;
    puVar10[0x283] = 0x724832b32;
    puVar10[0x284] = 0x7fb997a80;
    puVar10[0x285] = 0x7fb997a80;
    puVar10[0x286] = 0x7fb997a80;
    puVar10[0x287] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x288) = 0;
    puVar10[0x289] = 0x724832b32;
    puVar10[0x28a] = 0x7fb997a80;
    puVar10[0x28b] = 0x7fb997a80;
    puVar10[0x28c] = 0x7fb997a80;
    puVar10[0x28d] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x28e) = 0;
    puVar10[0x28f] = 0x724832b32;
    puVar10[0x290] = 0x7fb997a80;
    puVar10[0x291] = 0x7fb997a80;
    puVar10[0x292] = 0x7fb997a80;
    puVar10[0x293] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x295) = 0;
    *(undefined2 *)(puVar10 + 0x296) = 0;
    puVar10[0x297] = 0x724832b32;
    puVar10[0x298] = 0x7fb997a80;
    puVar10[0x299] = 0x7fb997a80;
    puVar10[0x29a] = 0x7fb997a80;
    puVar10[0x29b] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x29c) = 0;
    puVar10[0x29d] = 0x724832b32;
    puVar10[0x29e] = 0x7fb997a80;
    puVar10[0x29f] = 0x7fb997a80;
    puVar10[0x2a0] = 0x7fb997a80;
    puVar10[0x2a1] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x2a2) = 0;
    puVar10[0x2a3] = 0x724832b32;
    puVar10[0x2a4] = 0x7fb997a80;
    puVar10[0x2a5] = 0x7fb997a80;
    puVar10[0x2a6] = 0x7fb997a80;
    puVar10[0x2a7] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x2a9) = 0;
    *(undefined2 *)(puVar10 + 0x2aa) = 0;
    puVar10[0x2ab] = 0x724832b32;
    puVar10[0x2ac] = 0x7fb997a80;
    puVar10[0x2ad] = 0x7fb997a80;
    puVar10[0x2ae] = 0x7fb997a80;
    puVar10[0x2af] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x2b0) = 0;
    puVar10[0x2b1] = 0x724832b32;
    puVar10[0x2b2] = 0x7fb997a80;
    puVar10[0x2b3] = 0x7fb997a80;
    puVar10[0x2b4] = 0x7fb997a80;
    puVar10[0x2b5] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x2b6) = 0;
    puVar10[0x2b7] = 0x724832b32;
    puVar10[0x2b8] = 0x7fb997a80;
    puVar10[0x2b9] = 0x7fb997a80;
    puVar10[0x2ba] = 0x7fb997a80;
    puVar10[699] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x2bd) = 0;
    *(undefined2 *)(puVar10 + 0x2be) = 0;
    puVar10[0x2bf] = 0x724832b32;
    puVar10[0x2c0] = 0x7fb997a80;
    puVar10[0x2c1] = 0x7fb997a80;
    puVar10[0x2c2] = 0x7fb997a80;
    puVar10[0x2c3] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x2c4) = 0;
    puVar10[0x2c5] = 0x724832b32;
    puVar10[0x2c6] = 0x7fb997a80;
    puVar10[0x2c7] = 0x7fb997a80;
    puVar10[0x2c8] = 0x7fb997a80;
    puVar10[0x2c9] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x2ca) = 0;
    puVar10[0x2cb] = 0x724832b32;
    puVar10[0x2cc] = 0x7fb997a80;
    puVar10[0x2cd] = 0x7fb997a80;
    puVar10[0x2ce] = 0x7fb997a80;
    puVar10[0x2cf] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x2d1) = 0;
    *(undefined2 *)(puVar10 + 0x2d2) = 0;
    puVar10[0x2d3] = 0x724832b32;
    puVar10[0x2d4] = 0x7fb997a80;
    puVar10[0x2d5] = 0x7fb997a80;
    puVar10[0x2d6] = 0x7fb997a80;
    puVar10[0x2d7] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x2d8) = 0;
    puVar10[0x2d9] = 0x724832b32;
    puVar10[0x2da] = 0x7fb997a80;
    puVar10[0x2db] = 0x7fb997a80;
    puVar10[0x2dc] = 0x7fb997a80;
    puVar10[0x2dd] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x2de) = 0;
    puVar10[0x2df] = 0x724832b32;
    puVar10[0x2e0] = 0x7fb997a80;
    puVar10[0x2e1] = 0x7fb997a80;
    puVar10[0x2e2] = 0x7fb997a80;
    puVar10[0x2e3] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x2e5) = 0;
    *(undefined2 *)(puVar10 + 0x2e6) = 0;
    puVar10[0x2e7] = 0x724832b32;
    puVar10[0x2e8] = 0x7fb997a80;
    puVar10[0x2e9] = 0x7fb997a80;
    puVar10[0x2ea] = 0x7fb997a80;
    puVar10[0x2eb] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x2ec) = 0;
    puVar10[0x2ed] = 0x724832b32;
    puVar10[0x2ee] = 0x7fb997a80;
    puVar10[0x2ef] = 0x7fb997a80;
    puVar10[0x2f0] = 0x7fb997a80;
    puVar10[0x2f1] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x2f2) = 0;
    puVar10[0x2f3] = 0x724832b32;
    puVar10[0x2f4] = 0x7fb997a80;
    puVar10[0x2f5] = 0x7fb997a80;
    puVar10[0x2f6] = 0x7fb997a80;
    puVar10[0x2f7] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x2f9) = 0;
    *(undefined2 *)(puVar10 + 0x2fa) = 0;
    puVar10[0x2fb] = 0x724832b32;
    puVar10[0x2fc] = 0x7fb997a80;
    puVar10[0x2fd] = 0x7fb997a80;
    puVar10[0x2fe] = 0x7fb997a80;
    puVar10[0x2ff] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x300) = 0;
    puVar10[0x301] = 0x724832b32;
    puVar10[0x302] = 0x7fb997a80;
    puVar10[0x303] = 0x7fb997a80;
    puVar10[0x304] = 0x7fb997a80;
    puVar10[0x305] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x306) = 0;
    puVar10[0x307] = 0x724832b32;
    puVar10[0x308] = 0x7fb997a80;
    puVar10[0x309] = 0x7fb997a80;
    puVar10[0x30a] = 0x7fb997a80;
    puVar10[0x30b] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x30d) = 0;
    *(undefined2 *)(puVar10 + 0x30e) = 0;
    puVar10[0x30f] = 0x724832b32;
    puVar10[0x310] = 0x7fb997a80;
    puVar10[0x311] = 0x7fb997a80;
    puVar10[0x312] = 0x7fb997a80;
    puVar10[0x313] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x314) = 0;
    puVar10[0x315] = 0x724832b32;
    puVar10[0x316] = 0x7fb997a80;
    puVar10[0x317] = 0x7fb997a80;
    puVar10[0x318] = 0x7fb997a80;
    puVar10[0x319] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x31a) = 0;
    puVar10[0x31b] = 0x724832b32;
    puVar10[0x31c] = 0x7fb997a80;
    puVar10[0x31d] = 0x7fb997a80;
    puVar10[0x31e] = 0x7fb997a80;
    puVar10[799] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x321) = 0;
    *(undefined2 *)(puVar10 + 0x322) = 0;
    puVar10[0x323] = 0x724832b32;
    puVar10[0x324] = 0x7fb997a80;
    puVar10[0x325] = 0x7fb997a80;
    puVar10[0x326] = 0x7fb997a80;
    puVar10[0x327] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x328) = 0;
    puVar10[0x329] = 0x724832b32;
    puVar10[0x32a] = 0x7fb997a80;
    puVar10[0x32b] = 0x7fb997a80;
    puVar10[0x32c] = 0x7fb997a80;
    puVar10[0x32d] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x32e) = 0;
    puVar10[0x32f] = 0x724832b32;
    puVar10[0x330] = 0x7fb997a80;
    puVar10[0x331] = 0x7fb997a80;
    puVar10[0x332] = 0x7fb997a80;
    puVar10[0x333] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x335) = 0;
    *(undefined2 *)(puVar10 + 0x336) = 0;
    puVar10[0x337] = 0x724832b32;
    puVar10[0x338] = 0x7fb997a80;
    puVar10[0x339] = 0x7fb997a80;
    puVar10[0x33a] = 0x7fb997a80;
    puVar10[0x33b] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x33c) = 0;
    puVar10[0x33d] = 0x724832b32;
    puVar10[0x33e] = 0x7fb997a80;
    puVar10[0x33f] = 0x7fb997a80;
    puVar10[0x340] = 0x7fb997a80;
    puVar10[0x341] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x342) = 0;
    puVar10[0x343] = 0x724832b32;
    puVar10[0x344] = 0x7fb997a80;
    puVar10[0x345] = 0x7fb997a80;
    puVar10[0x346] = 0x7fb997a80;
    puVar10[0x347] = 0x7fb997a80;
    *(undefined4 *)(puVar10 + 0x349) = 0;
    *(undefined2 *)(puVar10 + 0x34a) = 0;
    puVar10[0x34b] = 0x724832b32;
    puVar10[0x34c] = 0x7fb997a80;
    puVar10[0x34d] = 0x7fb997a80;
    puVar10[0x34e] = 0x7fb997a80;
    puVar10[0x34f] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x350) = 0;
    puVar10[0x351] = 0x724832b32;
    puVar10[0x352] = 0x7fb997a80;
    puVar10[0x353] = 0x7fb997a80;
    puVar10[0x354] = 0x7fb997a80;
    puVar10[0x355] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x356) = 0;
    puVar10[0x357] = 0x724832b32;
    puVar10[0x358] = 0x7fb997a80;
    puVar10[0x359] = 0x7fb997a80;
    puVar10[0x35a] = 0x7fb997a80;
    puVar10[0x35b] = 0x7fb997a80;
    puVar10[0x13] = 0x7fb997a80;
    puVar10[0x14] = 0x3f80000000000000;
    puVar10[0x27] = 0x7fb997a80;
    puVar10[0x28] = 0x3f80000000000000;
    puVar10[0x3b] = 0x7fb997a80;
    puVar10[0x3c] = 0x3f80000000000000;
    puVar10[3] = 0x724832b32;
    puVar10[4] = 0x7fb997a80;
    puVar10[5] = 0x7fb997a80;
    puVar10[6] = 0x7fb997a80;
    puVar10[9] = 0x724832b32;
    puVar10[10] = 0x7fb997a80;
    puVar10[0xb] = 0x7fb997a80;
    puVar10[0xc] = 0x7fb997a80;
    puVar10[0xf] = 0x724832b32;
    puVar10[0x10] = 0x7fb997a80;
    puVar10[0x11] = 0x7fb997a80;
    puVar10[0x12] = 0x7fb997a80;
    puVar10[0x17] = 0x724832b32;
    puVar10[0x18] = 0x7fb997a80;
    puVar10[0x19] = 0x7fb997a80;
    puVar10[0x1a] = 0x7fb997a80;
    puVar10[0x1d] = 0x724832b32;
    puVar10[0x1e] = 0x7fb997a80;
    puVar10[0x1f] = 0x7fb997a80;
    puVar10[0x20] = 0x7fb997a80;
    puVar10[0x23] = 0x724832b32;
    puVar10[0x24] = 0x7fb997a80;
    puVar10[0x25] = 0x7fb997a80;
    puVar10[0x26] = 0x7fb997a80;
    puVar10[0x2b] = 0x724832b32;
    puVar10[0x2c] = 0x7fb997a80;
    puVar10[0x2d] = 0x7fb997a80;
    puVar10[0x2e] = 0x7fb997a80;
    puVar10[0x31] = 0x724832b32;
    puVar10[0x32] = 0x7fb997a80;
    puVar10[0x33] = 0x7fb997a80;
    puVar10[0x34] = 0x7fb997a80;
    puVar10[0x37] = 0x724832b32;
    puVar10[0x38] = 0x7fb997a80;
    puVar10[0x39] = 0x7fb997a80;
    puVar10[0x3a] = 0x7fb997a80;
    puVar10[0x3f] = 0x724832b32;
    puVar10[0x40] = 0x7fb997a80;
    *(undefined8 *)((long)puVar10 + 0x1ae4) = 0x3f800000;
    puVar10[0x35f] = 0x724832b32;
    puVar10[0x365] = 0x724832b32;
    puVar10[0x36b] = 0x724832b32;
    *(undefined2 *)(puVar10 + 0x35e) = 0;
    puVar10[0x360] = 0x7fb997a80;
    puVar10[0x361] = 0x7fb997a80;
    puVar10[0x362] = 0x7fb997a80;
    puVar10[0x363] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x364) = 0;
    puVar10[0x366] = 0x7fb997a80;
    puVar10[0x367] = 0x7fb997a80;
    puVar10[0x368] = 0x7fb997a80;
    puVar10[0x369] = 0x7fb997a80;
    *(undefined2 *)(puVar10 + 0x36a) = 0;
    puVar10[0x36c] = 0x7fb997a80;
    puVar10[0x36d] = 0x7fb997a80;
    puVar10[0x36e] = 0x7fb997a80;
    puVar10[0x36f] = 0x7fb997a80;
    param_1[0x30] = (long)puVar10;
    param_1[0x31] = 0x2c;
    *(undefined4 *)(puVar10 + 0x14) = 1;
    *(undefined4 *)(puVar10 + 0x28) = 2;
    *(undefined4 *)(puVar10 + 0x3c) = 3;
    *(undefined4 *)(puVar10 + 0x50) = 4;
    *(undefined4 *)(puVar10 + 100) = 5;
    *(undefined4 *)(puVar10 + 0x78) = 6;
    *(undefined4 *)(puVar10 + 0x8c) = 7;
    *(undefined4 *)(puVar10 + 0xa0) = 8;
    *(undefined4 *)(puVar10 + 0xb4) = 9;
    *(undefined4 *)(puVar10 + 200) = 10;
    *(undefined4 *)(puVar10 + 0xdc) = 0xb;
    *(undefined4 *)(puVar10 + 0xf0) = 0xc;
    *(undefined4 *)(puVar10 + 0x104) = 0xd;
    *(undefined4 *)(puVar10 + 0x118) = 0xe;
    *(undefined4 *)(puVar10 + 300) = 0xf;
    *(undefined4 *)(puVar10 + 0x154) = 0x11;
    *(undefined4 *)(puVar10 + 0x168) = 0x12;
    *(undefined4 *)(puVar10 + 0x17c) = 0x13;
    *(undefined4 *)(puVar10 + 400) = 0x14;
    *(undefined4 *)(puVar10 + 0x1a4) = 0x15;
    *(undefined4 *)(puVar10 + 0x1b8) = 0x16;
    *(undefined4 *)(puVar10 + 0x1cc) = 0x17;
    *(undefined4 *)(puVar10 + 0x1e0) = 0x18;
    *(undefined4 *)(puVar10 + 500) = 0x19;
    *(undefined4 *)(puVar10 + 0x208) = 0x1a;
    *(undefined4 *)(puVar10 + 0x21c) = 0x1b;
    *(undefined4 *)(puVar10 + 0x230) = 0x1c;
    *(undefined4 *)(puVar10 + 0x244) = 0x1d;
    *(undefined4 *)(puVar10 + 600) = 0x1e;
    *(undefined4 *)(puVar10 + 0x26c) = 0x1f;
    *(undefined4 *)(puVar10 + 0x280) = 0x20;
    *(undefined4 *)(puVar10 + 0x294) = 0x21;
    *(undefined4 *)(puVar10 + 0x2a8) = 0x22;
    *(undefined4 *)(puVar10 + 700) = 0x23;
    *(undefined4 *)(puVar10 + 0x2d0) = 0x24;
    *(undefined4 *)(puVar10 + 0x2e4) = 0x25;
    *(undefined4 *)(puVar10 + 0x2f8) = 0x26;
    *(undefined4 *)(puVar10 + 0x30c) = 0x27;
    *(undefined4 *)(puVar10 + 800) = 0x28;
    *(undefined4 *)(puVar10 + 0x334) = 0x29;
    *(undefined4 *)puVar10 = 0;
    *(undefined4 *)(puVar10 + 0x140) = 0x10;
    *(undefined4 *)(puVar10 + 0x348) = 0x2a;
    *(undefined4 *)(puVar10 + 0x35c) = 0x2b;
    if (local_1e8[0] != 0xffffff) {
      pppppppplStack_198 = (long ********)&DAT_7104742dbb;
      local_1a0 = (long ********)&local_1a0;
      local_190 = (long ********)CONCAT44(local_190._4_4_,0xffffff);
      local_180 = (long *)0x0;
      uStack_178 = 0;
      plStack_188 = (long *)0x0;
      local_1a8[0] = local_1e8[0];
      FUN_7103540a00(DAT_7105332f20,local_1e8[0]);
      uVar46 = FUN_7103720c30((long)&local_1a0,local_1a8,param_3,(byte ****)param_4,
                              (long ****)param_5,param_6,param_7,param_8);
      FUN_7103540b10(DAT_7105332f20,uVar8,param_3,(byte ****)param_4,(long ****)param_5,param_6,
                     param_7,param_8);
      local_1a8[0] = 0xffffff;
      if ((uVar46 & 1) != 0) {
        bVar36 = *(byte *)pppppppplStack_198;
        if ((bVar36 == 0xc) &&
           (iVar23 = *(int *)((long)pppppppplStack_198 + 1) + -1,
           0 < *(int *)((long)pppppppplStack_198 + 1))) {
          iVar39 = 0;
          pbVar11 = &DAT_7104742dbb;
          do {
            iVar1 = iVar23 + iVar39;
            if (iVar1 < 0) {
              iVar1 = iVar1 + 1;
            }
            iVar1 = iVar1 >> 1;
            puVar15 = (uint *)((long)local_1a0[5] +
                              (long)iVar1 * 8 + (long)*(int *)((long)pppppppplStack_198 + 5));
            if (local_1a0[4][*puVar15] == (long ******)0x4c0b4fe61) {
              uVar41 = puVar15[1];
              if ((int)uVar41 < 0) goto LAB_71025da664;
              pbVar11 = (byte *)((long)pppppppplStack_198 + (long)(int)uVar41);
              pppppppplVar51 = local_1a0;
              goto LAB_71025da670;
            }
            iVar6 = iVar1 + -1;
            if (local_1a0[4][*puVar15] < (long ******)0x4c0b4fe62) {
              iVar39 = iVar1 + 1;
              iVar6 = iVar23;
            }
            iVar23 = iVar6;
          } while (iVar39 <= iVar23);
          pppppppplVar51 = (long ********)0x0;
        }
        else {
LAB_71025da664:
          pppppppplVar51 = (long ********)0x0;
          pbVar11 = &DAT_7104742dbb;
        }
LAB_71025da670:
        if ((*pbVar11 == 0xb) && (*(int *)(pbVar11 + 1) < 0x2d)) {
          if (0 < *(int *)(pbVar11 + 1)) {
            lVar29 = 0;
            uVar41 = 0xb;
LAB_71025dabf0:
            do {
              iVar23 = (int)lVar29;
              if (iVar23 < 0) {
LAB_71025dac28:
                pppppppplVar17 = (long ********)0x0;
                pbVar40 = &DAT_7104742dbb;
              }
              else {
                pbVar40 = &DAT_7104742dbb;
                pppppppplVar17 = (long ********)0x0;
                if (uVar41 == 0xb) {
                  if (*(int *)(pbVar11 + 1) <= iVar23) goto LAB_71025dac28;
                  pbVar40 = pbVar11 + *(int *)(pbVar11 + (long)iVar23 * 4 + 5);
                  pppppppplVar17 = pppppppplVar51;
                }
              }
              if ((*pbVar40 != 0xc) || (*(int *)(pbVar40 + 1) != 2)) goto LAB_71025da688;
              iVar23 = 0;
              param_3 = (long *********)((long)pppppppplVar17[5] + (long)*(int *)(pbVar40 + 5));
              param_4 = (undefined1 (*) [16])0x1;
              do {
                iVar39 = (uint)param_4 + iVar23;
                if (iVar39 < 0) {
                  iVar39 = iVar39 + 1;
                }
                uVar41 = iVar39 >> 1;
                param_5 = (undefined1 (*) [16])(ulong)uVar41;
                param_6 = (undefined1 (*) [16])(param_3 + (int)uVar41);
                param_7 = pppppppplVar17[4][*(uint *)*param_6];
                pbVar12 = &DAT_7104742dbb;
                if (param_7 == (long ******)0x8120c180b) {
                  iVar23 = *(int *)((long)*param_6 + 4);
                  if (-1 < iVar23) {
                    pbVar12 = pbVar40 + iVar23;
                  }
                  break;
                }
                param_6 = (undefined1 (*) [16])(ulong)(uVar41 - 1);
                uVar9 = uVar41 - 1;
                if (param_7 < (long ******)0x8120c180c) {
                  uVar9 = (uint)param_4;
                }
                param_4 = (undefined1 (*) [16])(ulong)uVar9;
                if (param_7 < (long ******)0x8120c180c) {
                  iVar23 = uVar41 + 1;
                }
              } while (iVar23 <= (int)uVar9);
              if (((*pbVar12 != 8) ||
                  (*(undefined4 *)(*plVar48 + lVar29 * 0xa0 + 4) = *(undefined4 *)(pbVar12 + 1),
                  *pbVar40 != 0xc)) ||
                 (uVar41 = *(int *)(pbVar40 + 1) - 1, *(int *)(pbVar40 + 1) < 1))
              goto LAB_71025da688;
              param_3 = (long *********)pppppppplVar17[4];
              iVar23 = 0;
              while( true ) {
                iVar39 = uVar41 + iVar23;
                if (iVar39 < 0) {
                  iVar39 = iVar39 + 1;
                }
                uVar9 = iVar39 >> 1;
                param_4 = (undefined1 (*) [16])(ulong)uVar9;
                param_5 = (undefined1 (*) [16])
                          ((long)pppppppplVar17[5] +
                          (long)(int)uVar9 * 8 + (long)*(int *)(pbVar40 + 5));
                param_6 = (undefined1 (*) [16])param_3[*(uint *)*param_5];
                if (param_6 == (undefined1 (*) [16])0x96ce425b7) break;
                param_5 = (undefined1 (*) [16])(ulong)(uVar9 - 1);
                uVar33 = uVar9 - 1;
                if (param_6 < (undefined1 (*) [16])0x96ce425b8) {
                  iVar23 = uVar9 + 1;
                  uVar33 = uVar41;
                }
                uVar41 = uVar33;
                if ((int)uVar41 < iVar23) goto LAB_71025da688;
              }
              if (*(int *)(*param_5 + 4) < 0) goto LAB_71025da688;
              pbVar40 = pbVar40 + *(int *)(*param_5 + 4);
              if ((*pbVar40 == 0) || (uVar41 = *pbVar40 - 1, 6 < (uVar41 & 0xff)))
              goto LAB_71025da688;
              switch(uVar41) {
              case 0:
              case 2:
                uVar41 = (uint)pbVar40[1];
                break;
              case 1:
                uVar41 = (uint)(char)pbVar40[1];
                break;
              case 3:
                uVar41 = (uint)*(short *)(pbVar40 + 1);
                break;
              case 4:
                uVar41 = (uint)*(ushort *)(pbVar40 + 1);
                break;
              case 5:
              case 6:
                uVar41 = *(uint *)(pbVar40 + 1);
                break;
              default:
                uVar41 = 0;
              }
              lVar32 = lVar29 * 0xa0;
              lVar29 = lVar29 + 1;
              *(uint *)(*plVar48 + lVar32 + 8) = uVar41;
              uVar41 = (uint)*pbVar11;
              if (uVar41 - 0xb < 2) {
                if (*(int *)(pbVar11 + 1) <= lVar29) break;
                goto LAB_71025dabf0;
              }
            } while (lVar29 < 0);
            bVar36 = *(byte *)pppppppplStack_198;
          }
          if ((bVar36 == 0xc) &&
             (iVar23 = *(int *)((long)pppppppplStack_198 + 1) + -1,
             0 < *(int *)((long)pppppppplStack_198 + 1))) {
            iVar39 = 0;
            pbVar11 = &DAT_7104742dbb;
            do {
              iVar1 = iVar23 + iVar39;
              if (iVar1 < 0) {
                iVar1 = iVar1 + 1;
              }
              iVar1 = iVar1 >> 1;
              puVar15 = (uint *)((long)local_1a0[5] +
                                (long)iVar1 * 8 + (long)*(int *)((long)pppppppplStack_198 + 5));
              if (local_1a0[4][*puVar15] == (long ******)0x48d917a55) {
                uVar41 = puVar15[1];
                if ((int)uVar41 < 0) goto LAB_71025dd134;
                pbVar11 = (byte *)((long)pppppppplStack_198 + (long)(int)uVar41);
                pppppppplVar51 = local_1a0;
                goto LAB_71025dd140;
              }
              iVar6 = iVar1 + -1;
              if (local_1a0[4][*puVar15] < (long ******)0x48d917a56) {
                iVar39 = iVar1 + 1;
                iVar6 = iVar23;
              }
              iVar23 = iVar6;
            } while (iVar39 <= iVar23);
            pppppppplVar51 = (long ********)0x0;
          }
          else {
LAB_71025dd134:
            pppppppplVar51 = (long ********)0x0;
            pbVar11 = &DAT_7104742dbb;
          }
LAB_71025dd140:
          if ((*pbVar11 == 0xb) && (*(int *)(pbVar11 + 1) < 0x2d)) {
            if (0 < *(int *)(pbVar11 + 1)) {
              iVar23 = 0;
              lVar29 = 0;
              uVar41 = 0xb;
              lVar32 = 0x10;
              do {
                if ((int)lVar29 < 0) {
LAB_71025dd1c0:
                  local_1c0 = (long ********)0x0;
                  local_1b8 = (long ********)&DAT_7104742dbb;
                }
                else {
                  local_1b8 = (long ********)&DAT_7104742dbb;
                  local_1c0 = (long ********)0x0;
                  if (uVar41 == 0xb) {
                    if (*(int *)(pbVar11 + 1) <= (int)lVar29) goto LAB_71025dd1c0;
                    local_1b8 = (long ********)(pbVar11 + *(int *)(pbVar11 + (long)iVar23 + 5));
                    local_1c0 = pppppppplVar51;
                  }
                }
                uVar46 = FUN_71025e84d0((long *)&local_1c0,*plVar48 + lVar32);
                if ((uVar46 & 1) == 0) goto LAB_71025da688;
                uVar41 = (uint)*pbVar11;
                lVar29 = lVar29 + 1;
                if (uVar41 - 0xb < 2) {
                  iVar39 = *(int *)(pbVar11 + 1);
                }
                else {
                  iVar39 = 0;
                }
                lVar32 = lVar32 + 0xa0;
                iVar23 = iVar23 + 4;
              } while (lVar29 < iVar39);
              bVar36 = *(byte *)pppppppplStack_198;
            }
            if ((bVar36 == 0xc) &&
               (iVar23 = *(int *)((long)pppppppplStack_198 + 1) + -1,
               0 < *(int *)((long)pppppppplStack_198 + 1))) {
              iVar39 = 0;
              pbVar11 = &DAT_7104742dbb;
              do {
                iVar1 = iVar23 + iVar39;
                if (iVar1 < 0) {
                  iVar1 = iVar1 + 1;
                }
                iVar1 = iVar1 >> 1;
                puVar15 = (uint *)((long)local_1a0[5] +
                                  (long)iVar1 * 8 + (long)*(int *)((long)pppppppplStack_198 + 5));
                if (local_1a0[4][*puVar15] == (long ******)0x7ef3ace15) {
                  uVar41 = puVar15[1];
                  if ((int)uVar41 < 0) goto LAB_71025dd2a4;
                  pbVar11 = (byte *)((long)pppppppplStack_198 + (long)(int)uVar41);
                  pppppppplVar51 = local_1a0;
                  goto LAB_71025dd2b0;
                }
                iVar6 = iVar1 + -1;
                if (local_1a0[4][*puVar15] < (long ******)0x7ef3ace16) {
                  iVar39 = iVar1 + 1;
                  iVar6 = iVar23;
                }
                iVar23 = iVar6;
              } while (iVar39 <= iVar23);
              pppppppplVar51 = (long ********)0x0;
            }
            else {
LAB_71025dd2a4:
              pppppppplVar51 = (long ********)0x0;
              pbVar11 = &DAT_7104742dbb;
            }
LAB_71025dd2b0:
            if ((*pbVar11 == 0xb) && (*(int *)(pbVar11 + 1) < 0x2d)) {
              if (0 < *(int *)(pbVar11 + 1)) {
                iVar23 = 0;
                lVar29 = 0;
                uVar41 = 0xb;
                lVar32 = 0x40;
                do {
                  if ((int)lVar29 < 0) {
LAB_71025dd330:
                    local_1d0 = (long ********)0x0;
                    pbStack_1c8 = &DAT_7104742dbb;
                  }
                  else {
                    pbStack_1c8 = &DAT_7104742dbb;
                    local_1d0 = (long ********)0x0;
                    if (uVar41 == 0xb) {
                      if (*(int *)(pbVar11 + 1) <= (int)lVar29) goto LAB_71025dd330;
                      pbStack_1c8 = pbVar11 + *(int *)(pbVar11 + (long)iVar23 + 5);
                      local_1d0 = pppppppplVar51;
                    }
                  }
                  uVar46 = FUN_71025e84d0((long *)&local_1d0,*plVar48 + lVar32);
                  if ((uVar46 & 1) == 0) goto LAB_71025da688;
                  uVar41 = (uint)*pbVar11;
                  lVar29 = lVar29 + 1;
                  if (uVar41 - 0xb < 2) {
                    iVar39 = *(int *)(pbVar11 + 1);
                  }
                  else {
                    iVar39 = 0;
                  }
                  lVar32 = lVar32 + 0xa0;
                  iVar23 = iVar23 + 4;
                } while (lVar29 < iVar39);
                bVar36 = *(byte *)pppppppplStack_198;
              }
              if ((bVar36 == 0xc) &&
                 (iVar23 = *(int *)((long)pppppppplStack_198 + 1) + -1,
                 0 < *(int *)((long)pppppppplStack_198 + 1))) {
                iVar39 = 0;
                pbVar11 = &DAT_7104742dbb;
                do {
                  iVar1 = iVar23 + iVar39;
                  if (iVar1 < 0) {
                    iVar1 = iVar1 + 1;
                  }
                  iVar1 = iVar1 >> 1;
                  puVar15 = (uint *)((long)local_1a0[5] +
                                    (long)iVar1 * 8 + (long)*(int *)((long)pppppppplStack_198 + 5));
                  if (local_1a0[4][*puVar15] == (long ******)0x41cff903b) {
                    uVar41 = puVar15[1];
                    if ((int)uVar41 < 0) goto LAB_71025dd414;
                    pbVar11 = (byte *)((long)pppppppplStack_198 + (long)(int)uVar41);
                    pppppppplVar51 = local_1a0;
                    goto LAB_71025dd420;
                  }
                  iVar6 = iVar1 + -1;
                  if (local_1a0[4][*puVar15] < (long ******)0x41cff903c) {
                    iVar39 = iVar1 + 1;
                    iVar6 = iVar23;
                  }
                  iVar23 = iVar6;
                } while (iVar39 <= iVar23);
                pppppppplVar51 = (long ********)0x0;
              }
              else {
LAB_71025dd414:
                pppppppplVar51 = (long ********)0x0;
                pbVar11 = &DAT_7104742dbb;
              }
LAB_71025dd420:
              if (((*pbVar11 == 0xb) && (*(int *)(pbVar11 + 1) < 0x2d)) &&
                 (0 < *(int *)(pbVar11 + 1))) {
                iVar23 = 0;
                lVar29 = 0;
                uVar41 = 0xb;
                lVar32 = 0x70;
                do {
                  if ((int)lVar29 < 0) {
LAB_71025dd4a0:
                    local_1e0 = (long ********)0x0;
                    pbStack_1d8 = &DAT_7104742dbb;
                  }
                  else {
                    pbStack_1d8 = &DAT_7104742dbb;
                    local_1e0 = (long ********)0x0;
                    if (uVar41 == 0xb) {
                      if (*(int *)(pbVar11 + 1) <= (int)lVar29) goto LAB_71025dd4a0;
                      pbStack_1d8 = pbVar11 + *(int *)(pbVar11 + (long)iVar23 + 5);
                      local_1e0 = pppppppplVar51;
                    }
                  }
                  uVar46 = FUN_71025e84d0((long *)&local_1e0,*plVar48 + lVar32);
                  if ((uVar46 & 1) == 0) break;
                  uVar41 = (uint)*pbVar11;
                  lVar29 = lVar29 + 1;
                  if (uVar41 - 0xb < 2) {
                    iVar39 = *(int *)(pbVar11 + 1);
                  }
                  else {
                    iVar39 = 0;
                  }
                  lVar32 = lVar32 + 0xa0;
                  iVar23 = iVar23 + 4;
                } while (lVar29 < iVar39);
              }
            }
          }
        }
      }
LAB_71025da688:
      uVar46 = (ulong)local_190 & 0xffffffff;
      if ((uint)local_190 != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,(uint)local_190,param_3,(byte ****)param_4,(long ****)param_5,
                       param_6,param_7,param_8);
        local_190 = (long ********)CONCAT44(local_190._4_4_,0xffffff);
        uVar46 = extraout_x1_02;
      }
    }
    if (uVar8 != 0xffffff) {
      FUN_7103540b10(DAT_7105332f20,uVar8,param_3,(byte ****)param_4,(long ****)param_5,param_6,
                     param_7,param_8);
      local_1e8[0] = 0xffffff;
      uVar46 = extraout_x1_03;
    }
  }
  iVar23 = (int)param_1[0x80];
  uVar8 = iVar23 - 1;
  plVar48 = param_1 + 0x7a;
  if (uVar8 < 6) {
    *(int *)(param_1 + 0x99) = iVar23 + 0x22;
    param_1[0x98] = param_1[0x7f];
    *(undefined8 *)((long)param_1 + 0x4cc) = 0x100000000;
    plVar16 = *(long **)(*(long *)(param_1[0x7b] + 0x310) + 0xd0);
    plVar35 = *(long **)(*(long *)(param_1[0x7b] + 0x310) + 0xd8);
    if (plVar16 != plVar35) {
      if (4 < iVar23 - 2U) {
        uVar8 = 0;
      }
LAB_71025da72c:
      if (((int)plVar16[1] != 4) ||
         (lVar29 = *plVar16,
         ((&DAT_7104550e48)[(int)uVar8] & 0xffffffffff) != *(ulong *)(lVar29 + 0x68)))
      goto LAB_71025da748;
      param_1[0xda] = lVar29;
      if (lVar29 == 0) goto LAB_71025da758;
      if ((*(char *)(lVar29 + 0xe0) != '\0') && (*(long *)(lVar29 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar29 + 200) + 0x30) = 0;
      }
      if (*(long *)(lVar29 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar29 + 0xd8) + 0x21) = 0;
      }
      if (*(char *)(lVar29 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar29 + 0xb0) + 0x10) = 1;
      }
      lVar29 = param_1[0xda];
      if (lVar29 != 0) {
        *(undefined1 *)(lVar29 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar29 + 0x108),uVar46,(long ****)param_3,(byte ****)param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        lVar29 = param_1[0xda];
        if (((lVar29 != 0) && (*(char *)(lVar29 + 0xe0) != '\0')) &&
           (uVar8 = (**(code **)(**(long **)(lVar29 + 0x90) + 0x220))(), uVar8 != 0)) {
          uVar41 = 0;
          do {
            lVar29 = param_1[0xda];
            if (((lVar29 != 0) && (*(char *)(lVar29 + 0xe0) != '\0')) &&
               (uVar9 = (**(code **)(**(long **)(lVar29 + 0x90) + 0x220))(), uVar41 < uVar9)) {
              pbVar11 = (byte *)(**(code **)(**(long **)(lVar29 + 0x90) + 0x228))
                                          (*(long **)(lVar29 + 0x90),uVar41);
              uVar9 = (uint)*pbVar11;
              if (*pbVar11 == 0) {
                uVar50 = 0;
                uVar46 = 0;
              }
              else {
                uVar46 = 0;
                uVar33 = 0xffffffff;
                do {
                  pbVar11 = pbVar11 + 1;
                  uVar2 = uVar9 + 0x20;
                  if (0x19 < uVar9 - 0x41) {
                    uVar2 = uVar9;
                  }
                  uVar33 = (&DAT_7104754084)[(uVar2 ^ uVar33) & 0xff] ^ uVar33 >> 8;
                  uVar9 = (uint)*pbVar11;
                  uVar46 = uVar46 + 0x100000000;
                } while (uVar9 != 0);
                uVar50 = (ulong)~uVar33;
                uVar46 = uVar46 & 0xff00000000;
              }
              param_3 = (long *********)0x0;
              (**(code **)(**(long **)(lVar29 + 0x90) + 0x180))
                        (*(long **)(lVar29 + 0x90),uVar46 | uVar50);
            }
            uVar41 = uVar41 + 1;
          } while (uVar41 != uVar8);
        }
      }
      uVar8 = *(uint *)(param_1[0x7b] + 8);
      if ((uVar8 == 3) || ((uVar8 < 0x16c && ((&DAT_710454a7f0)[(long)(int)uVar8 * 0x12] != 0)))) {
        FUN_710353da30((uint *)&local_1a0,0x29d5e52863);
        uVar8 = (uint)local_1a0;
        bVar7 = FUN_7103720ec0(param_1 + 0x94,(uint)local_1a0,param_3,(byte ****)param_4,
                               (long ****)param_5,param_6,param_7,param_8);
        if (uVar8 != 0xffffff) {
          FUN_7103540b10(DAT_7105332f20,uVar8,param_3,(byte ****)param_4,(long ****)param_5,param_6,
                         param_7,param_8);
          local_1a0 = (long ********)CONCAT44(local_1a0._4_4_,0xffffff);
        }
        if (bVar7) goto LAB_71025daf10;
        goto LAB_71025da758;
      }
      uVar8 = *(uint *)(param_1[0x7b] + 0xb8);
      if (2 < uVar8) goto LAB_71025dd4f8;
      lVar29 = *(long *)(DAT_710532a9d0 + (ulong)uVar8 * 8);
      for (puVar15 = *(uint **)(lVar29 + 0x228); puVar15 != *(uint **)(lVar29 + 0x230);
          puVar15 = puVar15 + 1) {
        uVar8 = *puVar15;
        if (((uVar8 != 0xffffff) &&
            (uVar8 < *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 4))) &&
           (*(long *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x60) + (ulong)uVar8 * 0x20 +
                     0x18) == 0xfb5ffc066)) {
          FUN_7103540a00(DAT_7105332f20,uVar8);
          bVar7 = FUN_7103720ec0(param_1 + 0x94,uVar8,param_3,(byte ****)param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
          FUN_7103540b10(DAT_7105332f20,uVar8,param_3,(byte ****)param_4,(long ****)param_5,param_6,
                         param_7,param_8);
          if (bVar7) goto LAB_71025daf10;
          goto LAB_71025da758;
        }
      }
      bVar7 = FUN_7103720ec0(param_1 + 0x94,0xffffff,param_3,(byte ****)param_4,(long ****)param_5,
                             param_6,param_7,param_8);
      if (!bVar7) goto LAB_71025da758;
LAB_71025daf10:
      lVar29 = param_1[0x96] - param_1[0x95];
      if (lVar29 == 0) {
        uVar46 = 0xffffffff;
      }
      else {
        uVar46 = 0;
        do {
          if (((param_1[0x98] ^ *(ulong *)(param_1[0x95] + uVar46 * 0x20)) & 0xffffffffff) == 0)
          goto LAB_71025daf88;
          uVar46 = (ulong)((int)uVar46 + 1);
        } while (uVar46 < (ulong)(lVar29 >> 5));
        uVar46 = 0xffffffff;
      }
LAB_71025daf88:
      FUN_710261c720((long)plVar48,uVar46,(long ****)param_3,(byte ****)param_4,(long ****)param_5,
                     param_6,param_7,param_8);
      goto LAB_71025db49c;
    }
LAB_71025da754:
    param_1[0xda] = 0;
LAB_71025da758:
    uVar46 = param_1[0x92];
    if (uVar46 != 0) {
      param_1[0x92] = 0;
      FUN_710392eb40(uVar46);
      uVar46 = param_1[0x92];
      param_1[0x92] = 0;
      if (uVar46 != 0) {
        FUN_710392eb40(uVar46);
      }
      *(undefined4 *)(param_1 + 0x93) = 0;
    }
    uVar8 = *(uint *)(param_1[0x7b] + 8);
    if ((uVar8 == 3) || ((uVar8 < 0x16c && ((&DAT_710454a7f0)[(long)(int)uVar8 * 0x12] != 0)))) {
      FUN_710353da30((uint *)&local_1a0,0x29d5e52863);
      uVar8 = (uint)local_1a0;
      bVar7 = FUN_7103720ec0(param_1 + 0x94,(uint)local_1a0,param_3,(byte ****)param_4,
                             (long ****)param_5,param_6,param_7,param_8);
      if (uVar8 != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,uVar8,param_3,(byte ****)param_4,(long ****)param_5,param_6,
                       param_7,param_8);
        local_1a0 = (long ********)CONCAT44(local_1a0._4_4_,0xffffff);
      }
      if (bVar7) {
LAB_71025da8c0:
        if ((int)((ulong)(*(long *)(*(long *)(param_1[0x7b] + 0x300) + 0x38) -
                         *(long *)(*(long *)(param_1[0x7b] + 0x300) + 0x30)) >> 3) != 0) {
          lVar29 = param_1[0x96] - param_1[0x95];
          if (lVar29 != 0) {
            uVar46 = 1;
            uVar50 = 0;
LAB_71025da904:
            uVar28 = uVar46;
            iVar23 = (int)uVar28;
            if (((param_1[0x98] ^ *(ulong *)(param_1[0x95] + uVar50 * 0x20)) & 0xffffffffff) != 0)
            goto code_r0x0071025da918;
            if (iVar23 == 0) goto LAB_71025db49c;
            uVar8 = iVar23 - 1;
            FUN_710261c720((long)plVar48,(ulong)uVar8,(long ****)param_3,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            lVar29 = param_1[0x95] + (ulong)uVar8 * 0x20;
            lVar32 = *(long *)(lVar29 + 8);
            uVar46 = *(long *)(lVar29 + 0x10) - lVar32;
            if (uVar46 == 0) {
              iVar23 = 0;
            }
            else {
              uVar50 = 0;
              plVar48 = *(long **)(*(long *)(param_1[0x7b] + 0x300) + 0x30);
              plVar16 = *(long **)(*(long *)(param_1[0x7b] + 0x300) + 0x38);
              lVar29 = 0;
              do {
                if (plVar48 != plVar16) {
                  plVar35 = plVar48;
                  do {
                    plVar38 = plVar35 + 1;
                    lVar25 = *plVar35;
                    if (((*(ulong *)(lVar25 + 0x18) ^ *(ulong *)(lVar32 + uVar50 * 8)) &
                        0xffffffffff) == 0) {
                      if (lVar25 != 0) {
                        lVar29 = lVar29 + (*(long *)(lVar25 + 0x28) - *(long *)(lVar25 + 0x20) >> 4)
                        ;
                      }
                      break;
                    }
                    plVar35 = plVar38;
                  } while (plVar16 != plVar38);
                }
                iVar23 = (int)lVar29;
                uVar50 = (ulong)((int)uVar50 + 1);
              } while (uVar50 < (ulong)((long)uVar46 >> 3));
            }
            iVar23 = (int)(uVar46 >> 1) + iVar23 * 8;
            if (iVar23 == 0) goto LAB_71025db49c;
            uVar41 = iVar23 * 3;
            pppppppplVar17 = (long ********)((ulong)uVar41 * 0x40);
            pppppppplVar51 = pppppppplVar17;
            if (uVar41 == 0) {
              pppppppplVar51 = (long ********)0x1;
            }
            *(uint *)(param_1 + 0x93) = uVar41;
            puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,pppppppplVar51,(long ****)param_3,(byte ****)param_4,
                                     (long ****)param_5,param_6,param_7,param_8);
            if (puVar10 == (undefined8 *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_1c0 = (long ********)((ulong)local_1c0 & 0xffffffff00000000);
                pppplVar44 = (long ****)&local_1a0;
                local_1a0 = pppppppplVar51;
                uVar50 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c0);
                if (((uVar50 & 1) != 0) &&
                   (puVar10 = (undefined8 *)
                              FUN_710392e290(0x10,pppppppplVar51,pppplVar44,(byte ****)param_4,
                                             (long ****)param_5,param_6,param_7,param_8),
                   puVar10 != (undefined8 *)0x0)) goto LAB_71025db00c;
              }
              puVar10 = (undefined8 *)0x0;
            }
LAB_71025db00c:
            if (uVar41 != 0) {
              pppppppplVar17 = pppppppplVar17 + -8;
              uVar9 = ((uint)((ulong)pppppppplVar17 >> 6) & 0x3ffffff) + 1;
              uVar50 = (ulong)uVar9 & 7;
              puVar24 = puVar10;
              if ((uVar9 & 7) != 0) {
                puVar24 = puVar10 + uVar50 * 8;
                lVar29 = -uVar50;
                puVar37 = puVar10;
                do {
                  *puVar37 = 0;
                  puVar37[1] = 0;
                  lVar29 = lVar29 + 1;
                  puVar37 = puVar37 + 8;
                } while (lVar29 != 0);
              }
              if ((long ********)0x1bf < pppppppplVar17) {
                do {
                  puVar24[1] = 0;
                  *puVar24 = 0;
                  puVar24[9] = 0;
                  puVar24[8] = 0;
                  puVar24[0x11] = 0;
                  puVar24[0x10] = 0;
                  puVar24[0x19] = 0;
                  puVar24[0x18] = 0;
                  puVar24[0x21] = 0;
                  puVar24[0x20] = 0;
                  puVar24[0x29] = 0;
                  puVar24[0x28] = 0;
                  puVar24[0x31] = 0;
                  puVar24[0x30] = 0;
                  puVar24[0x39] = 0;
                  puVar24[0x38] = 0;
                  puVar24 = puVar24 + 0x40;
                } while (puVar24 != puVar10 + (ulong)uVar41 * 8);
              }
            }
            uVar50 = param_1[0x92];
            param_1[0x92] = (long)puVar10;
            if (uVar50 != 0) {
              FUN_710392eb40(uVar50);
            }
            uVar41 = (int)param_1[0x99] - 0x23;
            if (5 < uVar41) {
              uVar41 = 0xffffffff;
            }
            if (uVar46 == 0) goto LAB_71025db49c;
            puVar10 = (undefined8 *)param_1[0x92];
            lVar29 = (ulong)uVar41 * 0x14;
            uVar50 = 0;
LAB_71025db118:
            plVar48 = *(long **)(*(long *)(param_1[0x7b] + 0x300) + 0x30);
            plVar16 = *(long **)(*(long *)(param_1[0x7b] + 0x300) + 0x38);
            if (plVar48 != plVar16) {
              do {
                plVar35 = plVar48 + 1;
                lVar32 = *plVar48;
                if (((*(ulong *)(lVar32 + 0x18) ^
                     *(ulong *)(*(long *)(param_1[0x95] + (ulong)uVar8 * 0x20 + 8) + uVar50 * 8)) &
                    0xffffffffff) == 0) {
                  if ((lVar32 != 0) &&
                     (lVar25 = *(long *)(lVar32 + 0x28) - *(long *)(lVar32 + 0x20), lVar25 != 0)) {
                    uVar47 = lVar25 >> 4;
                    uVar28 = 0;
                    goto LAB_71025db1e8;
                  }
                  break;
                }
                plVar48 = plVar35;
              } while (plVar16 != plVar35);
            }
            goto LAB_71025db48c;
          }
        }
      }
    }
    else {
      uVar8 = *(uint *)(param_1[0x7b] + 0xb8);
      if (2 < uVar8) goto LAB_71025dd4f8;
      lVar29 = *(long *)(DAT_710532a9d0 + (ulong)uVar8 * 8);
      for (puVar15 = *(uint **)(lVar29 + 0x228); puVar15 != *(uint **)(lVar29 + 0x230);
          puVar15 = puVar15 + 1) {
        uVar8 = *puVar15;
        if (((uVar8 != 0xffffff) &&
            (uVar8 < *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 4))) &&
           (*(long *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x60) + (ulong)uVar8 * 0x20 +
                     0x18) == 0xfb5ffc066)) {
          FUN_7103540a00(DAT_7105332f20,uVar8);
          bVar7 = FUN_7103720ec0(param_1 + 0x94,uVar8,param_3,(byte ****)param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
          FUN_7103540b10(DAT_7105332f20,uVar8,param_3,(byte ****)param_4,(long ****)param_5,param_6,
                         param_7,param_8);
          if (bVar7) goto LAB_71025da8c0;
          goto LAB_71025db49c;
        }
      }
      bVar7 = FUN_7103720ec0(param_1 + 0x94,0xffffff,param_3,(byte ****)param_4,(long ****)param_5,
                             param_6,param_7,param_8);
      if (bVar7) goto LAB_71025da8c0;
    }
  }
  else if (iVar23 - 7U < 3) {
    *(undefined4 *)(param_1 + 0x99) = 0;
    *(undefined4 *)(param_1 + 0x9a) = 2;
    param_1[0x98] = 0;
    *(int *)((long)param_1 + 0x4cc) = iVar23;
    FUN_7102619ee0((long)plVar48,uVar46,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    *(undefined4 *)(param_1 + 0x9a) = 0;
    param_1[0x99] = 0;
    param_1[0x98] = 0;
  }
LAB_71025db49c:
  uVar8 = *(uint *)(param_1 + 0x17);
  lVar29 = param_1[99];
  *(uint *)(lVar29 + 0xb4) = uVar8;
  if (2 < uVar8) goto LAB_71025dd4f8;
  lVar30 = *(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1d0);
  lVar25 = *(long *)(DAT_710532a9d0 + (ulong)uVar8 * 8);
  lVar32 = lVar25 + 0xd0;
  pcVar20 = "reflection_cubemap";
  pcVar21 = ".nutexb";
  FUN_7102618630((uint *)&local_1a0,lVar32,(byte *)"reflection_cubemap",(byte *)".nutexb");
  ppppppppplVar43 = (long *********)(lVar29 + 0x20);
  uVar8 = (uint)local_1a0;
  if (*(uint *)ppppppppplVar43 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,*(uint *)ppppppppplVar43,(long *********)pcVar20,
                   (byte ****)pcVar21,(long ****)param_5,param_6,param_7,param_8);
  }
  *(uint *)ppppppppplVar43 = uVar8;
  if (uVar8 != 0xffffff) {
    FUN_71031768a0(lVar30,*(ulong *)(lVar29 + 8),ppppppppplVar43,(byte ****)pcVar21,
                   (long ****)param_5,param_6,param_7,param_8);
  }
  pcVar20 = "render_param";
  ppppbVar22 = (byte ****)&DAT_7104452722;
  FUN_7102618630((uint *)&local_1a0,lVar32,(byte *)"render_param",&DAT_7104452722);
  ppppppppplVar43 = (long *********)(lVar29 + 0x24);
  uVar8 = (uint)local_1a0;
  if (*(uint *)ppppppppplVar43 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,*(uint *)ppppppppplVar43,(long *********)pcVar20,ppppbVar22,
                   (long ****)param_5,param_6,param_7,param_8);
  }
  *(uint *)ppppppppplVar43 = uVar8;
  if (uVar8 == 0xffffff) {
    FUN_710353da30((uint *)&local_1a0,0x24db226e19);
    ppppppppplVar43 = (long *********)&local_1a0;
    FUN_7103176ba0(lVar30,*(ulong *)(lVar29 + 8),ppppppppplVar43,ppppbVar22,(long ****)param_5,
                   param_6,param_7,param_8);
    if ((uint)local_1a0 != 0xffffff) {
      FUN_7103540b10(DAT_7105332f20,(uint)local_1a0,ppppppppplVar43,ppppbVar22,(long ****)param_5,
                     param_6,param_7,param_8);
      local_1a0 = (long ********)CONCAT44(local_1a0._4_4_,0xffffff);
    }
  }
  else {
    FUN_7103176ba0(lVar30,*(ulong *)(lVar29 + 8),ppppppppplVar43,ppppbVar22,(long ****)param_5,
                   param_6,param_7,param_8);
  }
  puVar53 = (ulong *)(lVar29 + 8);
  uVar46 = *puVar53;
  puVar13 = (ulong *)FUN_710392e290(0x10,0x140,(long ****)ppppppppplVar43,ppppbVar22,
                                    (long ****)param_5,param_6,param_7,param_8);
  if (puVar13 == (ulong *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1c0 = (long ********)((ulong)local_1c0 & 0xffffffff00000000);
      local_1a0 = (long ********)&DAT_00000140;
      ppppppppplVar43 = (long *********)&local_1a0;
      uVar50 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c0);
      if (((uVar50 & 1) != 0) &&
         (puVar13 = (ulong *)FUN_710392e290(0x10,0x140,(long ****)ppppppppplVar43,ppppbVar22,
                                            (long ****)param_5,param_6,param_7,param_8),
         puVar13 != (ulong *)0x0)) goto LAB_71025db648;
    }
    puVar13 = (ulong *)0x0;
  }
LAB_71025db648:
  puVar45 = puVar13 + 2;
  *puVar45 = 0;
  *(undefined1 *)((long)puVar13 + 0x3c) = 1;
  *(undefined1 *)((long)puVar13 + 0x4c) = 1;
  *puVar13 = uVar46;
  puVar13[1] = (ulong)puVar45;
  puVar13[3] = 0;
  puVar13[5] = 0;
  puVar13[6] = 0;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined2 *)((long)puVar13 + 0x24) = 0;
  *(undefined4 *)(puVar13 + 7) = 0;
  puVar13[8] = 0;
  *(undefined4 *)(puVar13 + 9) = 0;
  *(undefined1 *)(puVar13 + 0x14) = 0;
  *(undefined1 *)(puVar13 + 0x1a) = 0;
  *(undefined1 *)(puVar13 + 0x1e) = 0;
  *(undefined1 *)(puVar13 + 0x22) = 0;
  puVar13[0xb] = 0;
  puVar13[10] = 0x3f800000;
  puVar13[0xd] = 0;
  puVar13[0xc] = 0x3f80000000000000;
  *(undefined4 *)(puVar13 + 0x12) = 0x3f800000;
  puVar13[0xf] = 0x3f800000;
  puVar13[0xe] = 0;
  puVar13[0x11] = 0x3f80000000000000;
  puVar13[0x10] = 0;
  pppplVar44 = *(long *****)(lVar25 + 0x3d8);
  pppplVar56 = *(long *****)(lVar25 + 0x3e0);
  if (pppplVar44 == pppplVar56) {
LAB_71025db92c:
    FUN_710353da30((uint *)&local_1d0,0x2fd53728ac);
    puVar14 = (undefined4 *)
              FUN_710392e290(0x10,0x3b0,(long ****)ppppppppplVar43,ppppbVar22,(long ****)param_5,
                             param_6,param_7,param_8);
    if (puVar14 == (undefined4 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1c0 = (long ********)((ulong)local_1c0 & 0xffffffff00000000);
        local_1a0 = (long ********)&DAT_000003b0;
        ppppppppplVar43 = (long *********)&local_1a0;
        uVar46 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c0);
        if (((uVar46 & 1) != 0) &&
           (puVar14 = (undefined4 *)
                      FUN_710392e290(0x10,0x3b0,(long ****)ppppppppplVar43,ppppbVar22,
                                     (long ****)param_5,param_6,param_7,param_8),
           puVar14 != (undefined4 *)0x0)) goto LAB_71025db99c;
      }
      puVar14 = (undefined4 *)0x0;
    }
LAB_71025db99c:
    FUN_710132e020(puVar14,(long ****)&local_1d0,(long ****)ppppppppplVar43,ppppbVar22,
                   (long ****)param_5,param_6,param_7,param_8);
    if (*(long *)(puVar14 + 2) == 0) {
LAB_71025dba1c:
      plVar48 = *(long **)(puVar14 + 4);
      if (plVar48 != (long *)0x0) {
        plVar16 = plVar48 + 1;
        do {
          lVar31 = *plVar16;
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar7) {
            *plVar16 = lVar31 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar31 == 0) {
          (**(code **)(*plVar48 + 0x10))(plVar48);
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_710392eb40((ulong)puVar14);
    }
    else {
      puVar49 = (ulong *)puVar13[2];
      puVar13[8] = (ulong)puVar14;
      puVar34 = puVar45;
      puVar58 = puVar45;
      while (puVar49 != (ulong *)0x0) {
        while (puVar58 = puVar49, 0x7e35e00df < (puVar58[4] & 0xffffffffff)) {
          puVar49 = (ulong *)*puVar58;
          puVar34 = puVar58;
          if ((ulong *)*puVar58 == (ulong *)0x0) {
            uVar46 = *puVar58;
            goto joined_r0x0071025dba68;
          }
        }
        if ((puVar58[4] & 0xffffffffff) == 0x7e35e00df) break;
        puVar34 = puVar58 + 1;
        puVar49 = (ulong *)*puVar34;
      }
      uVar46 = *puVar34;
joined_r0x0071025dba68:
      if (uVar46 != 0) goto LAB_71025dba1c;
      plVar48 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar43,ppppbVar22,
                                       (long ****)param_5,param_6,param_7,param_8);
      if (plVar48 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_1c0 = (long ********)((ulong)local_1c0 & 0xffffffff00000000);
          local_1a0 = (long ********)&DAT_00000030;
          ppppppppplVar43 = (long *********)&local_1a0;
          uVar46 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c0);
          if (((uVar46 & 1) != 0) &&
             (plVar48 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar43,ppppbVar22,
                                               (long ****)param_5,param_6,param_7,param_8),
             plVar48 != (long *)0x0)) goto LAB_71025dbac8;
        }
        plVar48 = (long *)0x0;
      }
LAB_71025dbac8:
      plVar48[4] = 0x7e35e00df;
      plVar48[5] = (long)puVar14;
      plVar48[2] = (long)puVar58;
      *plVar48 = 0;
      plVar48[1] = 0;
      *puVar34 = (ulong)plVar48;
      if (*(ulong *)puVar13[1] != 0) {
        puVar13[1] = *(ulong *)puVar13[1];
        plVar48 = (long *)*puVar34;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>((long *)*puVar45,plVar48);
      puVar13[3] = puVar13[3] + 1;
    }
    if ((uint)local_1d0 != 0xffffff) {
      FUN_7103540b10(DAT_7105332f20,(uint)local_1d0,ppppppppplVar43,ppppbVar22,(long ****)param_5,
                     param_6,param_7,param_8);
      local_1d0 = (long ********)CONCAT44(local_1d0._4_4_,0xffffff);
    }
  }
  else {
    do {
      puVar14 = (undefined4 *)
                FUN_710392e290(0x10,0x3b0,(long ****)ppppppppplVar43,ppppbVar22,(long ****)param_5,
                               param_6,param_7,param_8);
      if (puVar14 == (undefined4 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_1c0 = (long ********)((ulong)local_1c0 & 0xffffffff00000000);
          local_1a0 = (long ********)&DAT_000003b0;
          ppppppppplVar43 = (long *********)&local_1a0;
          uVar46 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c0);
          if (((uVar46 & 1) != 0) &&
             (puVar14 = (undefined4 *)
                        FUN_710392e290(0x10,0x3b0,(long ****)ppppppppplVar43,ppppbVar22,
                                       (long ****)param_5,param_6,param_7,param_8),
             puVar14 != (undefined4 *)0x0)) goto LAB_71025db748;
        }
        puVar14 = (undefined4 *)0x0;
      }
LAB_71025db748:
      FUN_710132e020(puVar14,pppplVar44,(long ****)ppppppppplVar43,ppppbVar22,(long ****)param_5,
                     param_6,param_7,param_8);
      uVar8 = *(uint *)pppplVar44;
      if ((uVar8 == 0xffffff) ||
         (*(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 4) <= uVar8)) {
        uVar46 = 0;
        puVar58 = (ulong *)*puVar45;
      }
      else {
        uVar46 = *(ulong *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x60) +
                            (ulong)uVar8 * 0x20 + 0x18);
        puVar58 = (ulong *)*puVar45;
      }
      puVar34 = puVar45;
      puVar49 = puVar45;
      if (puVar58 != (ulong *)0x0) {
        do {
          while (puVar49 = puVar58, (uVar46 & 0xffffffffff) < (puVar49[4] & 0xffffffffff)) {
            puVar34 = puVar49;
            puVar58 = (ulong *)*puVar49;
            if ((ulong *)*puVar49 == (ulong *)0x0) {
              uVar50 = *puVar49;
              goto joined_r0x0071025db854;
            }
          }
          if ((uVar46 & 0xffffffffff) <= (puVar49[4] & 0xffffffffff)) break;
          puVar34 = puVar49 + 1;
          puVar58 = (ulong *)*puVar34;
        } while ((ulong *)*puVar34 != (ulong *)0x0);
      }
      uVar50 = *puVar34;
joined_r0x0071025db854:
      if (uVar50 == 0) {
        plVar48 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar43,ppppbVar22,
                                         (long ****)param_5,param_6,param_7,param_8);
        if (plVar48 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1c0 = (long ********)((ulong)local_1c0 & 0xffffffff00000000);
            local_1a0 = (long ********)&DAT_00000030;
            ppppppppplVar43 = (long *********)&local_1a0;
            uVar50 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c0);
            if (((uVar50 & 1) != 0) &&
               (plVar48 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar43,ppppbVar22,
                                                 (long ****)param_5,param_6,param_7,param_8),
               plVar48 != (long *)0x0)) goto LAB_71025db8b4;
          }
          plVar48 = (long *)0x0;
        }
LAB_71025db8b4:
        plVar48[4] = uVar46;
        plVar48[5] = (long)puVar14;
        plVar48[2] = (long)puVar49;
        *plVar48 = 0;
        plVar48[1] = 0;
        *puVar34 = (ulong)plVar48;
        plVar16 = plVar48;
        if (*(ulong *)puVar13[1] != 0) {
          puVar13[1] = *(ulong *)puVar13[1];
          plVar16 = (long *)*puVar34;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>((long *)puVar13[2],plVar16);
        puVar13[3] = puVar13[3] + 1;
        puVar13[8] = plVar48[5];
      }
      else {
        puVar13[8] = *(ulong *)(uVar50 + 0x28);
        plVar48 = *(long **)(puVar14 + 4);
        if (plVar48 != (long *)0x0) {
          plVar16 = plVar48 + 1;
          do {
            lVar31 = *plVar16;
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar7) {
              *plVar16 = lVar31 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar31 == 0) {
            (**(code **)(*plVar48 + 0x10))(plVar48);
            std::__shared_weak_count::__release_weak();
          }
        }
        FUN_710392eb40((ulong)puVar14);
      }
      pppplVar44 = (long ****)((long)pppplVar44 + 4);
    } while (pppplVar44 != pppplVar56);
    if (puVar13[3] == 0) goto LAB_71025db92c;
  }
  uVar46 = *(ulong *)(lVar29 + 0x10);
  *(ulong **)(lVar29 + 0x10) = puVar13;
  if (uVar46 != 0) {
    if (*(char *)(uVar46 + 0x110) != '\0') {
      *(undefined1 *)(uVar46 + 0x110) = 0;
    }
    if (*(char *)(uVar46 + 0xf0) != '\0') {
      *(undefined1 *)(uVar46 + 0xf0) = 0;
    }
    if (*(char *)(uVar46 + 0xd0) != '\0') {
      *(undefined1 *)(uVar46 + 0xd0) = 0;
    }
    if (*(char *)(uVar46 + 0xa0) != '\0') {
      *(undefined1 *)(uVar46 + 0xa0) = 0;
    }
    FUN_71025f72c0(*(undefined8 **)(uVar46 + 0x10));
    FUN_710392eb40(uVar46);
  }
  uVar46 = *puVar53;
  puVar13 = (ulong *)FUN_710392e290(0x10,0x70,(long ****)ppppppppplVar43,ppppbVar22,
                                    (long ****)param_5,param_6,param_7,param_8);
  uVar19 = extraout_x1_04;
  if (puVar13 == (ulong *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1c0 = (long ********)((ulong)local_1c0 & 0xffffffff00000000);
      local_1a0 = (long ********)&DAT_00000070;
      ppppppppplVar43 = (long *********)&local_1a0;
      auVar63 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c0);
      uVar19 = auVar63._8_8_;
      if (((auVar63._0_8_ & 1) != 0) &&
         (puVar13 = (ulong *)FUN_710392e290(0x10,0x70,(long ****)ppppppppplVar43,ppppbVar22,
                                            (long ****)param_5,param_6,param_7,param_8),
         uVar19 = extraout_x1_05, puVar13 != (ulong *)0x0)) goto LAB_71025dbbc4;
    }
    puVar13 = (ulong *)0x0;
  }
LAB_71025dbbc4:
  puVar45 = puVar13 + 2;
  *puVar45 = 0;
  puVar13[3] = 0;
  puVar13[4] = 0;
  *(undefined2 *)(puVar13 + 5) = 0x101;
  *puVar13 = uVar46;
  puVar13[1] = (ulong)puVar45;
  *(undefined4 *)((long)puVar13 + 0x2c) = 0;
  puVar13[7] = 0;
  puVar13[6] = 0x3f800000;
  puVar13[9] = 0;
  puVar13[8] = 0x3f80000000000000;
  puVar13[0xb] = 0x3f800000;
  puVar13[10] = 0;
  puVar13[0xd] = 0x3f80000000000000;
  puVar13[0xc] = 0;
  ppppppppplVar54 = *(long **********)(lVar25 + 0x3f0);
  ppppppppplVar57 = *(long **********)(lVar25 + 0x3f8);
  if (ppppppppplVar54 != ppppppppplVar57) {
    do {
      bVar7 = FUN_710353d910(*(uint *)ppppppppplVar54,".nuanmb");
      uVar19 = extraout_x1_06;
      if (bVar7) {
        uVar8 = *(uint *)ppppppppplVar54;
        if ((uVar8 == 0xffffff) ||
           (*(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 4) <= uVar8)) {
          local_200 = 0;
        }
        else {
          local_200 = *(ulong *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x60) +
                                 (ulong)uVar8 * 0x20 + 0x18);
        }
        puVar15 = (uint *)FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar43,ppppbVar22,
                                         (long ****)param_5,param_6,param_7,param_8);
        if (puVar15 == (uint *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1c0 = (long ********)((ulong)local_1c0 & 0xffffffff00000000);
            local_1a0 = (long ********)&SUB_00000018;
            ppppppppplVar43 = (long *********)&local_1a0;
            uVar46 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c0);
            if (((uVar46 & 1) != 0) &&
               (puVar15 = (uint *)FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar43,ppppbVar22,
                                                 (long ****)param_5,param_6,param_7,param_8),
               puVar15 != (uint *)0x0)) goto LAB_71025dbce4;
          }
          puVar15 = (uint *)0x0;
        }
LAB_71025dbce4:
        *puVar15 = 0xffffff;
        uVar8 = *(uint *)ppppppppplVar54;
        uVar46 = (ulong)uVar8;
        *puVar15 = uVar8;
        if (uVar8 != 0xffffff) {
          FUN_7103540a00(DAT_7105332f20,uVar8);
          uVar46 = extraout_x1_07;
        }
        puVar15[2] = 0;
        puVar15[3] = 0;
        puVar15[4] = 0;
        puVar15[5] = 0;
        pppppppplStack_198 = (long ********)0x0;
        local_190 = (long ********)0x0;
        local_1a0 = (long ********)0x0;
        FUN_710132e5f0(&local_1a0,uVar46,(long ****)ppppppppplVar43,ppppbVar22,(long ****)param_5,
                       param_6,param_7,param_8);
        pppppppplVar51 = pppppppplStack_198;
        pppppppplVar17 = pppppppplStack_198 + -6;
        std::string::assign((char *)(pppppppplStack_198 + -3));
        ppppppplVar55 = pppppppplVar51[-5];
        if (ppppppplVar55 < pppppppplVar51[-4]) {
          *(undefined4 *)(ppppppplVar55 + 3) = 0;
          ppppppplVar55[1] = (long ******)0x0;
          ppppppplVar55[2] = (long ******)0x0;
          *ppppppplVar55 = (long ******)0x0;
          ppppppplVar55 = pppppppplVar51[-5] + 4;
          pppppppplVar51[-5] = ppppppplVar55;
        }
        else {
          FUN_710132e830((long *)pppppppplVar17,extraout_x1_08,(long ****)ppppppppplVar43,ppppbVar22
                         ,(long ****)param_5,param_6,param_7,param_8);
          ppppppplVar55 = pppppppplVar51[-5];
        }
        std::string::assign((char *)(ppppppplVar55 + -4));
        *(undefined4 *)(pppppppplVar51[-5] + -1) = 3;
        ppppppplVar55 = pppppppplVar51[-5];
        if (ppppppplVar55 < pppppppplVar51[-4]) {
          *(undefined4 *)(ppppppplVar55 + 3) = 0;
          ppppppplVar55[1] = (long ******)0x0;
          ppppppplVar55[2] = (long ******)0x0;
          *ppppppplVar55 = (long ******)0x0;
          ppppppplVar55 = pppppppplVar51[-5] + 4;
          pppppppplVar51[-5] = ppppppplVar55;
        }
        else {
          FUN_710132e830((long *)pppppppplVar17,extraout_x1_09,(long ****)ppppppppplVar43,ppppbVar22
                         ,(long ****)param_5,param_6,param_7,param_8);
          ppppppplVar55 = pppppppplVar51[-5];
        }
        std::string::assign((char *)(ppppppplVar55 + -4));
        *(undefined4 *)(pppppppplVar51[-5] + -1) = 2;
        ppppppplVar55 = pppppppplVar51[-5];
        if (ppppppplVar55 < pppppppplVar51[-4]) {
          *(undefined4 *)(ppppppplVar55 + 3) = 0;
          ppppppplVar55[1] = (long ******)0x0;
          ppppppplVar55[2] = (long ******)0x0;
          *ppppppplVar55 = (long ******)0x0;
          ppppppplVar55 = pppppppplVar51[-5] + 4;
          pppppppplVar51[-5] = ppppppplVar55;
        }
        else {
          FUN_710132e830((long *)pppppppplVar17,extraout_x1_10,(long ****)ppppppppplVar43,ppppbVar22
                         ,(long ****)param_5,param_6,param_7,param_8);
          ppppppplVar55 = pppppppplVar51[-5];
        }
        std::string::assign((char *)(ppppppplVar55 + -4));
        *(undefined4 *)(pppppppplVar51[-5] + -1) = 1;
        ppppppppplVar43 = ppppppppplVar54;
        FUN_710367a9f0(&local_1d0,&local_1a0,(long ****)ppppppppplVar54,ppppbVar22,
                       (long ****)param_5,param_6,param_7,param_8);
        pppppppplVar51 = local_1d0;
        if (local_1d0 == (long ********)0x0) {
          puVar10 = (undefined8 *)0x0;
          pppppppplVar17 = local_1a0;
        }
        else {
          puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar43,ppppbVar22,
                                   (long ****)param_5,param_6,param_7,param_8);
          if (puVar10 == (undefined8 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_1e0 = (long ********)((ulong)local_1e0 & 0xffffffff00000000);
              local_1c0 = (long ********)&SUB_00000020;
              ppppppppplVar43 = &local_1c0;
              uVar46 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1e0);
              if (((uVar46 & 1) != 0) &&
                 (puVar10 = (undefined8 *)
                            FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar43,ppppbVar22,
                                           (long ****)param_5,param_6,param_7,param_8),
                 puVar10 != (undefined8 *)0x0)) goto LAB_71025dbe88;
            }
            puVar10 = (undefined8 *)0x0;
          }
LAB_71025dbe88:
          *puVar10 = &DAT_7105060348;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10[3] = pppppppplVar51;
          pppppppplVar17 = local_1a0;
        }
        local_1a0 = pppppppplVar17;
        pppppppplVar18 = pppppppplStack_198;
        if (pppppppplVar17 != (long ********)0x0) {
          while (pppppppplVar5 = pppppppplVar18, pppppppplVar5 != pppppppplVar17) {
            pppppppplVar18 = pppppppplVar5 + -6;
            if ((((ulong)pppppppplVar5[-3] & 1) != 0) && (pppppppplVar5[-1] != (long *******)0x0)) {
              FUN_710392eb40((ulong)pppppppplVar5[-1]);
            }
            ppppppplVar55 = *pppppppplVar18;
            if (ppppppplVar55 != (long *******)0x0) {
              ppppppplVar26 = pppppppplVar5[-5];
              if (ppppppplVar26 == ppppppplVar55) {
                pppppppplVar5[-5] = ppppppplVar55;
                ppppppplVar26 = ppppppplVar55;
              }
              else {
                do {
                  ppppppplVar52 = ppppppplVar26 + -4;
                  if ((((ulong)*ppppppplVar52 & 1) != 0) && (ppppppplVar26[-2] != (long ******)0x0))
                  {
                    FUN_710392eb40((ulong)ppppppplVar26[-2]);
                  }
                  ppppppplVar26 = ppppppplVar52;
                } while (ppppppplVar55 != ppppppplVar52);
                ppppppplVar26 = *pppppppplVar18;
                pppppppplVar5[-5] = ppppppplVar55;
              }
              if (ppppppplVar26 != (long *******)0x0) {
                FUN_710392eb40((ulong)ppppppplVar26);
              }
            }
          }
          pppppppplStack_198 = pppppppplVar17;
          if (local_1a0 != (long ********)0x0) {
            FUN_710392eb40((ulong)local_1a0);
          }
        }
        *(long *********)(puVar15 + 2) = pppppppplVar51;
        plVar48 = *(long **)(puVar15 + 4);
        *(undefined8 **)(puVar15 + 4) = puVar10;
        if (plVar48 != (long *)0x0) {
          plVar16 = plVar48 + 1;
          do {
            lVar31 = *plVar16;
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar7) {
              *plVar16 = lVar31 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar31 == 0) {
            (**(code **)(*plVar48 + 0x10))(plVar48);
            std::__shared_weak_count::__release_weak();
          }
        }
        plVar48 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar43,ppppbVar22,
                                         (long ****)param_5,param_6,param_7,param_8);
        if (plVar48 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1c0 = (long ********)((ulong)local_1c0 & 0xffffffff00000000);
            local_1a0 = (long ********)&DAT_00000030;
            ppppppppplVar43 = (long *********)&local_1a0;
            uVar46 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c0);
            if (((uVar46 & 1) != 0) &&
               (plVar48 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar43,ppppbVar22,
                                                 (long ****)param_5,param_6,param_7,param_8),
               plVar48 != (long *)0x0)) goto LAB_71025dc008;
          }
          plVar48 = (long *)0x0;
        }
LAB_71025dc008:
        plVar48[4] = local_200;
        plVar48[5] = (long)puVar15;
        puVar58 = puVar45;
        puVar34 = puVar45;
        if ((ulong *)*puVar45 != (ulong *)0x0) {
          puVar49 = (ulong *)*puVar45;
          do {
            while (puVar58 = puVar49, (local_200 & 0xffffffffff) < (puVar58[4] & 0xffffffffff)) {
              puVar49 = (ulong *)*puVar58;
              puVar34 = puVar58;
              if ((ulong *)*puVar58 == (ulong *)0x0) {
                uVar46 = *puVar58;
                goto joined_r0x0071025dc070;
              }
            }
            if ((local_200 & 0xffffffffff) <= (puVar58[4] & 0xffffffffff)) break;
            puVar34 = puVar58 + 1;
            puVar49 = (ulong *)*puVar34;
          } while ((ulong *)*puVar34 != (ulong *)0x0);
        }
        uVar46 = *puVar34;
joined_r0x0071025dc070:
        if (uVar46 == 0) {
          *plVar48 = 0;
          plVar48[1] = 0;
          plVar48[2] = (long)puVar58;
          *puVar34 = (ulong)plVar48;
          if (*(ulong *)puVar13[1] != 0) {
            puVar13[1] = *(ulong *)puVar13[1];
            plVar48 = (long *)*puVar34;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                    ((long *)puVar13[2],plVar48);
          puVar13[3] = puVar13[3] + 1;
          uVar19 = extraout_x1_12;
        }
        else {
          plVar48[5] = 0;
          if (puVar15 != (uint *)0x0) {
            plVar16 = *(long **)(puVar15 + 4);
            if (plVar16 != (long *)0x0) {
              plVar35 = plVar16 + 1;
              do {
                lVar31 = *plVar35;
                cVar3 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar35,0x10);
                if (bVar7) {
                  *plVar35 = lVar31 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar31 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (*puVar15 != 0xffffff) {
              FUN_7103540b10(DAT_7105332f20,*puVar15,ppppppppplVar43,ppppbVar22,(long ****)param_5,
                             param_6,param_7,param_8);
              *puVar15 = 0xffffff;
            }
            FUN_710392eb40((ulong)puVar15);
          }
          FUN_710392eb40((ulong)plVar48);
          uVar19 = extraout_x1_11;
        }
      }
      ppppppppplVar54 = (long *********)((long)ppppppppplVar54 + 4);
    } while (ppppppppplVar54 != ppppppppplVar57);
    if ((puVar13[3] != 0) &&
       (puVar34 = (ulong *)*puVar45, puVar58 = puVar45, puVar34 != (ulong *)0x0)) {
      do {
        bVar7 = (puVar34[4] & 0xfffffffffc) < 0x11fa117f7c;
        if (!bVar7) {
          puVar58 = puVar34;
        }
        puVar34 = (ulong *)puVar34[bVar7];
      } while (puVar34 != (ulong *)0x0);
      if ((puVar58 != puVar45) && ((puVar58[4] & 0xffffffffff) < 0x11fa117f7d)) {
        puVar13[4] = puVar58[5];
      }
    }
  }
  uVar46 = *(ulong *)(lVar29 + 0x18);
  *(ulong **)(lVar29 + 0x18) = puVar13;
  if (uVar46 != 0) {
    FUN_7102650860(*(undefined8 **)(uVar46 + 0x10),uVar19,ppppppppplVar43,ppppbVar22,
                   (long ****)param_5,param_6,param_7,param_8);
    FUN_710392eb40(uVar46);
  }
  FUN_7102618630((uint *)&local_1a0,lVar32,(byte *)"chara",(byte *)".shpcanim");
  if ((uint)local_1a0 == 0xffffff) {
    FUN_7102618630((uint *)&local_1c0,lVar32,(byte *)"chara",(byte *)".shpc");
  }
  else {
    local_1c0 = (long ********)CONCAT44(local_1c0._4_4_,(uint)local_1a0);
    local_1a0 = (long ********)CONCAT44(local_1a0._4_4_,0xffffff);
  }
  uVar8 = (uint)local_1c0;
  if ((uint)local_1c0 != 0xffffff) {
    ppppppppplVar54 = *(long **********)(lVar29 + 8);
    ppppppppplVar43 = &local_1c0;
    param_6 = (undefined1 (*) [16])0x1;
    param_5 = (undefined1 (*) [16])0x0;
    FUN_7103176db0(&local_1a0,lVar30,(long ****)ppppppppplVar54,(byte ****)ppppppppplVar43,
                   (long ****)0x0,1,param_7,param_8);
    pppppppplVar51 = local_1a0;
    local_1a0 = (long ********)0x0;
    puVar10 = *(undefined8 **)(lVar29 + 0x40);
    *(long *********)(lVar29 + 0x40) = pppppppplVar51;
    if (puVar10 != (undefined8 *)0x0) {
      FUN_7102619a80(puVar10,extraout_x1_13,ppppppppplVar54,(byte ****)ppppppppplVar43,
                     (long ****)param_5,param_6,param_7,param_8);
      FUN_710392eb40((ulong)puVar10);
    }
    local_1a0 = (long ********)0x0;
    FUN_7103540b10(DAT_7105332f20,uVar8,ppppppppplVar54,(byte ****)ppppppppplVar43,
                   (long ****)param_5,param_6,param_7,param_8);
    local_1c0 = (long ********)CONCAT44(local_1c0._4_4_,0xffffff);
  }
  pcVar20 = "stage";
  pcVar21 = ".shpcanim";
  FUN_7102618630((uint *)&local_1a0,lVar32,(byte *)"stage",(byte *)".shpcanim");
  if ((uint)local_1a0 == 0xffffff) {
    pcVar20 = "stage";
    pcVar21 = ".shpc";
    FUN_7102618630((uint *)&local_1c0,lVar32,(byte *)"stage",(byte *)".shpc");
  }
  else {
    local_1c0 = (long ********)CONCAT44(local_1c0._4_4_,(uint)local_1a0);
    local_1a0 = (long ********)CONCAT44(local_1a0._4_4_,0xffffff);
  }
  uVar8 = (uint)local_1c0;
  if ((uint)local_1c0 != 0xffffff) {
    pcVar20 = *(char **)(lVar29 + 8);
    pcVar21 = (char *)&local_1c0;
    param_5 = (undefined1 (*) [16])&DAT_00000004;
    param_6 = (undefined1 (*) [16])0x1;
    FUN_7103176db0(&local_1a0,lVar30,(long ****)pcVar20,(byte ****)pcVar21,(long ****)&DAT_00000004,
                   1,param_7,param_8);
    pppppppplVar51 = local_1a0;
    local_1a0 = (long ********)0x0;
    puVar10 = *(undefined8 **)(lVar29 + 0x48);
    *(long *********)(lVar29 + 0x48) = pppppppplVar51;
    if (puVar10 != (undefined8 *)0x0) {
      FUN_7102619a80(puVar10,extraout_x1_14,(long *********)pcVar20,(byte ****)pcVar21,
                     (long ****)param_5,param_6,param_7,param_8);
      FUN_710392eb40((ulong)puVar10);
    }
    local_1a0 = (long ********)0x0;
    FUN_7103540b10(DAT_7105332f20,uVar8,(long *********)pcVar20,(byte ****)pcVar21,
                   (long ****)param_5,param_6,param_7,param_8);
    local_1c0 = (long ********)CONCAT44(local_1c0._4_4_,0xffffff);
  }
  lVar32 = DAT_7105332f20;
  puVar15 = *(uint **)(lVar25 + 0x408);
  if (puVar15 != *(uint **)(lVar25 + 0x410)) {
    do {
      uVar8 = *puVar15;
      uVar46 = (ulong)uVar8;
      if ((*(ulong *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x78) + uVar46 * 0x34 + 8) &
          0xffffffffff) == 0xb172b4e8a) {
        uVar41 = 0xffffff;
        if ((uVar8 != 0xffffff) && (uVar41 = uVar8, uVar8 < *(uint *)(DAT_7105332f20 + 0x48))) {
          std::recursive_mutex::lock();
          lVar31 = *(long *)(lVar32 + 0x40);
          if ((*(byte *)(lVar31 + uVar46 * 0x48 + 8) & 1) == 0) {
            std::recursive_mutex::unlock();
            FUN_7103540d50(lVar32,uVar8,(long *********)pcVar20,(byte ****)pcVar21,
                           (long ****)param_5,param_6,param_7,param_8);
          }
          else {
            FUN_71035432d0((int *)(lVar31 + uVar46 * 0x48));
            std::recursive_mutex::unlock();
          }
        }
        goto LAB_71025dc3a0;
      }
      puVar15 = puVar15 + 1;
    } while (*(uint **)(lVar25 + 0x410) != puVar15);
  }
  uVar41 = 0xffffff;
LAB_71025dc3a0:
  lVar32 = DAT_7105332f20;
  ppppppppplVar43 = (long *********)(lVar29 + 0x28);
  uVar8 = *(uint *)ppppppppplVar43;
  if ((uVar8 != 0xffffff) && (uVar8 < *(uint *)(DAT_7105332f20 + 0x48))) {
    std::recursive_mutex::lock();
    lVar31 = *(long *)(lVar32 + 0x40);
    if ((*(byte *)(lVar31 + (ulong)uVar8 * 0x48 + 8) & 1) != 0) {
      FUN_710353f5a0(lVar32,(int *)(lVar31 + (ulong)uVar8 * 0x48),(long ****)pcVar20,
                     (byte ****)pcVar21,(long ****)param_5,param_6,param_7,param_8);
    }
    std::recursive_mutex::unlock();
  }
  *(uint *)ppppppppplVar43 = uVar41;
  if (uVar41 != 0xffffff) {
    FUN_7103177110(lVar30,*puVar53,ppppppppplVar43,(byte ****)pcVar21,(long ****)param_5,param_6,
                   param_7,param_8);
  }
  ppppppppplVar54 = *(long **********)(lVar25 + 0x428);
  for (ppppppppplVar43 = *(long **********)(lVar25 + 0x420); ppppppppplVar43 != ppppppppplVar54;
      ppppppppplVar43 = (long *********)((long)ppppppppplVar43 + 4)) {
    ppppppppplVar57 = ppppppppplVar43;
    FUN_7102653aa0(&local_1a0,(long *)(lVar29 + 0x68),ppppppppplVar43,(byte ****)pcVar21,
                   (long ****)param_5,(ulong)param_6,(ulong)param_7,(ulong)param_8);
    if (local_1a0._4_4_ != 0xffffff) {
      FUN_7103540b10(DAT_7105332f20,local_1a0._4_4_,ppppppppplVar57,(byte ****)pcVar21,
                     (long ****)param_5,param_6,param_7,param_8);
      local_1a0 = (long ********)CONCAT44(0xffffff,(uint)local_1a0);
    }
  }
  pcVar20 = "color_grading_lut";
  FUN_7102653da0(&local_1a0,lVar29 + 0x68,(byte *)"color_grading_lut");
  uVar8 = (uint)local_1a0;
  uVar41 = local_1a0._4_4_;
  if ((uint)local_1a0 != 0xffffffff) {
    uVar9 = *(uint *)(lVar29 + 0x2c);
    *(uint *)(lVar29 + 0x2c) = local_1a0._4_4_;
    if (local_1a0._4_4_ != 0xffffff) {
      FUN_7103540a00(DAT_7105332f20,local_1a0._4_4_);
    }
    if (uVar9 != 0xffffff) {
      FUN_7103540b10(DAT_7105332f20,uVar9,(long *********)pcVar20,(byte ****)pcVar21,
                     (long ****)param_5,param_6,param_7,param_8);
    }
    uVar46 = *puVar53;
    plVar48 = (long *)(lVar30 + 0x58);
    plVar16 = plVar48;
    if ((long *)*plVar48 != (long *)0x0) {
      plVar35 = (long *)*plVar48;
      plVar16 = (long *)(lVar30 + 0x58);
      do {
        while (plVar38 = plVar35, (ulong)plVar38[4] <= uVar46) {
          if (uVar46 <= (ulong)plVar38[4]) goto LAB_71025dc58c;
          plVar16 = plVar38 + 1;
          plVar35 = (long *)*plVar16;
          if ((long *)*plVar16 == (long *)0x0) goto LAB_71025dc58c;
        }
        plVar35 = (long *)*plVar38;
        plVar16 = plVar38;
      } while ((long *)*plVar38 != (long *)0x0);
    }
LAB_71025dc58c:
    *(uint *)(*(long *)(*plVar16 + 0x28) + 0x210) = uVar8;
    if ((*(ulong *)(lVar30 + 0x20) == uVar46) && (*(int *)(lVar30 + 0x38) < 3)) {
      if ((long *)*plVar48 != (long *)0x0) {
        plVar16 = (long *)(lVar30 + 0x58);
        plVar35 = (long *)*plVar48;
        do {
          while ((ulong)plVar35[4] <= uVar46) {
            plVar48 = plVar16;
            if (uVar46 <= (ulong)plVar35[4]) goto LAB_71025dc5f4;
            plVar16 = plVar35 + 1;
            plVar35 = (long *)*plVar16;
            plVar48 = plVar16;
            if (plVar35 == (long *)0x0) goto LAB_71025dc5f4;
          }
          plVar38 = (long *)*plVar35;
          plVar48 = plVar35;
          plVar16 = plVar35;
          plVar35 = plVar38;
        } while (plVar38 != (long *)0x0);
      }
LAB_71025dc5f4:
      plVar16 = *(long **)(*(long *)(*plVar48 + 0x28) + 0x240);
      if (plVar16 == (long *)0x0) goto LAB_71025dd4f8;
      (**(code **)(*plVar16 + 0x30))(plVar16,*(long *)(*plVar48 + 0x28) + 0x210);
    }
  }
  if (uVar41 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,uVar41,(long *********)pcVar20,(byte ****)pcVar21,
                   (long ****)param_5,param_6,param_7,param_8);
    local_1a0 = (long ********)CONCAT44(0xffffff,(uint)local_1a0);
  }
  ppppppppplVar43 = *(long **********)(lVar25 + 0x438);
  ppppppppplVar54 = *(long **********)(lVar25 + 0x440);
  if (ppppppppplVar43 != ppppppppplVar54) {
    do {
      ppppppppplVar57 = ppppppppplVar43;
      FUN_7102653aa0(&local_1a0,(long *)(lVar29 + 0x98),ppppppppplVar43,(byte ****)pcVar21,
                     (long ****)param_5,(ulong)param_6,(ulong)param_7,(ulong)param_8);
      if (local_1a0._4_4_ != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,local_1a0._4_4_,ppppppppplVar57,(byte ****)pcVar21,
                       (long ****)param_5,param_6,param_7,param_8);
        local_1a0 = (long ********)CONCAT44(0xffffff,(uint)local_1a0);
      }
      ppppppppplVar43 = (long *********)((long)ppppppppplVar43 + 4);
    } while (ppppppppplVar54 != ppppppppplVar43);
  }
  if (*(char *)(lVar29 + 0xb8) != '\0') {
    pcVar20 = "cellophane";
    FUN_7102653da0(&local_1a0,lVar29 + 0x98,(byte *)"cellophane");
    uVar8 = (uint)local_1a0;
    uVar41 = local_1a0._4_4_;
    if ((uint)local_1a0 != 0xffffffff) {
      uVar9 = *(uint *)(lVar29 + 0x30);
      *(uint *)(lVar29 + 0x30) = local_1a0._4_4_;
      if (local_1a0._4_4_ != 0xffffff) {
        FUN_7103540a00(DAT_7105332f20,local_1a0._4_4_);
      }
      if (uVar9 != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,uVar9,(long *********)pcVar20,(byte ****)pcVar21,
                       (long ****)param_5,param_6,param_7,param_8);
      }
      *(uint *)(lVar29 + 0x34) = uVar8;
      uVar46 = *(ulong *)(lVar29 + 8);
      plVar48 = (long *)(lVar30 + 0x58);
      plVar16 = plVar48;
      if ((long *)*plVar48 != (long *)0x0) {
        plVar35 = (long *)*plVar48;
        plVar16 = (long *)(lVar30 + 0x58);
        do {
          while (plVar38 = plVar35, (ulong)plVar38[4] <= uVar46) {
            if (uVar46 <= (ulong)plVar38[4]) goto LAB_71025dc754;
            plVar16 = plVar38 + 1;
            plVar35 = (long *)*plVar16;
            if ((long *)*plVar16 == (long *)0x0) goto LAB_71025dc754;
          }
          plVar35 = (long *)*plVar38;
          plVar16 = plVar38;
        } while ((long *)*plVar38 != (long *)0x0);
      }
LAB_71025dc754:
      *(uint *)(*(long *)(*plVar16 + 0x28) + 0x290) = uVar8;
      if ((*(ulong *)(lVar30 + 0x20) == uVar46) && (*(int *)(lVar30 + 0x38) < 3)) {
        if ((long *)*plVar48 != (long *)0x0) {
          plVar16 = (long *)(lVar30 + 0x58);
          plVar35 = (long *)*plVar48;
          do {
            while ((ulong)plVar35[4] <= uVar46) {
              plVar48 = plVar16;
              if (uVar46 <= (ulong)plVar35[4]) goto LAB_71025dc7bc;
              plVar16 = plVar35 + 1;
              plVar35 = (long *)*plVar16;
              plVar48 = plVar16;
              if (plVar35 == (long *)0x0) goto LAB_71025dc7bc;
            }
            plVar38 = (long *)*plVar35;
            plVar48 = plVar35;
            plVar16 = plVar35;
            plVar35 = plVar38;
          } while (plVar38 != (long *)0x0);
        }
LAB_71025dc7bc:
        plVar16 = *(long **)(*(long *)(*plVar48 + 0x28) + 0x2c0);
        if (plVar16 == (long *)0x0) goto LAB_71025dd4f8;
        (**(code **)(*plVar16 + 0x30))(plVar16,*(long *)(*plVar48 + 0x28) + 0x290);
      }
    }
    if (uVar41 != 0xffffff) {
      FUN_7103540b10(DAT_7105332f20,uVar41,(long *********)pcVar20,(byte ****)pcVar21,
                     (long ****)param_5,param_6,param_7,param_8);
      local_1a0 = (long ********)CONCAT44(0xffffff,(uint)local_1a0);
    }
  }
  ppppppppplVar54 = *(long **********)(lVar25 + 0x458);
  for (ppppppppplVar43 = *(long **********)(lVar25 + 0x450); ppppppppplVar43 != ppppppppplVar54;
      ppppppppplVar43 = (long *********)((long)ppppppppplVar43 + 4)) {
    ppppppppplVar57 = ppppppppplVar43;
    FUN_7102653aa0(&local_1a0,(long *)(lVar29 + 0x80),ppppppppplVar43,(byte ****)pcVar21,
                   (long ****)param_5,(ulong)param_6,(ulong)param_7,(ulong)param_8);
    if (local_1a0._4_4_ != 0xffffff) {
      FUN_7103540b10(DAT_7105332f20,local_1a0._4_4_,ppppppppplVar57,(byte ****)pcVar21,
                     (long ****)param_5,param_6,param_7,param_8);
      local_1a0 = (long ********)CONCAT44(0xffffff,(uint)local_1a0);
    }
  }
  pcVar20 = "loupe";
  FUN_7102653da0(&local_1a0,lVar29 + 0x80,(byte *)"loupe");
  uVar8 = (uint)local_1a0;
  uVar41 = local_1a0._4_4_;
  uVar19 = extraout_x1_15;
  if ((uint)local_1a0 != 0xffffffff) {
    uVar9 = *(uint *)(lVar29 + 0x38);
    *(uint *)(lVar29 + 0x38) = local_1a0._4_4_;
    if (local_1a0._4_4_ != 0xffffff) {
      FUN_7103540a00(DAT_7105332f20,local_1a0._4_4_);
      uVar19 = extraout_x1_16;
    }
    if (uVar9 != 0xffffff) {
      FUN_7103540b10(DAT_7105332f20,uVar9,(long *********)pcVar20,(byte ****)pcVar21,
                     (long ****)param_5,param_6,param_7,param_8);
      uVar19 = extraout_x1_17;
    }
    uVar46 = *puVar53;
    plVar48 = (long *)(lVar30 + 0x58);
    plVar16 = plVar48;
    if ((long *)*plVar48 != (long *)0x0) {
      plVar35 = (long *)*plVar48;
      plVar16 = (long *)(lVar30 + 0x58);
      do {
        while (plVar38 = plVar35, (ulong)plVar38[4] <= uVar46) {
          if (uVar46 <= (ulong)plVar38[4]) goto LAB_71025dc914;
          plVar16 = plVar38 + 1;
          plVar35 = (long *)*plVar16;
          if ((long *)*plVar16 == (long *)0x0) goto LAB_71025dc914;
        }
        plVar35 = (long *)*plVar38;
        plVar16 = plVar38;
      } while ((long *)*plVar38 != (long *)0x0);
    }
LAB_71025dc914:
    *(uint *)(*(long *)(*plVar16 + 0x28) + 0x2d0) = uVar8;
    if ((*(ulong *)(lVar30 + 0x20) == uVar46) && (*(int *)(lVar30 + 0x38) < 3)) {
      if ((long *)*plVar48 != (long *)0x0) {
        plVar16 = (long *)(lVar30 + 0x58);
        plVar35 = (long *)*plVar48;
        do {
          while ((ulong)plVar35[4] <= uVar46) {
            plVar48 = plVar16;
            if (uVar46 <= (ulong)plVar35[4]) goto LAB_71025dc97c;
            plVar16 = plVar35 + 1;
            plVar35 = (long *)*plVar16;
            plVar48 = plVar16;
            if (plVar35 == (long *)0x0) goto LAB_71025dc97c;
          }
          plVar38 = (long *)*plVar35;
          plVar48 = plVar35;
          plVar16 = plVar35;
          plVar35 = plVar38;
        } while (plVar38 != (long *)0x0);
      }
LAB_71025dc97c:
      plVar16 = *(long **)(*(long *)(*plVar48 + 0x28) + 0x300);
      if (plVar16 == (long *)0x0) goto LAB_71025dd4f8;
      (**(code **)(*plVar16 + 0x30))(plVar16,*(long *)(*plVar48 + 0x28) + 0x2d0);
      uVar19 = extraout_x1_18;
    }
  }
  if (uVar41 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,uVar41,(long *********)pcVar20,(byte ****)pcVar21,
                   (long ****)param_5,param_6,param_7,param_8);
    local_1a0 = (long ********)CONCAT44(0xffffff,(uint)local_1a0);
    uVar19 = extraout_x1_19;
  }
  pcVar21 = "%s.nutexb";
  pcVar20 = "projection";
  FUN_7101ea04d0((undefined1 *)&local_1a0,uVar19,"%s.nutexb","projection",param_5,param_6,param_7,
                 param_8);
  puVar15 = *(uint **)(lVar25 + 0x3f0);
  if (puVar15 != *(uint **)(lVar25 + 0x3f8)) {
    uVar46 = (ulong)local_a0;
    if (uVar46 == 0) {
      uVar50 = 0;
    }
    else {
      uVar8 = 0xffffffff;
      pbVar11 = (byte *)&local_1a0;
      do {
        pbVar40 = pbVar11 + 1;
        bVar36 = *pbVar11;
        uVar41 = bVar36 + 0x20;
        if (0x19 < bVar36 - 0x41) {
          uVar41 = (uint)bVar36;
        }
        uVar8 = (&DAT_7104754084)[(uVar41 ^ uVar8) & 0xff] ^ uVar8 >> 8;
        pbVar11 = pbVar40;
      } while (pbVar40 < (byte *)((long)&local_1a0 + uVar46));
      uVar50 = (ulong)~uVar8;
    }
    uVar50 = uVar50 | (uVar46 & 0xff) << 0x20;
    do {
      uVar8 = *puVar15;
      if ((uVar8 == 0xffffff) ||
         (*(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 4) <= uVar8)) {
        if (uVar50 == 0) goto LAB_71025dcb94;
      }
      else if (*(ulong *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x60) + (ulong)uVar8 * 0x20
                         + 0x18) == uVar50) {
LAB_71025dcb94:
        uVar41 = 0xffffff;
        if (uVar8 != 0xffffff) {
          FUN_7103540a00(DAT_7105332f20,uVar8);
          uVar41 = uVar8;
        }
        goto LAB_71025dcaac;
      }
      puVar15 = puVar15 + 1;
    } while (*(uint **)(lVar25 + 0x3f8) != puVar15);
  }
  uVar41 = 0xffffff;
LAB_71025dcaac:
  ppppppppplVar43 = (long *********)(lVar29 + 0x3c);
  if (*(uint *)ppppppppplVar43 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,*(uint *)ppppppppplVar43,(long *********)pcVar21,
                   (byte ****)pcVar20,(long ****)param_5,param_6,param_7,param_8);
  }
  *(uint *)ppppppppplVar43 = uVar41;
  if (uVar41 != 0xffffff) {
    FUN_7103176a40(lVar30,*puVar53,ppppppppplVar43,(byte ****)pcVar20,(long ****)param_5,param_6,
                   param_7,param_8);
    pcVar21 = (char *)ppppppppplVar43;
  }
  FUN_710353da30((uint *)&local_1a0,0x3fa7b91367);
  uVar8 = (uint)local_1a0;
  if (*(uint *)(lVar29 + 0xbc) != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,*(uint *)(lVar29 + 0xbc),(long *********)pcVar21,
                   (byte ****)pcVar20,(long ****)param_5,param_6,param_7,param_8);
  }
  *(uint *)(lVar29 + 0xbc) = uVar8;
  FUN_710353da30((uint *)&local_1c0,0x345abf365f);
  uVar8 = (uint)local_1c0;
  if ((uint)local_1c0 != 0xffffff) {
    pcVar21 = *(char **)(lVar29 + 8);
    pcVar20 = (char *)&local_1c0;
    param_6 = (undefined1 (*) [16])0x1;
    param_5 = (undefined1 (*) [16])0x0;
    FUN_7103176db0(&local_1a0,lVar30,(long ****)pcVar21,(byte ****)pcVar20,(long ****)0x0,1,param_7,
                   param_8);
    pppppppplVar51 = local_1a0;
    local_1a0 = (long ********)0x0;
    puVar10 = *(undefined8 **)(lVar29 + 0xc0);
    *(long *********)(lVar29 + 0xc0) = pppppppplVar51;
    plVar48 = plStack_188;
    plVar16 = local_180;
    uVar46 = uStack_178;
    uVar19 = local_170;
    uVar50 = uStack_168;
    if (puVar10 != (undefined8 *)0x0) {
      FUN_7102619a80(puVar10,extraout_x1_20,(long *********)pcVar21,(byte ****)pcVar20,
                     (long ****)param_5,param_6,param_7,param_8);
      FUN_710392eb40((ulong)puVar10);
      pppppppplVar51 = *(long *********)(lVar29 + 0xc0);
      plVar48 = plStack_188;
      plVar16 = local_180;
      uVar46 = uStack_178;
      uVar19 = local_170;
      uVar50 = uStack_168;
    }
    if (pppppppplVar51 != (long ********)0x0) {
      *(byte *)(pppppppplVar51 + 3) = 0;
      if ((pppppppplVar51[2] != (long *******)0x0) &&
         (pppppplVar27 = *pppppppplVar51[2], *(char *)pppppplVar27 != '\0')) {
        *(char *)pppppplVar27 = '\0';
      }
    }
    local_1a0 = (long ********)0x0;
    plStack_188 = plVar48;
    local_180 = plVar16;
    uStack_178 = uVar46;
    local_170 = uVar19;
    uStack_168 = uVar50;
    FUN_7103540b10(DAT_7105332f20,uVar8,(long *********)pcVar21,(byte ****)pcVar20,
                   (long ****)param_5,param_6,param_7,param_8);
    local_1c0 = (long ********)CONCAT44(local_1c0._4_4_,0xffffff);
  }
  FUN_710353da30((uint *)&local_1a0,0x3fc5dedb62);
  uVar8 = (uint)local_1a0;
  if (*(uint *)(lVar29 + 200) != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,*(uint *)(lVar29 + 200),(long *********)pcVar21,(byte ****)pcVar20
                   ,(long ****)param_5,param_6,param_7,param_8);
  }
  *(uint *)(lVar29 + 200) = uVar8;
  FUN_7102633260(lVar29,plVar42);
  if ((char)((ulong *)param_1[0x65])[1] != '\0') {
    FUN_7103169c70(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1f0),
                   *(ulong *)param_1[0x65]);
  }
  plStack_188 = (long *)0x0;
  local_180 = (long *)0x0;
  local_1a0 = (long ********)0x0;
  pppppppplStack_198 = (long ********)0x0;
  local_190 = (long ********)0x0;
  lVar29 = param_1[0x35];
  lVar32 = param_1[0x36];
  pppppppplVar51 = (long ********)(lVar32 - lVar29);
  if (pppppppplVar51 != (long ********)0x0) {
    if ((ulong)((long)pppppppplVar51 >> 3) >> 0x3d != 0) goto LAB_71025dd4f8;
    pppppppplVar17 =
         (long ********)
         FUN_710392e290(0x10,pppppppplVar51,(long ****)pcVar21,(byte ****)pcVar20,(long ****)param_5
                        ,param_6,param_7,param_8);
    if (pppppppplVar17 == (long ********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1d0 = (long ********)((ulong)local_1d0 & 0xffffffff00000000);
        pcVar21 = (char *)&local_1c0;
        local_1c0 = pppppppplVar51;
        uVar46 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d0);
        if (((uVar46 & 1) != 0) &&
           (pppppppplVar17 =
                 (long ********)
                 FUN_710392e290(0x10,pppppppplVar51,(long ****)pcVar21,(byte ****)pcVar20,
                                (long ****)param_5,param_6,param_7,param_8),
           pppppppplVar17 != (long ********)0x0)) goto LAB_71025dccc4;
      }
      pppppppplVar17 = (long ********)0x0;
    }
LAB_71025dccc4:
    local_190 = pppppppplVar17 + ((long)pppppppplVar51 >> 3);
    local_1a0 = pppppppplVar17;
  }
  pppppppplStack_198 = local_1a0;
  if (lVar32 != lVar29) {
    uVar46 = 0;
    do {
      pppppppplVar51 = local_1a0;
      ppppppplVar55 = *(long ********)(lVar29 + uVar46 * 8);
      if (pppppppplStack_198 < local_190) {
        *pppppppplStack_198 = ppppppplVar55;
        pppppppplStack_198 = pppppppplStack_198 + 1;
      }
      else {
        ppppppppplVar43 = (long *********)((long)pppppppplStack_198 - (long)local_1a0);
        uVar50 = ((long)ppppppppplVar43 >> 3) + 1;
        if (uVar50 >> 0x3d != 0) {
LAB_71025dd4f0:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        if ((ulong)((long)local_190 - (long)local_1a0 >> 3) < 0xfffffffffffffff) {
          uVar28 = (long)local_190 - (long)local_1a0 >> 2;
          if (uVar50 <= uVar28) {
            uVar50 = uVar28;
          }
          if (uVar50 != 0) {
            if (uVar50 >> 0x3d == 0) goto LAB_71025dcd68;
            goto LAB_71025dd4f8;
          }
LAB_71025dcdc4:
          pppppppplVar18 = (long ********)0x0;
        }
        else {
          uVar50 = 0x1fffffffffffffff;
LAB_71025dcd68:
          pppppppplVar17 = (long ********)(uVar50 * 8);
          if (pppppppplVar17 == (long ********)0x0) {
            pppppppplVar17 = (long ********)0x1;
          }
          pppppppplVar18 =
               (long ********)
               FUN_710392e290(0x10,pppppppplVar17,(long ****)pcVar21,(byte ****)pcVar20,
                              (long ****)param_5,param_6,param_7,param_8);
          if (pppppppplVar18 == (long ********)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_1d0 = (long ********)((ulong)local_1d0 & 0xffffffff00000000);
              pcVar21 = (char *)&local_1c0;
              local_1c0 = pppppppplVar17;
              uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1d0);
              if (((uVar28 & 1) != 0) &&
                 (pppppppplVar18 =
                       (long ********)
                       FUN_710392e290(0x10,pppppppplVar17,(long ****)pcVar21,(byte ****)pcVar20,
                                      (long ****)param_5,param_6,param_7,param_8),
                 pppppppplVar18 != (long ********)0x0)) goto LAB_71025dcdc8;
            }
            goto LAB_71025dcdc4;
          }
        }
LAB_71025dcdc8:
        pppppppplVar17 = pppppppplVar18 + ((long)ppppppppplVar43 >> 3);
        *pppppppplVar17 = ppppppplVar55;
        if (0 < (long)ppppppppplVar43) {
          memcpy(pppppppplVar18,pppppppplVar51,(size_t)ppppppppplVar43);
          pcVar21 = (char *)ppppppppplVar43;
        }
        local_1a0 = pppppppplVar18;
        pppppppplStack_198 = pppppppplVar17 + 1;
        local_190 = pppppppplVar18 + uVar50;
        if (pppppppplVar51 != (long ********)0x0) {
          FUN_710392eb40((ulong)pppppppplVar51);
        }
      }
      lVar29 = param_1[0x35];
      uVar46 = uVar46 + 1;
    } while (uVar46 < (ulong)(param_1[0x36] - lVar29 >> 3));
  }
  plStack_188 = (long *)param_1[0x60];
  local_180 = (long *)param_1[0x62];
  FUN_71026313b0(*(ulong **)param_1[0x66],&local_1a0,(undefined **)pcVar21,(byte ****)pcVar20,
                 (long ****)param_5,(undefined1 (*) [12])param_6,(long ***)param_7,param_8);
  if (local_1a0 != (long ********)0x0) {
    pppppppplStack_198 = local_1a0;
    FUN_710392eb40((ulong)local_1a0);
  }
  lVar29 = *(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1b8);
  FUN_7102615650((undefined4 *)&local_1c0,*(long **)*plVar42);
  plVar42 = *(long **)*plVar42;
  uVar59 = 0;
  if (plVar42 != (long *)0x0) {
    pcVar20 = (char *)plVar42[1];
    if ((*pcVar20 == '\f') && (iVar23 = *(int *)(pcVar20 + 1) + -1, 0 < *(int *)(pcVar20 + 1))) {
      iVar39 = 0;
      pcVar21 = "";
      do {
        iVar1 = iVar23 + iVar39;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar15 = (uint *)(*(long *)(*plVar42 + 0x28) + (long)*(int *)(pcVar20 + 5) +
                          (long)iVar1 * 8);
        uVar46 = *(ulong *)(*(long *)(*plVar42 + 0x20) + (ulong)*puVar15 * 8);
        if (uVar46 == 0x1cf223be16) {
          uVar8 = puVar15[1];
          if ((int)uVar8 < 0) goto LAB_71025dcf18;
          pcVar21 = pcVar20 + (int)uVar8;
          break;
        }
        iVar6 = iVar1 + -1;
        if (uVar46 < 0x1cf223be17) {
          iVar39 = iVar1 + 1;
          iVar6 = iVar23;
        }
        iVar23 = iVar6;
      } while (iVar39 <= iVar23);
    }
    else {
LAB_71025dcf18:
      pcVar21 = "";
    }
    if (*pcVar21 == '\b') {
      uVar59 = *(undefined4 *)(pcVar21 + 1);
    }
  }
  pppppppplStack_198 = local_1b8;
  local_1a0 = local_1c0;
  plVar42 = (long *)(lVar29 + 0x50);
  plVar48 = plVar42;
  if ((long *)*plVar42 != (long *)0x0) {
    plVar16 = (long *)*plVar42;
    plVar48 = (long *)(lVar29 + 0x50);
    do {
      while (plVar35 = plVar16, (long *)plVar35[4] <= param_1) {
        if (param_1 <= (long *)plVar35[4]) goto LAB_71025dcf90;
        plVar48 = plVar35 + 1;
        plVar16 = (long *)*plVar48;
        if ((long *)*plVar48 == (long *)0x0) goto LAB_71025dcf90;
      }
      plVar16 = (long *)*plVar35;
      plVar48 = plVar35;
    } while ((long *)*plVar35 != (long *)0x0);
  }
LAB_71025dcf90:
  lVar32 = *(long *)(*plVar48 + 0x28);
  *(long *********)(lVar32 + 0x48) = local_1b8;
  *(long *********)(lVar32 + 0x40) = local_1c0;
  *(undefined4 *)(lVar32 + 0x50) = uVar59;
  if (*(long **)(lVar29 + 0x20) == param_1) {
    if ((long *)*plVar42 != (long *)0x0) {
      plVar48 = (long *)(lVar29 + 0x50);
      plVar16 = (long *)*plVar42;
      do {
        while ((long *)plVar16[4] <= param_1) {
          plVar42 = plVar48;
          if (param_1 <= (long *)plVar16[4]) goto LAB_71025dcffc;
          plVar48 = plVar16 + 1;
          plVar16 = (long *)*plVar48;
          plVar42 = plVar48;
          if (plVar16 == (long *)0x0) goto LAB_71025dcffc;
        }
        plVar35 = (long *)*plVar16;
        plVar42 = plVar16;
        plVar48 = plVar16;
        plVar16 = plVar35;
      } while (plVar35 != (long *)0x0);
    }
LAB_71025dcffc:
    plVar48 = *(long **)(*(long *)(*plVar42 + 0x28) + 0x80);
    if (plVar48 == (long *)0x0) {
LAB_71025dd4f8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    (**(code **)(*plVar48 + 0x30))(plVar48,*(long *)(*plVar42 + 0x28) + 0x40);
  }
  switch((int)param_1[1]) {
  case 0x116:
  case 0x11f:
  case 0x120:
    lVar29 = param_1[0x61];
    uVar59 = 0xc37a0000;
    uVar60 = 0xc3480000;
    uVar61 = 0x437a0000;
    uVar62 = 0x43480000;
    break;
  case 0x117:
    lVar29 = param_1[0x61];
    uVar59 = 0xc3c80000;
    uVar60 = 0xc3480000;
    uVar61 = 0x43c80000;
    uVar62 = 0x43480000;
    break;
  default:
    goto switchD_71025dd03c_caseD_118;
  case 0x119:
  case 0x11a:
    lVar29 = param_1[0x61];
    uVar59 = 0xc359199a;
    uVar60 = 0xc2f10000;
    uVar61 = 0x4359199a;
    uVar62 = 0x43376666;
  }
  *(undefined8 *)(lVar29 + 0x418) = 0xc61c4000;
  *(ulong *)(lVar29 + 0x410) = CONCAT44(uVar60,uVar59);
  *(undefined8 *)(lVar29 + 0x428) = 0x436b0000;
  *(ulong *)(lVar29 + 0x420) = CONCAT44(uVar62,uVar61);
  if (*(char *)(lVar29 + 0x400) == '\0') {
    *(undefined1 *)(lVar29 + 0x400) = 1;
  }
  auVar63._4_4_ = uVar60;
  auVar63._0_4_ = uVar59;
  auVar63._8_4_ = 0xc61c4000;
  auVar63._12_4_ = 0;
  auVar4._4_4_ = uVar62;
  auVar4._0_4_ = uVar61;
  auVar4._8_4_ = 0x436b0000;
  auVar4._12_4_ = 0;
  FUN_7103159b70(auVar63,auVar4,*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c0),
                 *(ulong *)(lVar29 + 8));
switchD_71025dd03c_caseD_118:
  return;
LAB_71025da748:
  plVar16 = plVar16 + 2;
  if (plVar35 == plVar16) goto LAB_71025da754;
  goto LAB_71025da72c;
code_r0x0071025da918:
  uVar46 = (ulong)(iVar23 + 1);
  uVar50 = uVar28;
  if ((ulong)(lVar29 >> 5) <= uVar28) goto LAB_71025db49c;
  goto LAB_71025da904;
  while( true ) {
    uVar59 = *(undefined4 *)(&UNK_7104549184 + lVar29);
    *(undefined4 *)(puVar10 + 2) = uVar59;
    *(undefined4 *)(puVar10 + 10) = uVar59;
    *(undefined4 *)(puVar10 + 0x12) = uVar59;
    *(undefined4 *)(puVar10 + 0x1a) = uVar59;
    *(undefined4 *)(puVar10 + 0x22) = uVar59;
    *(undefined4 *)(puVar10 + 0x2a) = uVar59;
    if (uVar9 == 0) {
      puVar24 = puVar10 + 0x60;
      uVar59 = *(undefined4 *)(&UNK_7104549188 + lVar29);
      puVar10[0x31] = 0x41200000;
      puVar10[0x30] = local_1a0;
      *(undefined4 *)(puVar10 + 0x32) = uVar59;
      *(undefined4 *)(puVar10 + 0x42) = uVar59;
      *(undefined4 *)(puVar10 + 0x3a) = uVar59;
      *(undefined4 *)(puVar10 + 0x4a) = uVar59;
      puVar10[0x41] = 0xc1200000;
      puVar10[0x40] = local_1a0;
      puVar10[0x49] = 0xc1200000;
      puVar10[0x48] = local_1a0;
      puVar10[0x39] = 0x41200000;
      puVar10[0x38] = local_180;
      puVar10[0x51] = 0x41200000;
      puVar10[0x50] = local_180;
      *(undefined4 *)(puVar10 + 0x52) = uVar59;
      *(undefined4 *)(puVar10 + 0x5a) = uVar59;
      puVar10[0x59] = 0xc1200000;
      puVar10[0x58] = local_180;
    }
    else {
      puVar24 = puVar10 + 0x30;
    }
    if (uVar47 - 1 == uVar28) {
      puVar24[1] = 0xc1200000;
      *puVar24 = local_190;
      puVar24[9] = 0xc1200000;
      puVar24[8] = local_170;
      puVar24[0x21] = 0xc1200000;
      puVar24[0x20] = local_170;
      uVar59 = *(undefined4 *)(&UNK_7104549188 + lVar29);
      *(undefined4 *)(puVar24 + 2) = uVar59;
      *(undefined4 *)(puVar24 + 10) = uVar59;
      puVar24[0x11] = 0x41200000;
      puVar24[0x10] = local_190;
      puVar24[0x19] = 0x41200000;
      puVar24[0x18] = local_190;
      puVar24[0x29] = 0x41200000;
      puVar24[0x28] = local_170;
      *(undefined4 *)(puVar24 + 0x12) = uVar59;
      *(undefined4 *)(puVar24 + 0x1a) = uVar59;
      *(undefined4 *)(puVar24 + 0x22) = uVar59;
      *(undefined4 *)(puVar24 + 0x2a) = uVar59;
      puVar24 = puVar24 + 0x30;
    }
    puVar24[9] = 0x41200000;
    puVar24[8] = local_170;
    uVar59 = *(undefined4 *)(&UNK_7104549190 + lVar29);
    *(undefined4 *)(puVar24 + 2) = uVar59;
    *(undefined4 *)(puVar24 + 10) = uVar59;
    puVar24[0x21] = 0x41200000;
    puVar24[0x20] = local_170;
    *(undefined4 *)(puVar24 + 0x12) = uVar59;
    puVar24[0x11] = 0xc1200000;
    puVar24[0x10] = local_180;
    puVar24[0x19] = 0xc1200000;
    puVar24[0x18] = local_180;
    puVar24[0x29] = 0x41200000;
    puVar24[0x28] = local_180;
    *(undefined4 *)(puVar24 + 0x1a) = uVar59;
    puVar24[1] = 0xc1200000;
    *puVar24 = local_170;
    *(undefined4 *)(puVar24 + 0x22) = uVar59;
    *(undefined4 *)(puVar24 + 0x2a) = uVar59;
    FUN_710261ce40(6.0,-10.0,lVar32,uVar9,&local_1a0);
    puVar24[0x31] = uStack_168 & 0xffffffff;
    puVar24[0x30] = local_170;
    puVar24[0x39] = (ulong)plStack_188 & 0xffffffff;
    puVar24[0x38] = local_190;
    puVar24[0x41] = (ulong)pppppppplStack_198 & 0xffffffff;
    puVar24[0x40] = local_1a0;
    puVar24[0x49] = (ulong)pppppppplStack_198 & 0xffffffff;
    puVar24[0x48] = local_1a0;
    puVar24[0x59] = uStack_168 & 0xffffffff;
    puVar24[0x58] = local_170;
    puVar24[0x51] = uStack_178 & 0xffffffff;
    puVar24[0x50] = local_180;
    uVar59 = *(undefined4 *)(&UNK_7104549194 + lVar29);
    *(undefined4 *)(puVar24 + 0x32) = uVar59;
    *(undefined4 *)(puVar24 + 0x3a) = uVar59;
    *(undefined4 *)(puVar24 + 0x42) = uVar59;
    *(undefined4 *)(puVar24 + 0x4a) = uVar59;
    *(undefined4 *)(puVar24 + 0x52) = uVar59;
    *(undefined4 *)(puVar24 + 0x5a) = uVar59;
    FUN_710261ce40(3.0,9.0,lVar32,uVar9,&local_1a0);
    uVar28 = (ulong)(uVar9 + 1);
    puVar24[0x61] = uStack_168 & 0xffffffff;
    puVar24[0x60] = local_170;
    puVar24[0x69] = (ulong)plStack_188 & 0xffffffff;
    puVar24[0x68] = local_190;
    puVar24[0x71] = (ulong)pppppppplStack_198 & 0xffffffff;
    puVar24[0x70] = local_1a0;
    puVar24[0x79] = (ulong)pppppppplStack_198 & 0xffffffff;
    puVar24[0x78] = local_1a0;
    uVar59 = *(undefined4 *)(&UNK_710454918c + lVar29);
    puVar10 = puVar24 + 0x90;
    *(undefined4 *)(puVar24 + 0x62) = uVar59;
    *(undefined4 *)(puVar24 + 0x6a) = uVar59;
    *(undefined4 *)(puVar24 + 0x72) = uVar59;
    *(undefined4 *)(puVar24 + 0x7a) = uVar59;
    *(undefined4 *)(puVar24 + 0x82) = uVar59;
    *(undefined4 *)(puVar24 + 0x8a) = uVar59;
    puVar24[0x89] = uStack_168 & 0xffffffff;
    puVar24[0x88] = local_170;
    puVar24[0x81] = uStack_178 & 0xffffffff;
    puVar24[0x80] = local_180;
    if (uVar47 <= uVar28) break;
LAB_71025db1e8:
    local_170 = 0;
    uStack_168 = 0;
    local_180 = (long *)0x0;
    uStack_178 = 0;
    local_190 = (long ********)0x0;
    plStack_188 = (long *)0x0;
    local_1a0 = (long ********)0x0;
    pppppppplStack_198 = (long ********)0x0;
    uVar9 = (uint)uVar28;
    FUN_710261ce40(1.2,10.0,lVar32,uVar9,&local_1a0);
    puVar10[1] = uStack_168 & 0xffffffff;
    *puVar10 = local_170;
    puVar10[9] = (ulong)plStack_188 & 0xffffffff;
    puVar10[8] = local_190;
    puVar10[0x11] = (ulong)pppppppplStack_198 & 0xffffffff;
    puVar10[0x10] = local_1a0;
    puVar10[0x19] = (ulong)pppppppplStack_198 & 0xffffffff;
    puVar10[0x18] = local_1a0;
    puVar10[0x29] = uStack_168 & 0xffffffff;
    puVar10[0x28] = local_170;
    puVar10[0x21] = uStack_178 & 0xffffffff;
    puVar10[0x20] = local_180;
    if (5 < uVar41) goto LAB_71025dd4f8;
  }
LAB_71025db48c:
  uVar50 = (ulong)((int)uVar50 + 1);
  if ((ulong)((long)uVar46 >> 3) <= uVar50) goto LAB_71025db49c;
  goto LAB_71025db118;
}

