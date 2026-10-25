// addr:      710359f860
// offset:    0x359f860
// name:      FUN_710359f860
// mangled:   
// signature: ulong __cdecl FUN_710359f860(ulong param_1, undefined4 param_2, undefined4 param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 * param_7, ulong param_8)


ulong FUN_710359f860(ulong param_1,undefined4 param_2,undefined4 param_3,byte ****param_4,
                    long ****param_5,ulong param_6,undefined8 *param_7,ulong param_8)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  void *pvVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  byte ****ppppbVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  byte bVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  long local_380;
  undefined **local_370;
  long *local_368;
  long *local_360;
  long local_358;
  undefined **local_350;
  long *local_348;
  long *local_340;
  long local_338;
  int aiStack_330 [2];
  undefined **local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  ulong local_2f0;
  undefined8 local_2e8;
  void *local_2e0;
  int aiStack_2d8 [2];
  int local_2d0 [2];
  undefined **local_2c8;
  undefined4 local_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined1 *local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a4;
  undefined8 local_29c;
  undefined8 local_294;
  undefined8 local_28c;
  undefined8 local_284;
  undefined8 local_27c;
  undefined8 local_274;
  undefined8 local_26c;
  undefined8 local_264;
  undefined2 local_25c;
  undefined1 local_25a;
  undefined4 local_258;
  undefined1 *local_250;
  undefined8 uStack_248;
  long local_240;
  undefined1 auStack_238 [384];
  char local_b8 [65];
  byte local_77;
  long *local_70 [2];
  
  local_2c8 = &PTR_FUN_7105242128;
  local_26c = 0;
  local_274 = 0;
  local_27c = 0;
  local_284 = 0;
  local_28c = 0;
  uVar15 = 0;
  local_294 = 0;
  local_29c = 0;
  local_2a4 = 0;
  local_264 = 1;
  local_25c = 0x100;
  local_250 = auStack_238;
  local_25a = 1;
  local_2a8 = 1;
  pcVar12 = "lib::Renderer::create_mii_mask_texture (Front)";
  local_258 = 0;
  local_b8[0] = '\0';
  uStack_248 = 0;
  local_240 = 0x10;
  local_2d0[0] = 2;
  local_2c0 = 0x400;
  local_2b0 = &DAT_100000001;
  do {
    local_77 = (char)uVar15 + 1;
    local_b8[uVar15] = *pcVar12;
    uVar15 = (ulong)local_77;
    pcVar13 = pcVar12 + 1;
    pcVar12 = pcVar12 + 2;
    local_77 = local_77 + 1;
    local_b8[uVar15] = *pcVar13;
    uVar15 = (ulong)local_77;
  } while (pcVar12 != "");
  local_b8[uVar15] = '\0';
  ppppbVar11 = param_4;
  uVar15 = param_6;
  local_2b8 = param_2;
  uStack_2b4 = param_3;
  iVar7 = FUN_710392e1f0(local_70,0x10,(long ****)0xf20,param_4,param_5,param_6,param_7,param_8);
  if ((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_328 = (undefined **)0xf20;
    uVar8 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_328);
    if ((uVar8 & 1) != 0) {
      FUN_710392e1f0(local_70,0x10,(long ****)0xf20,ppppbVar11,param_5,uVar15,param_7,param_8);
    }
  }
  plVar21 = local_70[0];
  nu::VirtualAllocHook(0xf20,0x10,local_70[0]);
  plVar20 = local_70[0];
  FUN_71037c3a70(local_70[0]);
  *(undefined4 *)(plVar20 + 2) = 0;
  *(undefined1 *)((long)plVar20 + 0x14) = 0;
  plVar20[0x1e3] = 0;
  *plVar20 = (long)&PTR_thunk_FUN_71037d4f00_71052431f8;
  if (plVar20 == (long *)0x0) {
    plVar24 = (long *)0x0;
    lVar19 = 0;
  }
  else {
    plVar24 = (long *)plVar20[1];
    lVar19 = *plVar24;
  }
  FUN_71037dbe00(aiStack_2d8,(long)plVar20,local_2d0,plVar21,ppppbVar11,param_5,uVar15,
                 (ulong)param_7,param_8);
  local_328 = (undefined **)CONCAT44(local_328._4_4_,0xffff);
  local_320 = 0;
  local_2e8 = 0;
  local_2e0 = (void *)0x0;
  local_2f8 = 0;
  local_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_318 = 0;
  uStack_310 = 0;
  (**(code **)(*plVar20 + 0x98))(plVar20,&local_328);
  pvVar6 = local_2e0;
  if ((local_2f0 & 1) != 0) {
    nu::VirtualFreeHook(local_2e0);
    FUN_710392eb40((ulong)pvVar6);
  }
  pcVar12 = "lib::Renderer::create_mii_mask_texture (Back)";
  bVar17 = 0;
  while( true ) {
    local_77 = bVar17 + 1;
    pcVar13 = pcVar12 + 1;
    local_b8[bVar17] = *pcVar12;
    uVar8 = (ulong)local_77;
    if (pcVar13 == "") break;
    pcVar12 = pcVar12 + 2;
    local_77 = local_77 + 1;
    local_b8[uVar8] = *pcVar13;
    bVar17 = local_77;
  }
  local_b8[uVar8] = '\0';
  iVar7 = FUN_710392e1f0(local_70,0x10,(long ****)0xf20,ppppbVar11,param_5,uVar15,param_7,param_8);
  if ((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_328 = (undefined **)0xf20;
    uVar8 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_328);
    if ((uVar8 & 1) != 0) {
      FUN_710392e1f0(local_70,0x10,(long ****)0xf20,ppppbVar11,param_5,uVar15,param_7,param_8);
    }
  }
  plVar10 = local_70[0];
  nu::VirtualAllocHook(0xf20,0x10,local_70[0]);
  plVar21 = local_70[0];
  FUN_71037c3a70(local_70[0]);
  *(undefined4 *)(plVar21 + 2) = 0;
  *(undefined1 *)((long)plVar21 + 0x14) = 0;
  plVar21[0x1e3] = 0;
  *plVar21 = (long)&PTR_thunk_FUN_71037d4f00_71052431f8;
  if (plVar21 == (long *)0x0) {
    plVar23 = (long *)0x0;
    local_380 = 0;
  }
  else {
    plVar23 = (long *)plVar21[1];
    local_380 = *plVar23;
  }
  FUN_71037dbe00(aiStack_330,(long)plVar21,local_2d0,plVar10,ppppbVar11,param_5,uVar15,
                 (ulong)param_7,param_8);
  local_328 = (undefined **)CONCAT44(local_328._4_4_,0xffff);
  local_320 = 0;
  local_2e8 = 0;
  local_2e0 = (void *)0x0;
  local_2f8 = 0;
  local_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_318 = 0;
  uStack_310 = 0;
  (**(code **)(*plVar21 + 0x98))(plVar21,&local_328);
  pvVar6 = local_2e0;
  if ((local_2f0 & 1) != 0) {
    nu::VirtualFreeHook(local_2e0);
    FUN_710392eb40((ulong)pvVar6);
  }
  local_340 = (long *)0x0;
  local_338 = 0;
  local_350 = &PTR_FUN_71052318d0;
  local_348 = (long *)0x0;
  if ((plVar24 != (long *)0x0) && (*plVar24 == lVar19)) {
    local_348 = plVar20;
    if (plVar20 == (long *)0x0) {
      local_340 = (long *)0x0;
      local_338 = 0;
    }
    else {
      local_340 = (long *)plVar20[1];
      local_338 = *local_340;
    }
    plVar20 = (long *)0x0;
    plVar24 = (long *)0x0;
    lVar19 = 0;
  }
  uVar8 = FUN_710363dde0(DAT_7105338f68,(long)&local_350,
                         "lib::Renderer::create_mii_mask_texture (Front)",ppppbVar11,param_5,uVar15,
                         param_7,param_8);
  local_350 = &PTR_FUN_71052318d0;
  if (((local_340 != (long *)0x0) && (*local_340 == local_338)) && (local_348 != (long *)0x0)) {
    (**(code **)(*local_348 + 8))();
  }
  local_360 = (long *)0x0;
  local_358 = 0;
  local_370 = &PTR_FUN_71052318d0;
  local_368 = (long *)0x0;
  if ((plVar23 != (long *)0x0) && (*plVar23 == local_380)) {
    local_360 = (long *)plVar21[1];
    local_368 = plVar21;
    local_358 = *local_360;
    plVar23 = (long *)0x0;
    plVar21 = (long *)0x0;
    local_380 = 0;
  }
  uVar9 = FUN_710363dde0(DAT_7105338f68,(long)&local_370,
                         "lib::Renderer::create_mii_mask_texture (Back)",ppppbVar11,param_5,uVar15,
                         param_7,param_8);
  local_370 = &PTR_FUN_71052318d0;
  if (((local_360 != (long *)0x0) && (*local_360 == local_358)) && (local_368 != (long *)0x0)) {
    (**(code **)(*local_368 + 8))();
  }
  lVar22 = *DAT_710593b6a0;
  std::mutex::lock();
  lVar16 = *(long *)(lVar22 + 0x24d0);
  uVar18 = (*(long *)(lVar22 + 0x24d8) - lVar16 >> 3) * 0x4ec4ec4ec4ec4ec5;
  uVar14 = param_1 & 0xffff;
  if (uVar18 < uVar14 || uVar18 - uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar16 = lVar16 + uVar14 * 0x68;
  plVar10 = *(long **)(lVar16 + 0x58);
  plVar2 = *(long **)(lVar16 + 0x60);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  std::mutex::unlock();
  FUN_710357c970(&local_328,*plVar10,(long ****)((ulong)param_4 & 0xffffffff),
                 (byte ****)(uVar8 & 0xffffffff),uVar9 & 0xffffffff,uVar15,param_7,param_8);
  uVar5 = local_320;
  if (param_6 != 0) {
    local_320 = 0;
    local_70[0] = *(long **)(param_6 + 8);
    *(undefined8 *)(param_6 + 8) = uVar5;
    std::future<void>::~future((future<void> *)local_70);
  }
  local_328 = &PTR_FUN_7105230ae0;
  std::future<void>::~future((future<void> *)&local_320);
  if (plVar2 != (long *)0x0) {
    plVar10 = plVar2 + 1;
    do {
      lVar16 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (((plVar23 != (long *)0x0) && (plVar21 != (long *)0x0)) && (*plVar23 == local_380)) {
    (**(code **)(*plVar21 + 8))(plVar21);
  }
  if (((plVar24 != (long *)0x0) && (plVar20 != (long *)0x0)) && (*plVar24 == lVar19)) {
    (**(code **)(*plVar20 + 8))(plVar20);
  }
  if (((local_240 != 0) && (local_250 != auStack_238)) && (local_250 != (undefined1 *)0x0)) {
    FUN_710392eb40((ulong)local_250);
  }
  return uVar8 & 0xffffffff | uVar9 << 0x20;
}

