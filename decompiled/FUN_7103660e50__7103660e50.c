// addr:      7103660e50
// offset:    0x3660e50
// name:      FUN_7103660e50
// mangled:   
// signature: undefined __cdecl FUN_7103660e50(undefined8 * param_1, long param_2, long param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x0071036615a8) */

void FUN_7103660e50(undefined8 *param_1,long param_2,long param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte ****ppppbVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  void *pvVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined8 local_5d8;
  long *local_5d0;
  long local_5c8;
  long *local_5c0;
  long local_5b8;
  void *local_5b0;
  byte *local_5a8;
  byte *local_5a0;
  undefined8 local_598;
  undefined8 *local_590;
  undefined8 *local_588;
  undefined8 *puStack_580;
  undefined2 local_578;
  undefined2 uStack_576;
  undefined4 uStack_574;
  undefined1 local_570;
  undefined8 local_56c;
  undefined8 local_564;
  undefined8 local_55c;
  undefined8 local_554;
  undefined8 local_54c;
  undefined4 local_544;
  undefined **local_540;
  long *local_538;
  ulong *local_530;
  ulong local_528;
  ulong local_520;
  undefined8 uStack_518;
  void *local_510;
  undefined8 local_508;
  undefined4 local_500;
  undefined8 *local_4f8;
  undefined8 *local_4f0;
  undefined8 *puStack_4e8;
  undefined4 local_4e0;
  undefined8 local_4dc;
  undefined **local_4d0;
  long local_4c8;
  undefined8 *local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined4 local_450;
  undefined **local_448;
  long local_440;
  undefined8 *local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined1 local_420;
  undefined4 local_41c;
  undefined **local_418;
  long *local_410;
  long *local_408;
  long local_400;
  undefined1 local_3f8;
  undefined **local_3f0;
  long *local_3e8;
  long *local_3e0;
  long local_3d8;
  ulong local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined1 *local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined1 auStack_330 [640];
  uint local_b0 [2];
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  
  local_348 = auStack_330;
  local_350 = 0;
  local_358 = 0;
  local_360 = 0;
  uVar8 = 0xe;
  uVar1 = SUB84(param_5,0);
  local_368 = 0;
  local_370 = 0;
  local_378 = 0;
  local_380 = 0;
  local_388 = 0;
  local_390 = 0;
  local_398 = 0;
  local_3a0 = 0;
  local_3a8 = 0;
  local_3b0 = 0;
  local_3b8 = 0;
  local_3c0 = 0;
  local_3c8 = 0;
  local_3d0 = 0;
  local_340 = 0;
  local_338 = 0x10;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = &PTR_FUN_7105232e00;
  local_b0[0] = 0;
  local_78 = (undefined8 *)0x0;
  local_80 = (undefined8 *)0x0;
  local_88 = 0;
  ppppbVar9 = param_4;
  FUN_71002c51f0(&local_3d0,"distortionmesh",0xe,param_4,param_5,param_6,param_7,param_8);
  local_3b8 = 0xa00000001;
  local_3b0 = 0;
  local_530 = (ulong *)0x0;
  local_528 = 0;
  local_3a8 = 0x3f80000000000000;
  local_540 = &PTR_FUN_7105232e60;
  local_538 = (long *)0x0;
  if ((*(long **)(param_3 + 0x10) != (long *)0x0) &&
     (**(long **)(param_3 + 0x10) == *(long *)(param_3 + 0x18))) {
    local_538 = *(long **)(param_3 + 8);
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    if (local_538 == (long *)0x0) {
      local_528 = 0;
      local_530 = (ulong *)0x0;
    }
    else {
      local_530 = (ulong *)local_538[1];
      local_528 = *local_530;
    }
  }
  FUN_71035f68b0(local_b0,(long)&local_540);
  local_540 = &PTR_FUN_7105232e60;
  if (((local_530 != (ulong *)0x0) && (*local_530 == local_528)) && (local_538 != (long *)0x0)) {
    (**(code **)(*local_538 + 8))();
  }
  FUN_71035e90a0((long *)&local_348,param_2,uVar8,ppppbVar9,param_5,param_6,param_7,param_8);
  iVar6 = FUN_710392e1f0(&local_5d0,0x10,(long ****)&DAT_000001c0,ppppbVar9,param_5,param_6,param_7,
                         param_8);
  if ((iVar6 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_540 = (undefined **)0x1c0;
    uVar7 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_540);
    if ((uVar7 & 1) != 0) {
      FUN_710392e1f0(&local_5d0,0x10,(long ****)&DAT_000001c0,ppppbVar9,param_5,param_6,param_7,
                     param_8);
    }
  }
  nu::VirtualAllocHook(0x1c0,0x10,local_5d0);
  plVar13 = local_5d0;
  FUN_71037c3a70(local_5d0);
  *local_5d0 = (long)&PTR_FUN_710526f9d8;
  local_5d0[0x27] = (long)&PTR_FUN_71052688a8;
  local_5d0[0x28] = 0;
  *(undefined8 *)((long)local_5d0 + 100) = 0x100000000;
  *(undefined4 *)(local_5d0 + 0x11) = 2;
  *(undefined1 *)(local_5d0 + 0x33) = 1;
  local_5d0[3] = 0;
  local_5d0[4] = 0;
  local_5d0[2] = 0;
  *(undefined4 *)(local_5d0 + 5) = 0;
  *(undefined1 *)(local_5d0 + 0xc) = 0;
  local_5d0[0xe] = 0;
  *(undefined8 *)((long)local_5d0 + 0xec) = 0;
  *(undefined8 *)((long)local_5d0 + 0xe4) = 0;
  *(undefined8 *)((long)local_5d0 + 0xdc) = 0;
  *(undefined8 *)((long)local_5d0 + 0xd4) = 0;
  *(undefined8 *)((long)local_5d0 + 0xcc) = 0;
  *(undefined8 *)((long)local_5d0 + 0xc4) = 0;
  *(undefined8 *)((long)local_5d0 + 0xbc) = 0;
  *(undefined8 *)((long)local_5d0 + 0xb4) = 0;
  *(undefined8 *)((long)local_5d0 + 0xac) = 0;
  *(undefined8 *)((long)local_5d0 + 0xa4) = 0;
  *(undefined8 *)((long)local_5d0 + 0x9c) = 0;
  *(undefined8 *)((long)local_5d0 + 0x94) = 0;
  *(undefined8 *)((long)local_5d0 + 0x8c) = 0;
  *(undefined4 *)((long)local_5d0 + 0x19c) = 0;
  local_5d0[10] = 0;
  local_5d0[0xb] = 0;
  local_5d0[8] = 0;
  local_5d0[9] = 0;
  local_5d0[6] = 0;
  local_5d0[7] = 0;
  local_5d0[0xf] = 0;
  local_5d0[0x10] = 0;
  local_5d0[0x21] = 0;
  local_5d0[0x22] = 0;
  local_5d0[0x1f] = (long)&PTR_FUN_7105231690;
  local_5d0[0x20] = 0;
  local_5d0[0x25] = 0;
  local_5d0[0x26] = 0;
  local_5d0[0x23] = (long)&PTR_FUN_7105231a30;
  local_5d0[0x24] = 0;
  local_5d0[0x29] = 0;
  local_5d0[0x2a] = 0;
  local_5d0[0x31] = 0;
  local_5d0[0x32] = 0;
  local_5d0[0x2f] = (long)&PTR_FUN_7105231970;
  local_5d0[0x30] = 0;
  local_5d0[0x2d] = 0;
  local_5d0[0x2e] = 0;
  local_5d0[0x2b] = 0;
  local_5d0[0x2c] = 0;
  local_5d0[0x36] = 0;
  local_5d0[0x37] = 0;
  local_5d0[0x34] = (long)&PTR_FUN_7105232cc8;
  local_5d0[0x35] = 0;
  lVar12 = DAT_71053354e8;
  if ((DAT_71053354f0 == (long *)0x0) || (*DAT_71053354f0 != DAT_71053354f8)) {
    local_5d0[0x20] = 0;
LAB_7103661178:
    lVar12 = 0;
    local_5d0[0x21] = 0;
  }
  else {
    local_5d0[0x20] = DAT_71053354e8;
    if (lVar12 == 0) goto LAB_7103661178;
    plVar11 = *(long **)(lVar12 + 8);
    local_5d0[0x21] = (long)plVar11;
    lVar12 = *plVar11;
  }
  local_5d0[0x22] = lVar12;
  local_3e0 = (long *)local_5d0[1];
  local_3e8 = local_5d0;
  local_3d8 = *local_3e0;
  local_528 = local_528 & 0xffffffff00000000;
  local_540 = (undefined **)0x0;
  local_538 = (long *)0x0;
  local_530 = (void *)0x0;
  local_510 = (void *)0x0;
  local_508 = 0;
  local_500 = 0;
  local_3f0 = &PTR_FUN_7105231930;
  local_4f8 = (undefined8 *)0x0;
  local_520 = 0;
  uStack_518 = 0;
  local_4f0 = (undefined8 *)0x0;
  puStack_4e8 = (undefined8 *)0x0;
  local_4dc = 2;
  local_450 = 0;
  local_41c = 0;
  local_420 = 0;
  local_428 = 0;
  local_3f8 = 1;
  local_4e0 = 0;
  local_4c0 = (undefined8 *)0x0;
  local_4b8 = 0;
  local_4d0 = &PTR_FUN_7105231690;
  local_4c8 = 0;
  local_438 = (undefined8 *)0x0;
  local_430 = 0;
  local_448 = &PTR_FUN_7105231a30;
  local_440 = 0;
  local_460 = 0;
  uStack_458 = 0;
  local_470 = 0;
  uStack_468 = 0;
  local_480 = 0;
  uStack_478 = 0;
  local_490 = 0;
  uStack_488 = 0;
  local_4a0 = 0;
  uStack_498 = 0;
  local_4b0 = 0;
  uStack_4a8 = 0;
  local_408 = (long *)0x0;
  local_400 = 0;
  local_418 = &PTR_FUN_7105231970;
  local_410 = (long *)0x0;
  FUN_71002c51f0((ulong *)&local_540,"distortionmesh",0xe,ppppbVar9,param_5,param_6,param_7,param_8)
  ;
  uVar8 = 0xe;
  local_528 = local_528 & 0xffffffff00000000;
  FUN_71002c51f0(&local_520,"distortionmesh",0xe,ppppbVar9,param_5,param_6,param_7,param_8);
  local_508 = CONCAT44(uVar1,(int)param_4);
  local_4dc = 0x400000000;
  uStack_574 = 3;
  local_56c = 0xff00000000;
  local_41c = 0;
  local_420 = 0;
  local_428 = 0;
  local_500 = 1;
  local_570 = 0;
  local_564 = 0x7000000ff;
  local_544 = 0;
  local_54c = 0;
  local_554 = 0;
  local_55c = 0;
  local_578 = 0;
  FUN_7103593520(&local_5d0,(byte *)&local_578,uVar8,ppppbVar9,param_5,param_6,param_7,param_8);
  if ((local_5c0 == (long *)0x0) || (*local_5c0 != local_5b8)) {
    local_4c8 = 0;
LAB_71036612e4:
    local_4b8 = 0;
    local_4c0 = (undefined8 *)0x0;
  }
  else {
    local_4c8 = local_5c8;
    if (local_5c8 == 0) goto LAB_71036612e4;
    local_4c0 = *(undefined8 **)(local_5c8 + 8);
    local_4b8 = *local_4c0;
  }
  local_4a0 = local_3a0;
  uStack_498 = local_398;
  local_588 = (undefined8 *)0x0;
  puStack_580 = (undefined8 *)0x0;
  local_5c0 = (long *)0x0;
  local_598 = 0;
  local_590 = (undefined8 *)0x0;
  local_5a8 = (byte *)0x0;
  local_5a0 = (byte *)0x0;
  local_5b8 = 0;
  local_5b0 = (void *)0x0;
  local_4b0 = local_3b0;
  uStack_4a8 = local_3a8;
  local_480 = local_380;
  uStack_478 = local_378;
  local_490 = local_390;
  uStack_488 = local_388;
  local_450 = local_350;
  local_460 = local_360;
  uStack_458 = local_358;
  local_470 = local_370;
  uStack_468 = local_368;
  local_5d0 = (long *)0x200000000;
  local_5c8 = 0;
  FUN_710359d620((long *)&local_590,&local_5d0,uVar8,ppppbVar9,param_5,param_6,param_7,param_8);
  pbVar16 = local_5a8;
  pbVar15 = local_5a0;
  if (local_5a8 != (byte *)0x0) {
    while (pbVar17 = pbVar15, pbVar17 != pbVar16) {
      pbVar15 = pbVar17 + -0x18;
      if ((*pbVar15 & 1) != 0) {
        pvVar14 = *(void **)(pbVar17 + -8);
        nu::VirtualFreeHook(pvVar14);
        FUN_710392eb40((ulong)pvVar14);
      }
    }
    local_5a0 = pbVar16;
    nu::VirtualFreeHook(pbVar16);
    FUN_710392eb40((ulong)pbVar16);
  }
  pvVar14 = local_5b0;
  if (((ulong)local_5c0 & 1) != 0) {
    nu::VirtualFreeHook(local_5b0);
    FUN_710392eb40((ulong)pvVar14);
  }
  local_5d0 = (long *)0x1100000000;
  local_5a0 = (byte *)0x0;
  local_598 = 0;
  local_5b8 = 0;
  local_5c8 = 0x800000000;
  local_5c0 = (long *)0x0;
  local_5b0 = (void *)0x0;
  local_5a8 = (byte *)0x0;
  if (local_588 < puStack_580) {
    *local_588 = 0x1100000000;
    local_588[1] = 0x800000000;
    local_588[3] = 0;
    local_588[4] = 0;
    local_588[2] = 0;
    local_5b8 = 0;
    local_5b0 = (void *)0x0;
    local_5c0 = (long *)0x0;
    local_588[6] = 0;
    local_588[7] = 0;
    local_588[5] = 0;
    local_588 = local_588 + 8;
    local_5a0 = (byte *)0x0;
    local_598 = 0;
    local_5a8 = (byte *)0x0;
  }
  else {
    FUN_710359d620((long *)&local_590,&local_5d0,uVar8,ppppbVar9,param_5,param_6,param_7,param_8);
    pbVar16 = local_5a8;
    pbVar15 = local_5a0;
    if (local_5a8 != (byte *)0x0) {
      while (pbVar17 = pbVar15, pbVar17 != pbVar16) {
        pbVar15 = pbVar17 + -0x18;
        if ((*pbVar15 & 1) != 0) {
          pvVar14 = *(void **)(pbVar17 + -8);
          nu::VirtualFreeHook(pvVar14);
          FUN_710392eb40((ulong)pvVar14);
        }
      }
      local_5a0 = pbVar16;
      nu::VirtualFreeHook(pbVar16);
      FUN_710392eb40((ulong)pbVar16);
    }
    pvVar14 = local_5b0;
    if (((ulong)local_5c0 & 1) != 0) {
      nu::VirtualFreeHook(local_5b0);
      FUN_710392eb40((ulong)pvVar14);
    }
  }
  FUN_71035e88e0(&local_5d0,(long *)&local_590,uVar8,ppppbVar9,param_5,param_6,param_7,param_8);
  if ((local_5c0 == (long *)0x0) || (*local_5c0 != local_5b8)) {
    local_440 = 0;
  }
  else {
    local_440 = local_5c8;
    if (local_5c8 != 0) {
      local_438 = *(undefined8 **)(local_5c8 + 8);
      local_430 = *local_438;
      goto LAB_7103661550;
    }
  }
  local_430 = 0;
  local_438 = (undefined8 *)0x0;
LAB_7103661550:
  local_5d8 = 0x1000000000;
  if (local_4f0 == puStack_4e8) {
    FUN_710359ddb0((long *)&local_4f8,&local_5d8,uVar8,ppppbVar9,param_5,param_6,param_7,param_8);
    puVar10 = local_590;
  }
  else {
    *local_4f0 = 0x1000000000;
    local_4f0 = local_4f0 + 1;
    puVar10 = local_590;
  }
  local_590 = puVar10;
  puVar2 = puVar10;
  puVar5 = local_588;
  if (puVar10 != (undefined8 *)0x0) {
    while (puVar3 = puVar5, local_590 = puVar2, puVar3 != puVar10) {
      pbVar16 = (byte *)puVar3[-3];
      if (pbVar16 != (byte *)0x0) {
        pbVar15 = (byte *)puVar3[-2];
        if (pbVar15 == pbVar16) {
          puVar3[-2] = pbVar16;
        }
        else {
          do {
            pbVar17 = pbVar15 + -0x18;
            if ((*pbVar17 & 1) != 0) {
              pvVar14 = *(void **)(pbVar15 + -8);
              nu::VirtualFreeHook(pvVar14);
              FUN_710392eb40((ulong)pvVar14);
            }
            pbVar15 = pbVar17;
          } while (pbVar16 != pbVar17);
          puVar3[-2] = pbVar16;
          pbVar16 = (byte *)puVar3[-3];
        }
        nu::VirtualFreeHook(pbVar16);
        FUN_710392eb40((ulong)pbVar16);
      }
      puVar2 = local_590;
      puVar5 = puVar3 + -8;
      if ((*(byte *)(puVar3 + -6) & 1) != 0) {
        pvVar14 = (void *)puVar3[-4];
        nu::VirtualFreeHook(pvVar14);
        FUN_710392eb40((ulong)pvVar14);
        puVar2 = local_590;
      }
    }
    local_588 = puVar10;
    nu::VirtualFreeHook(puVar2);
    FUN_710392eb40((ulong)puVar2);
    plVar13 = local_3e8;
  }
  FUN_710388a9a0((long)plVar13,&local_540);
  if (local_80 < local_78) {
    local_80[1] = 0;
    local_80[2] = 0;
    local_80[3] = 0;
    *local_80 = &PTR_FUN_7105231930;
    if ((local_3e0 != (long *)0x0) && (*local_3e0 == local_3d8)) {
      local_3e8 = (long *)0x0;
      local_3e0 = (long *)0x0;
      local_3d8 = 0;
      local_80[1] = plVar13;
      if (plVar13 == (long *)0x0) {
        uVar8 = 0;
        local_80[2] = 0;
      }
      else {
        puVar10 = (undefined8 *)plVar13[1];
        local_80[2] = puVar10;
        uVar8 = *puVar10;
      }
      local_80[3] = uVar8;
    }
    local_80 = local_80 + 4;
  }
  else {
    FUN_7103662c30(&local_88,(long)&local_3f0,uVar8,ppppbVar9,param_5,param_6,param_7,param_8);
  }
  iVar6 = FUN_710392e1f0(&local_578,0x10,(long ****)0x698,ppppbVar9,param_5,param_6,param_7,param_8)
  ;
  if ((iVar6 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_5d0 = (long *)0x698;
    uVar7 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_5d0);
    if ((uVar7 & 1) != 0) {
      FUN_710392e1f0(&local_578,0x10,(long ****)0x698,ppppbVar9,param_5,param_6,param_7,param_8);
    }
  }
  nu::VirtualAllocHook(0x698,0x10,(void *)CONCAT44(uStack_574,CONCAT22(uStack_576,local_578)));
  puVar10 = (undefined8 *)CONCAT44(uStack_574,CONCAT22(uStack_576,local_578));
  FUN_71037c3a70(puVar10);
  *puVar10 = &PTR_FUN_710526f908;
  puVar10[9] = 0;
  puVar10[8] = puVar10 + 9;
  puVar10[0x18] = puVar10 + 0x1b;
  puVar10[0x19] = 0;
  puVar10[0x1a] = 0x10;
  puVar10[0x6d] = 0x10;
  puVar10[0xc6] = &PTR_FUN_7105231d18;
  puVar10[0xca] = &PTR_FUN_7105231d18;
  puVar10[10] = 0;
  puVar10[0xb] = 0;
  *(undefined4 *)(puVar10 + 0x17) = 0;
  puVar10[0xc] = 0;
  puVar10[0x6b] = puVar10 + 0x6e;
  puVar10[0x6c] = 0;
  puVar10[0xc2] = 0;
  puVar10[0xc1] = 0;
  puVar10[0xc0] = 0;
  puVar10[0xbf] = &PTR_FUN_7105232e00;
  *(undefined4 *)(puVar10 + 0xbe) = 0;
  puVar10[0xc5] = 0;
  puVar10[0xc4] = 0;
  puVar10[0xc3] = 0;
  puVar10[0xc9] = 0;
  puVar10[200] = 0;
  puVar10[199] = 0;
  puVar10[0xcd] = 0;
  puVar10[0xcc] = 0;
  puVar10[0xcb] = 0;
  puVar10[0xd1] = 0;
  puVar10[0xd0] = 0;
  puVar10[0xcf] = 0;
  puVar10[0xce] = &PTR_FUN_7105232dc0;
  *(undefined2 *)(puVar10 + 0xd2) = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  puVar10[0x15] = 0;
  puVar10[0x16] = 0;
  puVar10[0x13] = 0;
  puVar10[0x14] = 0;
  puVar10[0x11] = 0;
  puVar10[0x12] = 0;
  puVar10[0xf] = 0;
  puVar10[0x10] = 0;
  puVar10[0xd] = 0;
  puVar10[0xe] = 0;
  FUN_7103886f60((long)puVar10,&local_3d0,1,1,param_5,param_6,param_7,param_8);
  *param_1 = &PTR_FUN_71052338e8;
  param_1[1] = puVar10;
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
    uVar8 = 0;
  }
  else {
    puVar10 = (undefined8 *)puVar10[1];
    uVar8 = *puVar10;
  }
  param_1[2] = puVar10;
  param_1[3] = uVar8;
  local_418 = &PTR_FUN_7105231970;
  *param_1 = &PTR_FUN_7105232d08;
  if (((local_408 != (long *)0x0) && (*local_408 == local_400)) && (local_410 != (long *)0x0)) {
    (**(code **)(*local_410 + 8))();
  }
  puVar10 = local_4f8;
  if (local_4f8 != (undefined8 *)0x0) {
    local_4f0 = local_4f8;
    nu::VirtualFreeHook(local_4f8);
    FUN_710392eb40((ulong)puVar10);
  }
  pvVar14 = local_510;
  if ((local_520 & 1) != 0) {
    nu::VirtualFreeHook(local_510);
    FUN_710392eb40((ulong)pvVar14);
  }
  puVar4 = local_530;
  if (((ulong)local_540 & 1) != 0) {
    nu::VirtualFreeHook(local_530);
    FUN_710392eb40((ulong)puVar4);
  }
  local_3f0 = &PTR_FUN_7105231930;
  if (((local_3e0 != (long *)0x0) && (*local_3e0 == local_3d8)) && (local_3e8 != (long *)0x0)) {
    (**(code **)(*local_3e8 + 8))();
  }
  FUN_71035e9280((byte *)&local_3d0);
  return;
}

