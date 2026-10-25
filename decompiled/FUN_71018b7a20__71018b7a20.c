// addr:      71018b7a20
// offset:    0x18b7a20
// name:      FUN_71018b7a20
// mangled:   
// signature: undefined __cdecl FUN_71018b7a20(undefined1[16] param_1, undefined8 param_2, float param_3, long param_4, long param_5)


/* WARNING: Type propagation algorithm not settling */

void FUN_71018b7a20(undefined1 param_1 [16],undefined8 param_2,float param_3,long param_4,
                   long param_5)

{
  undefined8 *puVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
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
  long *********ppppppppplVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  char *pcVar10;
  byte ****ppppbVar11;
  long ****pppplVar12;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 uVar13;
  undefined8 in_x7;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  code *pcVar18;
  undefined8 uVar19;
  long **pplVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  ushort *puVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  undefined8 *puVar28;
  long *plVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  long *plVar35;
  byte ****ppppbVar36;
  long ****pppplVar37;
  long *plVar38;
  long *plVar39;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 uVar40;
  undefined4 uVar41;
  undefined1 auVar42 [16];
  ulong local_218;
  ulong local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  ushort local_1f8 [7];
  undefined1 local_1ea;
  undefined1 *local_1e8;
  uint *local_1e0;
  long alStack_1d0 [4];
  long *local_1b0;
  long alStack_1a0 [4];
  long *local_180;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  undefined4 local_e0;
  undefined **local_d0;
  undefined8 *local_c8;
  undefined **local_c0;
  undefined8 *local_b8;
  long ***local_b0;
  code *local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  long ****local_90;
  
  lVar30 = *(long *)(param_4 + 0x58);
  puVar28 = *(undefined8 **)(param_5 + 0xa8);
  if (((DAT_7105324750 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(param_1._0_8_,&DAT_7105324750), iVar5 != 0)) {
    DAT_7105324758 = 0;
    __cxa_guard_release(&DAT_7105324750);
  }
  for (puVar6 = (undefined8 *)(**(code **)*puVar28)(puVar28); puVar6 != &DAT_7105324758;
      puVar6 = (undefined8 *)*puVar6) {
  }
  *(undefined1 *)(lVar30 + 0x5cd) = *(undefined1 *)(puVar28 + 1);
  lVar33 = *(long *)(DAT_7105329740 + 8);
  uVar15 = *(uint *)(lVar33 + 4);
  if (uVar15 != 0) {
    uVar31 = 0;
    do {
      lVar21 = lVar33 + uVar31 * 0x18;
      plVar35 = *(long **)(lVar21 + 8);
      plVar22 = *(long **)(lVar21 + 0x10);
      if (plVar35 != plVar22) {
        do {
          lVar21 = *plVar35;
          plVar27 = (long *)plVar35[1];
          if (plVar27 == (long *)0x0) {
            iVar5 = *(int *)(lVar21 + 0x50);
          }
          else {
            plVar38 = plVar27 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar38,0x10);
              if (bVar4) {
                *plVar38 = *plVar38 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            iVar5 = *(int *)(lVar21 + 0x50);
            do {
              lVar21 = *plVar38;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar38,0x10);
              if (bVar4) {
                *plVar38 = lVar21 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar21 == 0) {
              (**(code **)(*plVar27 + 0x10))(plVar27);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (iVar5 == -1) goto LAB_71018b7b44;
          plVar35 = plVar35 + 2;
        } while (plVar35 != plVar22);
        uVar15 = *(uint *)(lVar33 + 4);
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 < uVar15);
  }
  uVar31 = (ulong)(uVar15 - 1);
LAB_71018b7b44:
  lVar33 = *(long *)(lVar30 + 0x128);
  *(int *)(lVar30 + 0x5c8) = (int)uVar31;
  plVar35 = (long *)(lVar30 + 0x128);
  FUN_710323beb0(lVar33,(ulong *)&DAT_7104545408,(long)*(int *)(lVar33 + 0x70),
                 (ulong)*(uint *)(lVar33 + 0x68),(long ****)0x0,in_x5,in_x6,in_x7);
  lVar33 = *(long *)(lVar30 + 0x128);
  FUN_710323beb0(lVar33,(ulong *)&DAT_7104545410,(long)*(int *)(lVar33 + 0x70),
                 (ulong)*(uint *)(lVar33 + 0x68),(long ****)0x0,in_x5,in_x6,in_x7);
  lVar33 = *(long *)(lVar30 + 0x128);
  FUN_710323beb0(lVar33,(ulong *)&DAT_71045454d8,(long)*(int *)(lVar33 + 0x70),
                 (ulong)*(uint *)(lVar33 + 0x68),(long ****)0x0,in_x5,in_x6,in_x7);
  FUN_7101d09d10(plVar35);
  lVar33 = *(long *)(lVar30 + 0x128);
  FUN_710323beb0(lVar33,(ulong *)&DAT_7104545598,(long)*(int *)(lVar33 + 0x70),
                 (ulong)*(uint *)(lVar33 + 0x68),(long ****)0x0,in_x5,in_x6,in_x7);
  FUN_7101cf8a30(plVar35);
  lVar33 = *(long *)(lVar30 + 0x128);
  FUN_710323beb0(lVar33,(ulong *)&DAT_71045454e0,(long)*(int *)(lVar33 + 0x70),
                 (ulong)*(uint *)(lVar33 + 0x68),(long ****)0x0,in_x5,in_x6,in_x7);
  lVar33 = *(long *)(lVar30 + 0x128);
  ppppppppplVar7 = (long *********)(long)*(int *)(lVar33 + 0x70);
  ppppbVar11 = (byte ****)(ulong)*(uint *)(lVar33 + 0x68);
  pppplVar12 = (long ****)0x0;
  FUN_710323beb0(lVar33,(ulong *)&DAT_71045454e8,(long)ppppppppplVar7,(ulong)ppppbVar11,
                 (long ****)0x0,in_x5,in_x6,in_x7);
  plVar22 = (long *)(DAT_7105329740 + 8);
  lVar17 = *plVar22;
  lVar33 = *(long *)(lVar17 + 0x80);
  lVar21 = *(long *)(lVar17 + 0x88);
  uVar31 = (lVar21 - lVar33 >> 5) * 0xfc0fc0fc0fc0fc1;
  uVar19 = extraout_x1;
  if (0 < (int)uVar31) {
    lVar32 = 0;
    uVar34 = 0;
    while( true ) {
      uVar23 = (lVar21 - lVar33 >> 5) * 0xfc0fc0fc0fc0fc1;
      if (uVar23 < uVar34 || uVar23 - uVar34 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      FUN_710239dd10(plVar35,lVar33 + lVar32,ppppppppplVar7,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7)
      ;
      plVar22 = (long *)(DAT_7105329740 + 8);
      lVar17 = *plVar22;
      uVar19 = extraout_x1_00;
      if ((uVar31 & 0xffffffff) - 1 == uVar34) break;
      lVar33 = *(long *)(lVar17 + 0x80);
      lVar21 = *(long *)(lVar17 + 0x88);
      uVar34 = uVar34 + 1;
      lVar32 = lVar32 + 0x820;
    }
  }
  lVar17 = lVar17 + (ulong)(*(int *)(lVar17 + 4) - 1) * 0x18;
  plVar27 = *(long **)(lVar17 + 8);
  if (*(long **)(lVar17 + 0x10) == plVar27) {
LAB_71018b9910:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar33 = *plVar27;
  plVar27 = (long *)plVar27[1];
  if (plVar27 != (long *)0x0) {
    plVar38 = plVar27 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar4) {
        *plVar38 = *plVar38 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar31 = (ulong)*(uint *)(lVar33 + 0x50);
  if (*(uint *)(lVar33 + 0x50) != 0xffffffff) {
    lVar33 = *(long *)(*plVar22 + 0x80);
    uVar34 = (*(long *)(*plVar22 + 0x88) - lVar33 >> 5) * 0xfc0fc0fc0fc0fc1;
    if (uVar34 < uVar31 || uVar34 - uVar31 == 0) goto LAB_71018b9910;
    lVar33 = lVar33 + uVar31 * 0x820;
    FUN_710239df10(plVar35,lVar33,ppppppppplVar7,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
    FUN_7101d0fc10(plVar35,lVar33,ppppppppplVar7,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
    FUN_7101cfe670((long *)(lVar30 + 0x2b0),lVar33,(long ****)ppppppppplVar7,ppppbVar11,pppplVar12,
                   in_x5,in_x6,in_x7);
    *(undefined1 *)(lVar30 + 0x5cc) = 1;
    uVar19 = extraout_x1_01;
  }
  lVar33 = *plVar35;
  uVar31 = FUN_710323cb80(lVar33,uVar19,ppppppppplVar7,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
  uVar41 = (undefined4)param_2;
  while ((uVar31 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar31 = FUN_710323cb80(lVar33,extraout_x1_02,ppppppppplVar7,ppppbVar11,pppplVar12,in_x5,in_x6,
                            in_x7);
    uVar41 = (undefined4)param_2;
  }
  puVar28 = (undefined8 *)
            FUN_710392e290(0x10,0xa0,(long ****)ppppppppplVar7,ppppbVar11,pppplVar12,in_x5,in_x6,
                           in_x7);
  if (puVar28 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
      local_200._0_4_ = 0xa0;
      local_200._4_4_ = 0;
      pppplVar8 = (long ****)&local_200;
      uVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar31 & 1) != 0) &&
         (puVar28 = (undefined8 *)
                    FUN_710392e290(0x10,0xa0,pppplVar8,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7),
         puVar28 != (undefined8 *)0x0)) goto LAB_71018b7db4;
    }
    puVar28 = (undefined8 *)0x0;
  }
LAB_71018b7db4:
  pppplVar8 = (long ****)0x0;
  FUN_7101cf7160(puVar28,plVar35,(long ****)0x0,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
  puVar28[2] = &DAT_7105333600;
  *(undefined4 *)(puVar28 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar28 + 0x6c) = DAT_7105333664;
  do {
    uVar15 = DAT_7105333650;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar4) {
      DAT_7105333650 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0' || (uVar15 & 1) != 0);
  puVar28[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar28;
  FUN_71032caea0((long)puVar28,extraout_x1_03,pppplVar8,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
  lVar33 = *(long *)(lVar30 + 0x138);
  *(undefined8 **)(lVar30 + 0x138) = puVar28;
  if (lVar33 != 0) {
    FUN_71032cad20(lVar33);
  }
  lVar33 = *(long *)(DAT_7105329740 + 8);
  local_200._0_4_ = 0;
  uVar31 = 0;
  do {
    puVar24 = (ushort *)(lVar33 + 0x4e4 + uVar31 * 2);
    uVar2 = *puVar24;
    uVar34 = uVar31;
    if (uVar2 == 0) break;
    local_1f8[uVar31] = uVar2;
    uVar2 = puVar24[1];
    if (uVar2 == 0) {
      uVar34 = uVar31 + 1;
      break;
    }
    uVar34 = uVar31 + 2;
    local_1f8[uVar31 + 1] = uVar2;
    uVar31 = uVar34;
  } while ((uint)uVar34 < 0x40);
  uVar15 = 0x811c9dc5;
  local_1f8[uVar34 & 0xffffffff] = 0;
  local_200._4_4_ = (int)uVar34;
  uVar16 = (uint)local_1f8[0];
  local_200._0_4_ = uVar15;
  if (local_1f8[0] != 0) {
    puVar24 = local_1f8;
    do {
      puVar24 = puVar24 + 1;
      local_200._0_4_ = (uint)local_200 * 0x89 ^ uVar16;
      uVar16 = (uint)*puVar24;
    } while (uVar16 != 0);
  }
  puVar28 = (undefined8 *)
            FUN_710392e290(0x10,0xd0,pppplVar8,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
  if (puVar28 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_218 = local_218 & 0xffffffff00000000;
      local_b0 = (long ***)&DAT_000000d0;
      pppplVar8 = &local_b0;
      uVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_218);
      if (((uVar31 & 1) != 0) &&
         (puVar28 = (undefined8 *)
                    FUN_710392e290(0x10,0xd0,pppplVar8,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7),
         puVar28 != (undefined8 *)0x0)) goto LAB_71018b7f28;
    }
    puVar28 = (undefined8 *)0x0;
  }
LAB_71018b7f28:
  pppplVar8 = (long ****)&local_200;
  ppppbVar11 = (byte ****)0x1;
  FUN_7101cfbe40(puVar28,plVar35,pppplVar8,(byte ****)0x1,pppplVar12,in_x5,in_x6,in_x7);
  puVar28[2] = &DAT_7105333600;
  *(undefined4 *)(puVar28 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar28 + 0x6c) = DAT_7105333664;
  do {
    uVar16 = DAT_7105333650;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar4) {
      DAT_7105333650 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0' || (uVar16 & 1) != 0);
  puVar28[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar28;
  FUN_71032caea0((long)puVar28,extraout_x1_04,pppplVar8,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
  lVar33 = *(long *)(lVar30 + 0x140);
  *(undefined8 **)(lVar30 + 0x140) = puVar28;
  if (lVar33 != 0) {
    FUN_71032cad20(lVar33);
  }
  uVar16 = **(uint **)(DAT_7105329740 + 8);
  puVar28 = (undefined8 *)
            FUN_710392e290(0x10,0x90,pppplVar8,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
  if (puVar28 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
      local_200._0_4_ = 0x90;
      local_200._4_4_ = 0;
      pppplVar8 = (long ****)&local_200;
      uVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar31 & 1) != 0) &&
         (puVar28 = (undefined8 *)
                    FUN_710392e290(0x10,0x90,pppplVar8,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7),
         puVar28 != (undefined8 *)0x0)) goto LAB_71018b8014;
    }
    puVar28 = (undefined8 *)0x0;
  }
LAB_71018b8014:
  pppplVar8 = (long ****)(ulong)uVar16;
  FUN_7101d0f900(puVar28,plVar35,pppplVar8,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
  puVar28[2] = &DAT_7105333600;
  *(undefined4 *)(puVar28 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar28 + 0x6c) = DAT_7105333664;
  do {
    uVar16 = DAT_7105333650;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar4) {
      DAT_7105333650 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0' || (uVar16 & 1) != 0);
  puVar28[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar28;
  FUN_71032caea0((long)puVar28,extraout_x1_05,pppplVar8,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
  lVar33 = *(long *)(lVar30 + 0x150);
  *(undefined8 **)(lVar30 + 0x150) = puVar28;
  if (lVar33 != 0) {
    FUN_71032cad20(lVar33);
  }
  lVar33 = *(long *)(DAT_7105329740 + 8);
  local_200._0_4_ = 0;
  uVar31 = 0;
  do {
    puVar24 = (ushort *)(lVar33 + 0x4e4 + uVar31 * 2);
    uVar2 = *puVar24;
    uVar34 = uVar31;
    if (uVar2 == 0) break;
    local_1f8[uVar31] = uVar2;
    uVar2 = puVar24[1];
    if (uVar2 == 0) {
      uVar34 = uVar31 + 1;
      break;
    }
    uVar34 = uVar31 + 2;
    local_1f8[uVar31 + 1] = uVar2;
    uVar31 = uVar34;
  } while ((uint)uVar34 < 0x40);
  local_1f8[uVar34 & 0xffffffff] = 0;
  uVar16 = (uint)local_1f8[0];
  local_200._4_4_ = (int)uVar34;
  if (local_1f8[0] != 0) {
    puVar24 = local_1f8;
    do {
      puVar24 = puVar24 + 1;
      uVar15 = uVar15 * 0x89 ^ uVar16;
      uVar16 = (uint)*puVar24;
    } while (uVar16 != 0);
  }
  local_200._0_4_ = uVar15;
  puVar28 = (undefined8 *)
            FUN_710392e290(0x10,0x1b0,pppplVar8,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
  if (puVar28 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_218 = local_218 & 0xffffffff00000000;
      local_b0 = (long ***)&DAT_000001b0;
      pppplVar8 = &local_b0;
      uVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_218);
      if (((uVar31 & 1) != 0) &&
         (puVar28 = (undefined8 *)
                    FUN_710392e290(0x10,0x1b0,pppplVar8,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7),
         puVar28 != (undefined8 *)0x0)) goto LAB_71018b816c;
    }
    puVar28 = (undefined8 *)0x0;
  }
LAB_71018b816c:
  pppplVar8 = (long ****)&local_200;
  FUN_7101cf77b0(puVar28,plVar35,pppplVar8,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
  puVar28[2] = &DAT_7105333600;
  *(undefined4 *)(puVar28 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar28 + 0x6c) = DAT_7105333664;
  do {
    uVar15 = DAT_7105333650;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar4) {
      DAT_7105333650 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0' || (uVar15 & 1) != 0);
  puVar28[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar28;
  FUN_71032caea0((long)puVar28,extraout_x1_06,pppplVar8,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
  lVar33 = *(long *)(lVar30 + 0x158);
  *(undefined8 **)(lVar30 + 0x158) = puVar28;
  if (lVar33 != 0) {
    FUN_71032cad20(lVar33);
  }
  ppppbVar36 = *(byte *****)(lVar30 + 0x140);
  pppplVar37 = *(long *****)(lVar30 + 0x150);
  pppplVar9 = (long ****)(lVar30 + 0x170);
  puVar28 = (undefined8 *)
            FUN_710392e290(0x10,0x2b8,pppplVar8,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
  uVar19 = extraout_d0;
  uVar40 = extraout_var;
  if (puVar28 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
      local_200._0_4_ = 0x2b8;
      local_200._4_4_ = 0;
      pppplVar8 = (long ****)&local_200;
      uVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      uVar19 = extraout_d0_00;
      uVar40 = extraout_var_00;
      if (((uVar31 & 1) != 0) &&
         (puVar28 = (undefined8 *)
                    FUN_710392e290(0x10,0x2b8,pppplVar8,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7),
         uVar19 = extraout_d0_01, uVar40 = extraout_var_01, puVar28 != (undefined8 *)0x0))
      goto LAB_71018b824c;
    }
    puVar28 = (undefined8 *)0x0;
  }
LAB_71018b824c:
  uVar31 = (ulong)*(uint *)(lVar30 + 0x5c8);
  uVar14 = 3;
  uVar13 = 0;
  auVar42._8_8_ = uVar40;
  auVar42._0_8_ = uVar19;
  FUN_7101d03110(auVar42,uVar41,param_3,puVar28,plVar35,pppplVar9,ppppbVar36,pppplVar37,uVar31,0,3,0
                );
  puVar28[2] = &DAT_7105333600;
  *(undefined4 *)(puVar28 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar28 + 0x6c) = DAT_7105333664;
  do {
    uVar15 = DAT_7105333650;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar4) {
      DAT_7105333650 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0' || (uVar15 & 1) != 0);
  puVar28[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar28;
  FUN_71032caea0((long)puVar28,extraout_x1_07,pppplVar9,ppppbVar36,pppplVar37,uVar31,uVar13,uVar14);
  lVar33 = *(long *)(lVar30 + 0x148);
  *(undefined8 **)(lVar30 + 0x148) = puVar28;
  if (lVar33 != 0) {
    FUN_71032cad20(lVar33);
    puVar28 = *(undefined8 **)(lVar30 + 0x148);
  }
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x2c0,pppplVar9,ppppbVar36,pppplVar37,uVar31,uVar13,uVar14);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
      local_200._0_4_ = 0x2c0;
      local_200._4_4_ = 0;
      pppplVar9 = (long ****)&local_200;
      uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar34 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x2c0,pppplVar9,ppppbVar36,pppplVar37,uVar31,uVar13,uVar14),
         puVar6 != (undefined8 *)0x0)) goto LAB_71018b833c;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_71018b833c:
  *puVar6 = &PTR_FUN_71050ae838;
  puVar6[1] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0x1ffffffff;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *(undefined1 *)(puVar6 + 0xb) = 0;
  *(undefined1 *)(puVar6 + 0xe) = 1;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xf] = plVar35;
  puVar6[0x10] = puVar28;
  puVar28 = (undefined8 *)
            FUN_710392e290(0x10,8,pppplVar9,ppppbVar36,pppplVar37,uVar31,uVar13,uVar14);
  uVar19 = extraout_x1_08;
  if (puVar28 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
      local_200._0_4_ = 8;
      local_200._4_4_ = 0;
      pppplVar9 = (long ****)&local_200;
      auVar42 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      uVar19 = auVar42._8_8_;
      if (((auVar42._0_8_ & 1) != 0) &&
         (puVar28 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar9,ppppbVar36,pppplVar37,uVar31,uVar13,uVar14),
         uVar19 = extraout_x1_09, puVar28 != (undefined8 *)0x0)) goto LAB_71018b83c4;
    }
    puVar28 = (undefined8 *)0x0;
  }
LAB_71018b83c4:
  FUN_7103773200(puVar28,uVar19,pppplVar9,ppppbVar36,pppplVar37,uVar31,uVar13,uVar14);
  puVar6[0x11] = puVar28;
  puVar28 = (undefined8 *)
            FUN_710392e290(0x10,8,pppplVar9,ppppbVar36,pppplVar37,uVar31,uVar13,uVar14);
  uVar19 = extraout_x1_10;
  if (puVar28 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
      local_200._0_4_ = 8;
      local_200._4_4_ = 0;
      pppplVar9 = (long ****)&local_200;
      auVar42 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      uVar19 = auVar42._8_8_;
      if (((auVar42._0_8_ & 1) != 0) &&
         (puVar28 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar9,ppppbVar36,pppplVar37,uVar31,uVar13,uVar14),
         uVar19 = extraout_x1_11, puVar28 != (undefined8 *)0x0)) goto LAB_71018b842c;
    }
    puVar28 = (undefined8 *)0x0;
  }
LAB_71018b842c:
  FUN_7103773200(puVar28,uVar19,pppplVar9,ppppbVar36,pppplVar37,uVar31,uVar13,uVar14);
  puVar6[0x12] = puVar28;
  puVar6[0x14] = &PTR_FUN_71050ae8b8;
  FUN_7103776290(puVar6 + 0x15,extraout_x1_12,pppplVar9,ppppbVar36,pppplVar37,uVar31,uVar13,uVar14);
  FUN_7103776290(puVar6 + 0x17,extraout_x1_13,pppplVar9,ppppbVar36,pppplVar37,uVar31,uVar13,uVar14);
  puVar6[0x1b] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x1d] = 0;
  puVar6[0x1c] = 0x4300000043000000;
  *(undefined1 *)(puVar6 + 0x19) = 0;
  puVar6[0x1f] = 0;
  puVar6[0x1e] = 0;
  puVar6[0x21] = 0;
  puVar6[0x20] = 0x4300000043000000;
  *(undefined4 *)(puVar6 + 0x26) = 0;
  puVar6[0x2c] = 0;
  puVar6[0x2e] = 0;
  *(undefined4 *)(puVar6 + 0x2f) = 0;
  puVar6[0x23] = 0;
  puVar6[0x22] = 0;
  puVar6[0x25] = 0;
  puVar6[0x24] = 0x4300000043000000;
  lVar33 = *(long *)(DAT_7105329740 + 8);
  plVar22 = *(long **)(lVar33 + 0x160);
  if (plVar22 == (long *)0x0) {
    local_1e0 = (uint *)0x0;
  }
  else if ((long *)(lVar33 + 0x140) == plVar22) {
    local_1e0 = (uint *)&local_200;
    (**(code **)(*plVar22 + 0x18))(plVar22,&local_200);
  }
  else {
    local_1e0 = (uint *)(**(code **)(*plVar22 + 0x10))();
  }
  FUN_71019f0670(&local_200,puVar6 + 0x28);
  if ((uint *)&local_200 == local_1e0) {
    pcVar18 = *(code **)(*(long *)local_1e0 + 0x20);
LAB_71018b8518:
    (*pcVar18)();
  }
  else if (local_1e0 != (uint *)0x0) {
    pcVar18 = *(code **)(*(long *)local_1e0 + 0x28);
    goto LAB_71018b8518;
  }
  uVar19 = *(undefined8 *)(lVar33 + 0x170);
  *(undefined4 *)(puVar6 + 0x2f) = *(undefined4 *)(lVar33 + 0x178);
  puVar6[0x2e] = uVar19;
  puVar6[0x30] = DAT_7105325d18;
  puVar28 = (undefined8 *)
            FUN_710392e290(0x10,8,pppplVar9,ppppbVar36,pppplVar37,uVar31,uVar13,uVar14);
  uVar19 = extraout_x1_14;
  if (puVar28 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
      local_200._0_4_ = 8;
      local_200._4_4_ = 0;
      pppplVar9 = (long ****)&local_200;
      auVar42 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      uVar19 = auVar42._8_8_;
      if (((auVar42._0_8_ & 1) != 0) &&
         (puVar28 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar9,ppppbVar36,pppplVar37,uVar31,uVar13,uVar14),
         uVar19 = extraout_x1_15, puVar28 != (undefined8 *)0x0)) goto LAB_71018b85a8;
    }
    puVar28 = (undefined8 *)0x0;
  }
LAB_71018b85a8:
  puVar1 = puVar6 + 0x31;
  FUN_7103773200(puVar28,uVar19,pppplVar9,ppppbVar36,pppplVar37,uVar31,uVar13,uVar14);
  puVar6[0x31] = puVar28;
  puVar6[0x32] = 0;
  plVar22 = puVar6 + 0x34;
  puVar6[0x34] = 0;
  puVar6[0x35] = 0;
  puVar6[0x33] = plVar22;
  *(undefined4 *)(puVar6 + 0x36) = 0xffffffff;
  *(undefined4 *)(puVar6 + 0x3d) = 0;
  puVar6[0x42] = 0;
  puVar6[0x41] = 0;
  puVar6[0x3e] = puVar6;
  puVar6[0x55] = 0xffffffff;
  *(undefined4 *)(puVar6 + 0x56) = 0xffffffff;
  *(undefined1 *)((long)puVar6 + 0x2b4) = 0;
  puVar6[0x53] = 0;
  puVar6[0x52] = 0;
  puVar6[0x51] = 0;
  puVar6[0x50] = 0;
  puVar6[0x4f] = 0;
  puVar6[0x4e] = 0;
  puVar6[0x4d] = 0;
  puVar6[0x4c] = 0;
  puVar6[0x4b] = 0;
  puVar6[0x4a] = 0;
  puVar6[0x49] = 0;
  puVar6[0x48] = 0;
  puVar6[0x47] = 0;
  puVar6[0x46] = 0;
  puVar6[0x45] = 0;
  puVar6[0x44] = 0;
  puVar6[0x43] = 0;
  puVar6[0x3b] = 0;
  puVar6[0x3c] = 0;
  puVar6[0x39] = 0;
  puVar6[0x3a] = 0;
  puVar6[0x37] = 0;
  puVar6[0x38] = 0;
  puVar6[0x54] = 0;
  puVar6[0x3f] = 0;
  puVar6[0x40] = 0;
  local_218 = 0;
  local_210 = 0;
  uStack_208 = 0;
  uVar15 = *(uint *)(*(long *)(DAT_7105329740 + 8) + 4);
  if ((uVar15 != 0) &&
     (FUN_7100813660(&local_218,(ulong)uVar15,pppplVar9,ppppbVar36,pppplVar37,uVar31,uVar13,uVar14),
     local_210 != local_218)) {
    uVar34 = 0;
    do {
      if ((uint)uVar34 < *(uint *)(*(long *)(DAT_7105329740 + 8) + 4)) {
        lVar33 = *(long *)(DAT_7105329740 + 8) + (uVar34 & 0xffffffff) * 0x18;
        uVar41 = (undefined4)((ulong)(*(long *)(lVar33 + 0x10) - *(long *)(lVar33 + 8)) >> 4);
      }
      else {
        uVar41 = 0;
      }
      *(undefined4 *)(local_218 + uVar34 * 4) = uVar41;
      uVar34 = uVar34 + 1;
    } while (uVar34 < (ulong)((long)(local_210 - local_218) >> 2));
    if (local_210 != local_218) {
      uVar34 = 0;
      uVar23 = local_218;
      uVar25 = local_210;
      do {
        if (0 < *(int *)(uVar23 + uVar34 * 4)) {
          iVar5 = (int)uVar34;
          lVar33 = 0;
          do {
            uVar15 = (int)lVar33 + iVar5 * 100;
            local_1f8[0] = (ushort)lVar33;
            local_1f8[1] = (ushort)((ulong)lVar33 >> 0x10);
            plVar39 = (long *)*plVar22;
            plVar38 = plVar22;
            plVar29 = plVar22;
            while (plVar39 != (long *)0x0) {
              while (plVar29 = plVar39, (int)uVar15 < *(int *)((long)plVar29 + 0x1c)) {
                plVar38 = plVar29;
                plVar39 = (long *)*plVar29;
                if ((long *)*plVar29 == (long *)0x0) {
                  lVar21 = *plVar29;
                  goto joined_r0x0071018b881c;
                }
              }
              if ((int)uVar15 <= *(int *)((long)plVar29 + 0x1c)) break;
              plVar38 = plVar29 + 1;
              plVar39 = (long *)*plVar38;
            }
            lVar21 = *plVar38;
joined_r0x0071018b881c:
            local_200._0_4_ = uVar15;
            local_200._4_4_ = iVar5;
            if (lVar21 == 0) {
              plVar39 = (long *)FUN_710392e290(0x10,0x28,pppplVar9,ppppbVar36,pppplVar37,uVar31,
                                               uVar13,uVar14);
              if (plVar39 == (long *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_c0 = (undefined **)((ulong)local_c0 & 0xffffffff00000000);
                  local_b0 = (long ***)&DAT_00000028;
                  pppplVar9 = &local_b0;
                  uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
                  if (((uVar23 & 1) != 0) &&
                     (plVar39 = (long *)FUN_710392e290(0x10,0x28,pppplVar9,ppppbVar36,pppplVar37,
                                                       uVar31,uVar13,uVar14), plVar39 != (long *)0x0
                     )) goto LAB_71018b87cc;
                }
                plVar39 = (long *)0x0;
              }
LAB_71018b87cc:
              *(uint *)((long)plVar39 + 0x1c) = uVar15;
              plVar39[4] = CONCAT26(local_1f8[1],CONCAT24(local_1f8[0],local_200._4_4_));
              *plVar39 = 0;
              plVar39[1] = 0;
              plVar39[2] = (long)plVar29;
              *plVar38 = (long)plVar39;
              if (*(long *)puVar6[0x33] != 0) {
                puVar6[0x33] = *(long *)puVar6[0x33];
                plVar39 = (long *)*plVar38;
              }
              std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                        ((long *)puVar6[0x34],plVar39);
              puVar6[0x35] = puVar6[0x35] + 1;
              uVar23 = local_218;
            }
            lVar33 = lVar33 + 1;
            uVar25 = local_210;
          } while (lVar33 < *(int *)(uVar23 + uVar34 * 4));
        }
        uVar34 = uVar34 + 1;
      } while (uVar34 < (ulong)((long)(uVar25 - uVar23) >> 2));
    }
  }
  puVar6[0x43] = FUN_7101cffe30;
  puVar6[0x45] = FUN_7101cffe40;
  puVar6[0x47] = FUN_7101cfff20;
  puVar6[0x49] = FUN_7101cfff80;
  puVar6[0x44] = 0;
  puVar6[0x46] = 0;
  puVar6[0x48] = 0;
  puVar6[0x4a] = 0;
  puVar6[0x3f] = 0;
  puVar6[0x40] = 0;
  *(undefined8 *)((long)puVar6 + 0x29c) = 0;
  *(undefined8 *)((long)puVar6 + 0x294) = 0;
  *(undefined8 *)((long)puVar6 + 0x28c) = 0;
  *(undefined8 *)((long)puVar6 + 0x284) = 0;
  *(undefined8 *)((long)puVar6 + 0x27c) = 0;
  *(undefined8 *)((long)puVar6 + 0x274) = 0;
  *(undefined8 *)((long)puVar6 + 0x26c) = 0;
  *(undefined8 *)((long)puVar6 + 0x264) = 0;
  *(undefined8 *)((long)puVar6 + 0x25c) = 0;
  *(undefined8 *)((long)puVar6 + 0x2a4) = 0xffffffff00000000;
  *(undefined8 *)((long)puVar6 + 0x2ac) = 0xffffffff00000000;
  *(undefined1 *)((long)puVar6 + 0x2b4) = 0;
  *(undefined4 *)(puVar6 + 0x4b) = 0;
  FUN_7101cfff90(puVar6 + 0x3e);
  FUN_71032cbf30(puVar1,*plVar35,(ulong *)&DAT_71045454e0,(byte ****)0x1,pppplVar37,uVar31,uVar13,
                 uVar14);
  pppplVar12 = (long ****)&DAT_71045454e8;
  FUN_71032cbf30(puVar6 + 0x11,*plVar35,(ulong *)&DAT_71045454e8,(byte ****)0x1,pppplVar37,uVar31,
                 uVar13,uVar14);
  ppppbVar11 = (byte ****)0x1;
  FUN_71032cbf30(puVar6 + 0x12,*plVar35,(ulong *)&DAT_71045454e8,(byte ****)0x1,pppplVar37,uVar31,
                 uVar13,uVar14);
  FUN_7103776390(&local_c0,(undefined8 *)(*(long *)puVar6[0x11] + 8),pppplVar12,ppppbVar11,
                 pppplVar37,uVar31,uVar13,uVar14);
  FUN_7103776390(&local_d0,(undefined8 *)(*(long *)puVar6[0x12] + 8),pppplVar12,ppppbVar11,
                 pppplVar37,uVar31,uVar13,uVar14);
  if (&local_c0 != (undefined ***)(puVar6 + 0x15)) {
    *(undefined8 *)puVar6[0x16] = *local_b8;
    *(undefined8 *)(puVar6[0x16] + 8) = local_b8[1];
    puVar28 = (undefined8 *)puVar6[0x16];
    if (puVar28 != local_b8) {
      *(undefined8 *)puVar28[3] = *(undefined8 *)local_b8[3];
      *(undefined8 *)(puVar28[3] + 8) = *(undefined8 *)(local_b8[3] + 8);
      *(undefined8 *)(puVar28[3] + 0x10) = *(undefined8 *)(local_b8[3] + 0x10);
      *(undefined8 *)(puVar28[3] + 0x18) = *(undefined8 *)(local_b8[3] + 0x18);
    }
  }
  if (&local_d0 != (undefined ***)(puVar6 + 0x17)) {
    *(undefined8 *)puVar6[0x18] = *local_c8;
    *(undefined8 *)(puVar6[0x18] + 8) = local_c8[1];
    puVar28 = (undefined8 *)puVar6[0x18];
    if (puVar28 != local_c8) {
      *(undefined8 *)puVar28[3] = *(undefined8 *)local_c8[3];
      *(undefined8 *)(puVar28[3] + 8) = *(undefined8 *)(local_c8[3] + 8);
      *(undefined8 *)(puVar28[3] + 0x10) = *(undefined8 *)(local_c8[3] + 0x10);
      *(undefined8 *)(puVar28[3] + 0x18) = *(undefined8 *)(local_c8[3] + 0x18);
    }
  }
  FUN_7103778300(0x3f800000,puVar6[0x16],0x71043f0fa9);
  FUN_7103778300(0x3f800000,puVar6[0x18],0x71043f0fa9);
  FUN_7103778300(0x3f800000,puVar6[0x16],0x71044017a5);
  FUN_7103778300(0x3f800000,puVar6[0x18],0x71042b4596);
  puVar28 = local_c8;
  local_d0 = &PTR_FUN_710523d988;
  local_c8 = (undefined8 *)0x0;
  if (puVar28 != (undefined8 *)0x0) {
    uVar34 = puVar28[3];
    puVar28[2] = &PTR_FUN_710523d9a8;
    puVar28[3] = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)puVar28);
  }
  puVar28 = local_b8;
  local_c0 = &PTR_FUN_710523d988;
  local_b8 = (undefined8 *)0x0;
  if (puVar28 != (undefined8 *)0x0) {
    uVar34 = puVar28[3];
    puVar28[2] = &PTR_FUN_710523d9a8;
    puVar28[3] = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)puVar28);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",0,0,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",0,1,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",0,2,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",0,3,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",0,4,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",0,5,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",0,6,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",0,7,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",0,8,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",0,9,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",0,10,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",0,0xb,pppplVar37
                 ,uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",0,0xc,pppplVar37
                 ,uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",0,0xd,pppplVar37
                 ,uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",0,0xe,pppplVar37
                 ,uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",0,0xf,pppplVar37
                 ,uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",1,0,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",1,1,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",1,2,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",1,3,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",1,4,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",1,5,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",1,6,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",1,7,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",2,0,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",2,1,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",2,2,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",2,3,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",3,0,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",3,1,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_7103776910(&local_200,*(long *)*puVar1 + 8,(long ****)"set_replaybtn_%d_%02d",4,0,pppplVar37,
                 uVar31,uVar13,uVar14);
  plVar38 = (long *)CONCAT26(local_1f8[3],CONCAT24(local_1f8[2],CONCAT22(local_1f8[1],local_1f8[0]))
                            );
  lVar33 = *plVar38;
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  local_200._0_4_ = 0x523d9a8;
  local_200._4_4_ = 0x71;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  if (plVar38 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar38);
  }
  FUN_71037760f0(**(long **)*puVar1,0);
  *(undefined4 *)(*(long *)(**(long **)*puVar1 + 0x600) + 0x14) = 0x40;
  local_1e8 = &DAT_41f0000000000000;
  local_1f8[0] = 0x101;
  local_1f8[6] = 1;
  local_1f8[4] = 1;
  local_1f8[5] = 0;
  local_1ea = 1;
  local_200._0_4_ = 0;
  local_200._4_4_ = 0;
  local_1f8[3] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1e0 = (uint *)((ulong)local_1e0 & 0xffffffff00000000);
  local_1b0 = (long *)0x0;
  local_180 = (long *)0x0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_e0 = 0;
  local_b0 = (long ***)&DAT_7105186040;
  local_90 = &local_b0;
  FUN_7101989a30((long *)&local_b0,alStack_1a0);
  if (&local_b0 == local_90) {
    pplVar20 = (*local_90)[4];
LAB_71018b94a8:
    (*(code *)pplVar20)();
  }
  else if (local_90 != (long ****)0x0) {
    pplVar20 = (*local_90)[5];
    goto LAB_71018b94a8;
  }
  local_b0 = (long ***)&DAT_71051860d0;
  local_90 = &local_b0;
  FUN_7101989a30((long *)&local_b0,alStack_140);
  if (&local_b0 == local_90) {
    pplVar20 = (*local_90)[4];
LAB_71018b94f4:
    (*(code *)pplVar20)();
  }
  else if (local_90 != (long ****)0x0) {
    pplVar20 = (*local_90)[5];
    goto LAB_71018b94f4;
  }
  local_b0 = (long ***)&DAT_7105186118;
  local_90 = &local_b0;
  FUN_7101989a30((long *)&local_b0,alStack_110);
  if (&local_b0 == local_90) {
    pplVar20 = (*local_90)[4];
LAB_71018b9540:
    (*(code *)pplVar20)();
  }
  else if (local_90 != (long ****)0x0) {
    pplVar20 = (*local_90)[5];
    goto LAB_71018b9540;
  }
  local_b0 = (long ***)&PTR_FUN_71050ae870;
  local_a8 = FUN_7101d00060;
  uStack_a0 = 0;
  plVar38 = puVar6 + 0x32;
  local_98 = puVar6;
  local_90 = &local_b0;
  FUN_7101a7ed70((long *)&local_b0,alStack_1d0);
  if (&local_b0 == local_90) {
    pplVar20 = (*local_90)[4];
LAB_71018b959c:
    (*(code *)pplVar20)();
  }
  else if (local_90 != (long ****)0x0) {
    pplVar20 = (*local_90)[5];
    goto LAB_71018b959c;
  }
  pcVar10 = "selector";
  ppppbVar11 = (byte ****)&local_200;
  FUN_7103770b30(plVar38,(undefined8 *)(*(long *)puVar6[0x31] + 8),(long ****)"selector",ppppbVar11,
                 pppplVar37,uVar31,uVar13,uVar14);
  if ((long *)puVar6[0x33] != plVar22) {
    plVar29 = (long *)puVar6[0x33];
    do {
      iVar5 = *(int *)((long)plVar29 + 0x1c);
      ppppbVar11 = (byte ****)(ulong)*(uint *)(plVar29 + 4);
      pppplVar37 = (long ****)(ulong)*(uint *)((long)plVar29 + 0x24);
      pcVar10 = "set_replaybtn_%d_%02d";
      FUN_71037717d0(plVar38,iVar5,"set_replaybtn_%d_%02d",ppppbVar11,pppplVar37,uVar31,uVar13,
                     uVar14);
      lVar33 = *(long *)(*plVar38 + 0x1b8);
      if (lVar33 != 0) {
        lVar21 = *plVar38 + 0x1b8;
        lVar17 = lVar21;
        do {
          if (iVar5 <= *(int *)(lVar33 + 0x20)) {
            lVar17 = lVar33;
          }
          lVar33 = *(long *)(lVar33 + (ulong)(*(int *)(lVar33 + 0x20) < iVar5) * 8);
        } while (lVar33 != 0);
        if (((lVar17 != lVar21) && (*(int *)(lVar17 + 0x20) <= iVar5)) &&
           (plVar39 = *(long **)(lVar17 + 0x28), plVar39 != (long *)0x0)) {
          (**(code **)(*plVar39 + 0x1f8))(plVar39,0);
          pcVar10 = (char *)0x0;
          (**(code **)(*plVar39 + 0x388))(plVar39,1);
        }
      }
      plVar39 = (long *)plVar29[1];
      if ((long *)plVar29[1] == (long *)0x0) {
        plVar39 = plVar29 + 2;
        plVar26 = (long *)*plVar39;
        if ((long *)*plVar26 != plVar29) {
          do {
            lVar33 = *plVar39;
            plVar39 = (long *)(lVar33 + 0x10);
            plVar26 = (long *)*plVar39;
          } while (*plVar26 != lVar33);
        }
      }
      else {
        do {
          plVar26 = plVar39;
          plVar39 = (long *)*plVar26;
        } while ((long *)*plVar26 != (long *)0x0);
      }
      plVar29 = plVar26;
    } while (plVar26 != plVar22);
  }
  (**(code **)(*(long *)*plVar38 + 0x60))((long *)*plVar38,0);
  (**(code **)(*(long *)*plVar38 + 0x70))((long *)*plVar38,0);
  if (alStack_110 == local_f0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  else if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x28))();
  }
  if (alStack_140 == local_120) {
    pcVar18 = *(code **)(*local_120 + 0x20);
LAB_71018b974c:
    (*pcVar18)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar18 = *(code **)(*local_120 + 0x28);
    goto LAB_71018b974c;
  }
  if (alStack_170 == local_150) {
    pcVar18 = *(code **)(*local_150 + 0x20);
LAB_71018b977c:
    (*pcVar18)();
  }
  else if (local_150 != (long *)0x0) {
    pcVar18 = *(code **)(*local_150 + 0x28);
    goto LAB_71018b977c;
  }
  if (alStack_1a0 == local_180) {
    pcVar18 = *(code **)(*local_180 + 0x20);
LAB_71018b97ac:
    (*pcVar18)();
  }
  else if (local_180 != (long *)0x0) {
    pcVar18 = *(code **)(*local_180 + 0x28);
    goto LAB_71018b97ac;
  }
  if (alStack_1d0 == local_1b0) {
    pcVar18 = *(code **)(*local_1b0 + 0x20);
  }
  else {
    if (local_1b0 == (long *)0x0) goto LAB_71018b97e0;
    pcVar18 = *(code **)(*local_1b0 + 0x28);
  }
  (*pcVar18)();
LAB_71018b97e0:
  FUN_710323eba0((undefined8 *)(*plVar35 + 8),(ulong *)&DAT_71045454e0,(long *********)pcVar10,
                 ppppbVar11,pppplVar37,uVar31,uVar13,uVar14);
  FUN_710323eba0((undefined8 *)(*plVar35 + 8),(ulong *)&DAT_71045454e8,(long *********)pcVar10,
                 ppppbVar11,pppplVar37,uVar31,uVar13,uVar14);
  uVar19 = extraout_x1_16;
  if (local_218 != 0) {
    local_210 = local_218;
    FUN_710392eb40(local_218);
    uVar19 = extraout_x1_17;
  }
  puVar6[2] = &DAT_7105333600;
  *(undefined4 *)(puVar6 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar6 + 0x6c) = DAT_7105333664;
  do {
    uVar15 = DAT_7105333650;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar4) {
      DAT_7105333650 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0' || (uVar15 & 1) != 0);
  puVar6[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar6;
  FUN_71032caea0((long)puVar6,uVar19,(long ****)pcVar10,ppppbVar11,pppplVar37,uVar31,uVar13,uVar14);
  lVar33 = *(long *)(lVar30 + 0x160);
  *(undefined8 **)(lVar30 + 0x160) = puVar6;
  if (lVar33 != 0) {
    FUN_71032cad20(lVar33);
  }
  if (plVar27 != (long *)0x0) {
    plVar35 = plVar27 + 1;
    do {
      lVar30 = *plVar35;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar4) {
        *plVar35 = lVar30 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar30 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

