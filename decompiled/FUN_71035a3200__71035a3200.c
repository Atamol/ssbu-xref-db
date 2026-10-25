// addr:      71035a3200
// offset:    0x35a3200
// name:      FUN_71035a3200
// mangled:   
// signature: undefined4 __cdecl FUN_71035a3200(undefined4 param_1, undefined4 param_2, undefined4 param_3, long * param_4, long param_5, int param_6, byte * * * * param_7, byte * * * * param_8, long * * * * param_9, long * param_10, undefined8 param_11)


undefined4
FUN_71035a3200(undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4,long param_5,
              int param_6,byte ****param_7,byte ****param_8,long ****param_9,long *param_10,
              undefined8 param_11)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  byte ****ppppbVar9;
  byte ****ppppbVar10;
  long ****pppplVar11;
  long *plVar12;
  byte bVar13;
  code *pcVar14;
  long lVar15;
  char *pcVar16;
  char *pcVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long alStack_3b0 [4];
  long *local_390;
  undefined **local_378;
  long *local_370;
  long *local_368;
  long local_360;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  ulong local_320;
  undefined8 local_318;
  void *local_310;
  undefined1 auStack_308 [8];
  undefined8 local_300;
  undefined **local_2f8;
  undefined4 local_2f0;
  int local_2e8;
  int iStack_2e4;
  undefined1 *local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d4;
  undefined8 local_2cc;
  undefined8 local_2c4;
  undefined8 local_2bc;
  undefined8 local_2b4;
  undefined8 local_2ac;
  undefined8 local_2a4;
  undefined8 local_29c;
  undefined8 local_294;
  undefined2 local_28c;
  undefined1 local_28a;
  undefined4 local_288;
  undefined1 *local_280;
  undefined8 uStack_278;
  long local_270;
  undefined1 auStack_268 [384];
  char local_e8 [65];
  byte local_a7;
  long *local_a0;
  long lStack_98;
  
  if (param_5 != 0) {
    lVar19 = param_5 << 4;
    ppppbVar9 = param_7;
    ppppbVar10 = param_8;
    pppplVar11 = param_9;
    plVar12 = param_10;
    local_a0 = param_4;
    lStack_98 = param_5;
    do {
      iVar4 = (**(code **)(*(long *)*param_4 + 0x20))();
      if (iVar4 == 1) {
        iVar4 = 0x140;
        if (param_6 != 0) {
          iVar4 = (uint)(param_6 == 1) << 10;
        }
        iVar5 = FUN_710392e1f0(&local_358,0x10,(long ****)0xf20,ppppbVar9,(long ****)ppppbVar10,
                               pppplVar11,plVar12,param_11);
        if ((iVar5 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
          local_300 = 0xf20;
          uVar7 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_300);
          if ((uVar7 & 1) != 0) {
            FUN_710392e1f0(&local_358,0x10,(long ****)0xf20,ppppbVar9,(long ****)ppppbVar10,
                           pppplVar11,plVar12,param_11);
          }
        }
        nu::VirtualAllocHook(0xf20,0x10,(void *)CONCAT44(uStack_354,local_358));
        plVar8 = (long *)CONCAT44(uStack_354,local_358);
        FUN_71037c3a70(plVar8);
        *(undefined4 *)(plVar8 + 2) = 0;
        *(undefined1 *)((long)plVar8 + 0x14) = 0;
        plVar8[0x1e3] = 0;
        *plVar8 = (long)&PTR_thunk_FUN_71037d4f00_71052431f8;
        if (plVar8 == (long *)0x0) {
          plVar20 = (long *)0x0;
          lVar19 = 0;
        }
        else {
          plVar20 = (long *)plVar8[1];
          lVar19 = *plVar20;
        }
        local_2f8 = &PTR_FUN_7105242128;
        local_29c = 0;
        local_2a4 = 0;
        local_2ac = 0;
        local_2b4 = 0;
        local_2bc = 0;
        local_2c4 = 0;
        local_2cc = 0;
        local_2d4 = 0;
        local_294 = 1;
        local_28c = 0x100;
        local_280 = auStack_268;
        local_28a = 1;
        local_2d8 = 1;
        pcVar16 = "lib::Renderer::order_draw_models_to_local_texture";
        local_288 = 0;
        local_e8[0] = '\0';
        uStack_278 = 0;
        local_270 = 0x10;
        local_300 = CONCAT44(local_300._4_4_,2);
        local_2f0 = 0x400;
        local_2e0 = &DAT_100000001;
        bVar13 = 0;
        while( true ) {
          local_a7 = bVar13 + 1;
          pcVar17 = pcVar16 + 1;
          local_e8[bVar13] = *pcVar16;
          uVar7 = (ulong)local_a7;
          if (pcVar17 == "") break;
          pcVar16 = pcVar16 + 2;
          local_a7 = local_a7 + 1;
          local_e8[uVar7] = *pcVar17;
          bVar13 = local_a7;
        }
        local_e8[uVar7] = '\0';
        local_2e8 = iVar4;
        iStack_2e4 = iVar4;
        (**(code **)(*plVar8 + 0x10))(auStack_308,plVar8,&local_300);
        local_358 = 0xffff;
        local_350 = 0;
        local_318 = 0;
        local_310 = (void *)0x0;
        local_328 = 0;
        local_320 = 0;
        local_338 = 0;
        uStack_330 = 0;
        local_348 = 0;
        uStack_340 = 0;
        (**(code **)(*plVar8 + 0x98))(plVar8,&local_358);
        pvVar3 = local_310;
        if ((local_320 & 1) != 0) {
          nu::VirtualFreeHook(local_310);
          FUN_710392eb40((ulong)pvVar3);
        }
        local_368 = (long *)0x0;
        local_360 = 0;
        local_378 = &PTR_FUN_71052318d0;
        local_370 = (long *)0x0;
        plVar18 = plVar8;
        if ((plVar20 != (long *)0x0) && (*plVar20 == lVar19)) {
          local_368 = (long *)plVar8[1];
          local_360 = *local_368;
          plVar20 = (long *)0x0;
          lVar19 = 0;
          plVar18 = (long *)0x0;
          local_370 = plVar8;
        }
        uVar7 = FUN_710363dde0(DAT_7105338f68,(long)&local_378,
                               "lib::Renderer::order_draw_models_to_local_texture",ppppbVar9,
                               (long ****)ppppbVar10,pppplVar11,plVar12,param_11);
        uVar6 = (undefined4)uVar7;
        local_378 = &PTR_FUN_71052318d0;
        if (((local_368 != (long *)0x0) && (*local_368 == local_360)) && (local_370 != (long *)0x0))
        {
          (**(code **)(*local_370 + 8))();
        }
        lVar15 = *param_4;
        plVar12 = (long *)param_4[1];
        if (plVar12 != (long *)0x0) {
          plVar8 = plVar12 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *plVar8 = *plVar8 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        plVar21 = *(long **)(*(long *)**(undefined8 **)(lVar15 + 8) + 0x9768);
        plVar8 = (long *)param_10[4];
        if (plVar8 == (long *)0x0) {
          local_390 = (long *)0x0;
        }
        else if (param_10 == plVar8) {
          local_390 = alStack_3b0;
          (**(code **)(*plVar8 + 0x18))(plVar8,alStack_3b0);
        }
        else {
          local_390 = (long *)(**(code **)(*plVar8 + 0x10))();
        }
        FUN_710357cba0(param_1,param_2,param_3,*plVar21,&local_a0,(long ****)param_7,param_8,param_9
                       ,uVar7 & 0xffffffff,alStack_3b0,param_11);
        if (alStack_3b0 == local_390) {
          pcVar14 = *(code **)(*local_390 + 0x20);
        }
        else {
          if (local_390 == (long *)0x0) goto LAB_71035a3610;
          pcVar14 = *(code **)(*local_390 + 0x28);
        }
        (*pcVar14)();
LAB_71035a3610:
        if (plVar12 != (long *)0x0) {
          plVar8 = plVar12 + 1;
          do {
            lVar15 = *plVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *plVar8 = lVar15 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (((local_270 != 0) && (local_280 != auStack_268)) && (local_280 != (undefined1 *)0x0)) {
          FUN_710392eb40((ulong)local_280);
        }
        if (plVar20 == (long *)0x0) {
          return uVar6;
        }
        if (plVar18 == (long *)0x0) {
          return uVar6;
        }
        if (*plVar20 != lVar19) {
          return uVar6;
        }
        (**(code **)(*plVar18 + 8))(plVar18);
        return uVar6;
      }
      param_4 = param_4 + 2;
      lVar19 = lVar19 + -0x10;
    } while (lVar19 != 0);
  }
  return 0;
}

