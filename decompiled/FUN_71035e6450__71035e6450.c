// addr:      71035e6450
// offset:    0x35e6450
// name:      FUN_71035e6450
// mangled:   
// signature: undefined __cdecl FUN_71035e6450(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x0071035e7758) */
/* WARNING: Removing unreachable block (ram,0x0071035e77bc) */
/* WARNING: Removing unreachable block (ram,0x0071035e7764) */
/* WARNING: Removing unreachable block (ram,0x0071035e776c) */
/* WARNING: Removing unreachable block (ram,0x0071035e7774) */
/* WARNING: Removing unreachable block (ram,0x0071035e77c0) */
/* WARNING: Removing unreachable block (ram,0x0071035e77c8) */
/* WARNING: Removing unreachable block (ram,0x0071035e77e0) */
/* WARNING: Removing unreachable block (ram,0x0071035e77ec) */
/* WARNING: Removing unreachable block (ram,0x0071035e780c) */
/* WARNING: Removing unreachable block (ram,0x0071035e7820) */
/* WARNING: Removing unreachable block (ram,0x0071035e7824) */
/* WARNING: Removing unreachable block (ram,0x0071035e783c) */
/* WARNING: Removing unreachable block (ram,0x0071035e7844) */
/* WARNING: Removing unreachable block (ram,0x0071035e7778) */
/* WARNING: Removing unreachable block (ram,0x0071035e6cc8) */
/* WARNING: Removing unreachable block (ram,0x0071035e6b08) */
/* WARNING: Removing unreachable block (ram,0x0071035e6af8) */
/* WARNING: Removing unreachable block (ram,0x0071035e6de0) */
/* WARNING: Removing unreachable block (ram,0x0071035e6540) */
/* WARNING: Removing unreachable block (ram,0x0071035e6dd0) */
/* WARNING: Removing unreachable block (ram,0x0071035e6cd8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_71035e6450(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  void *pvVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long ***ppplVar14;
  long ***ppplVar15;
  long *plVar16;
  long **pplVar17;
  long lVar18;
  long ****pppplVar19;
  ulong uVar20;
  long ****pppplVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long ****pppplVar24;
  uint *puVar25;
  ulong uVar26;
  long ****pppplVar27;
  uint *puVar28;
  long ****pppplVar29;
  long ****pppplVar30;
  uint uVar31;
  long ***ppplVar32;
  long local_4c8;
  undefined1 auStack_4a8 [8];
  undefined8 local_4a0;
  undefined8 local_498;
  byte local_490;
  undefined1 uStack_48f;
  undefined2 uStack_48e;
  undefined4 uStack_48c;
  int iStack_488;
  undefined2 uStack_484;
  undefined1 uStack_482;
  undefined1 uStack_481;
  undefined4 uStack_480;
  uint local_47c;
  long ****local_478;
  long ****local_470;
  long ****local_468;
  undefined1 local_44b;
  ulong local_448;
  undefined8 local_440;
  void *local_438;
  ulong local_430;
  ulong local_428;
  undefined8 local_420;
  void *local_418;
  undefined8 local_410;
  undefined8 local_408;
  long ****local_400;
  long ****local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined **local_3d8;
  long local_3d0;
  undefined8 *local_3c8;
  undefined8 *local_3c0;
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
  undefined8 uStack_360;
  undefined4 local_358;
  undefined **local_350;
  long local_348;
  undefined8 *local_340;
  undefined8 local_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined1 local_328;
  undefined4 local_324;
  undefined **local_320;
  long *local_318;
  long *local_310;
  long local_308;
  undefined1 local_300;
  undefined4 local_2fc;
  uint local_128 [2];
  long ***local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [5];
  undefined4 uStack_db;
  undefined4 uStack_d7;
  undefined3 uStack_d3;
  long ***local_d0;
  long **local_c8;
  undefined8 local_c0;
  long ****local_b8;
  long ****local_b0;
  long ****local_a8;
  long ****local_a0;
  long ****local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  long ****local_78;
  long ***local_70 [2];
  
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  local_90 = (undefined8 *)0x0;
  lVar11 = *(long *)(param_1 + 8);
  lVar18 = *(long *)(lVar11 + 0x30) - *(long *)(lVar11 + 0x28);
  uVar3 = uStack_48c;
  if (lVar18 == 0) {
LAB_71035e64ac:
    uStack_48c = uVar3;
    uVar5 = uStack_48c._2_2_;
    uVar31 = 0;
  }
  else {
    FUN_71035e7c10((long *)&local_90,lVar18 >> 5,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar3 = uStack_48c;
    lVar11 = *(long *)(param_1 + 8);
    if (local_88 == local_90) goto LAB_71035e64ac;
    iVar8 = *(int *)(lVar11 + 0x360);
    uVar26 = 0;
    uVar31 = 0;
    uVar5 = uStack_48c._2_2_;
    do {
      uStack_48c._2_2_ = uVar5;
      uStack_48c = uVar3;
      uVar5 = uStack_48c._2_2_;
      local_430 = local_430 & 0xffffffff00000000;
      local_448 = 0;
      local_440 = 0;
      local_438 = (void *)0x0;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_408._0_4_ = 0;
      local_418 = (void *)0x0;
      local_410 = 0;
      local_428 = 0;
      local_3e8 = 0;
      local_400 = (void *)0x0;
      local_3f8 = (long ****)0x0;
      local_3f0 = 0;
      uStack_3e4 = 2;
      local_3e0 = 0;
      local_3d0 = 0;
      local_3c8 = (undefined8 *)0x0;
      local_3c0 = (undefined8 *)0x0;
      local_3d8 = &PTR_FUN_7105231690;
      local_348 = 0;
      local_340 = (undefined8 *)0x0;
      local_338 = 0;
      local_358 = 0;
      local_368 = 0;
      uStack_360 = 0;
      local_378 = 0;
      local_370 = 0;
      local_388 = 0;
      local_380 = 0;
      local_398 = 0;
      local_390 = 0;
      local_3a8 = 0;
      local_3a0 = 0;
      local_3b8 = 0;
      local_3b0 = 0;
      local_350 = &PTR_FUN_7105231a30;
      local_324 = 0;
      local_318 = (long *)0x0;
      local_310 = (long *)0x0;
      local_308 = 0;
      local_328 = 0;
      uStack_32c = 0;
      local_330 = 0;
      local_320 = &PTR_FUN_7105231970;
      local_300 = 1;
      lVar18 = *(long *)(*(long *)(param_1 + 8) + 0x28);
      if ((ulong)(*(long *)(*(long *)(param_1 + 8) + 0x30) - lVar18 >> 5) <= uVar26)
      goto LAB_71035e7bf4;
      lVar18 = lVar18 + uVar26 * 0x20;
      if ((*(long **)(lVar18 + 0x10) == (long *)0x0) ||
         (**(long **)(lVar18 + 0x10) != *(long *)(lVar18 + 0x18))) {
        lVar18 = 0;
      }
      else {
        lVar18 = *(long *)(lVar18 + 8);
      }
      uVar3 = uStack_48c;
      if (&local_448 != (ulong *)(lVar18 + 0x10)) {
        param_3 = *(long *****)(lVar18 + 0x18);
        pvVar1 = *(void **)(lVar18 + 0x20);
        if ((*(byte *)(lVar18 + 0x10) & 1) == 0) {
          pvVar1 = (void *)(lVar18 + 0x11);
          param_3 = (long ****)(ulong)(*(byte *)(lVar18 + 0x10) >> 1);
        }
        uStack_48c._2_2_ = uVar5;
        FUN_71002c51f0(&local_448,pvVar1,(ulong)param_3,param_4,param_5,param_6,param_7,param_8);
        uVar3 = uStack_48c;
        uVar5 = uStack_48c._2_2_;
      }
      uStack_48c._2_2_ = uVar5;
      uStack_48c = uVar3;
      uVar5 = uStack_48c._2_2_;
      local_430 = CONCAT44(local_430._4_4_,*(undefined4 *)(lVar18 + 0x28));
      if (&local_428 != (ulong *)(lVar18 + 0x30)) {
        param_3 = *(long *****)(lVar18 + 0x38);
        pvVar1 = *(void **)(lVar18 + 0x40);
        if ((*(byte *)(lVar18 + 0x30) & 1) == 0) {
          pvVar1 = (void *)(lVar18 + 0x31);
          param_3 = (long ****)(ulong)(*(byte *)(lVar18 + 0x30) >> 1);
        }
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        FUN_71002c51f0(&local_428,pvVar1,(ulong)param_3,param_4,param_5,param_6,param_7,param_8);
        uVar5 = uStack_48c._2_2_;
      }
      uStack_48c._2_2_ = uVar5;
      uVar5 = uStack_48c._2_2_;
      iVar7 = *(int *)(lVar18 + 0x4c);
      local_410 = *(undefined8 *)(lVar18 + 0x4c);
      local_408 = CONCAT44(local_408._4_4_,iVar8 + 1);
      local_3e8 = *(undefined4 *)(lVar18 + 0x58);
      uStack_3e4 = *(undefined4 *)(lVar18 + 0x88);
      local_3e0 = *(undefined4 *)(lVar18 + 0x8c);
      if ((*(long **)(lVar18 + 0x108) == (long *)0x0) ||
         (**(long **)(lVar18 + 0x108) != *(long *)(lVar18 + 0x110))) {
        local_3d0 = 0;
LAB_71035e671c:
        local_3c0 = (undefined8 *)0x0;
        local_3c8 = (undefined8 *)0x0;
      }
      else {
        local_3d0 = *(long *)(lVar18 + 0x100);
        if (local_3d0 == 0) goto LAB_71035e671c;
        local_3c8 = *(undefined8 **)(local_3d0 + 8);
        local_3c0 = (undefined8 *)*local_3c8;
      }
      local_3b8 = *(undefined8 *)(lVar18 + 0x90);
      local_3b0 = *(undefined8 *)(lVar18 + 0x98);
      local_3a8 = *(undefined8 *)(lVar18 + 0xa0);
      local_3a0 = *(undefined8 *)(lVar18 + 0xa8);
      local_398 = *(undefined8 *)(lVar18 + 0xb0);
      local_390 = *(undefined8 *)(lVar18 + 0xb8);
      local_388 = *(undefined8 *)(lVar18 + 0xc0);
      local_380 = *(undefined8 *)(lVar18 + 200);
      local_378 = *(undefined8 *)(lVar18 + 0xd0);
      uStack_360 = *(undefined8 *)(lVar18 + 0xe8);
      local_370 = *(undefined8 *)(lVar18 + 0xd8);
      local_368 = *(undefined8 *)(lVar18 + 0xe0);
      local_358 = *(undefined4 *)(lVar18 + 0xf0);
      local_2fc = *(undefined4 *)(lVar18 + 0x19c);
      local_330 = *(undefined4 *)(lVar18 + 0x68);
      uStack_32c = *(undefined4 *)(lVar18 + 0x5c);
      local_328 = 0;
      local_324 = *(undefined4 *)(lVar18 + 100);
      plVar12 = *(long **)(lVar18 + 0x180);
      if (plVar12 == (long *)0x0) {
        plVar16 = (long *)0x0;
        lVar11 = 0;
      }
      else {
        plVar16 = (long *)plVar12[1];
        lVar11 = *plVar16;
      }
      if (((local_310 != (long *)0x0) && (local_318 != (long *)0x0)) && (*local_310 == local_308)) {
        lVar13 = *local_318;
        local_318 = plVar12;
        local_310 = plVar16;
        local_308 = lVar11;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        (**(code **)(lVar13 + 8))();
        uVar5 = uStack_48c._2_2_;
        plVar12 = local_318;
        plVar16 = local_310;
        lVar11 = local_308;
      }
      uStack_48c._2_2_ = uVar5;
      local_308 = lVar11;
      local_310 = plVar16;
      local_318 = plVar12;
      uVar5 = uStack_48c._2_2_;
      local_300 = *(undefined1 *)(lVar18 + 0x198);
      local_a0 = (long ****)0x0;
      local_98 = (long ****)0x0;
      local_a8 = (long ****)0x0;
      uVar3 = uStack_48c;
      uStack_48c._2_2_ = uVar5;
      FUN_71035e8110(&local_c0,(long *)(*(long *)(lVar18 + 0x120) + 0x110),param_3,param_4,param_5,
                     param_6,param_7,param_8);
      uStack_48e = 0;
      iStack_488 = 0;
      uStack_484 = 0;
      uStack_481 = 0;
      local_490 = 0x1a;
      uStack_48f = 0;
      local_470 = (long ****)0x0;
      local_468 = (long ****)0x0;
      uStack_480 = 0;
      local_47c = 0;
      local_478 = (long ****)0x0;
      local_4a0._0_4_ = 0;
      local_4a0._4_4_ = 0;
      local_498._0_4_ = 0;
      local_498._4_4_ = 0;
      uStack_48c._2_2_ = 0x6c6f;
      uStack_482 = 0;
      uStack_d7 = 0x7465735f;
      local_e0 = (undefined1  [5])0x635f6b6e69;
      uStack_db = 0x726f6c6f;
      uVar5 = uStack_48c._2_2_;
      uStack_48c = 0;
      uVar3 = uStack_48c;
      uStack_48c._2_2_ = uVar5;
      iVar6 = FUN_710392e1f0(&local_78,0x10,(long ****)&SUB_00000018,param_4,param_5,param_6,param_7
                             ,param_8);
      uVar3 = uStack_48c;
      if ((iVar6 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
        local_70[0] = (long ***)&SUB_00000018;
        uVar5 = uStack_48c._2_2_;
        uStack_48c = uVar3;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        uVar10 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_70);
        uVar3 = uStack_48c;
        if ((uVar10 & 1) != 0) {
          uVar5 = uStack_48c._2_2_;
          uStack_48c = uVar3;
          uVar3 = uStack_48c;
          uStack_48c._2_2_ = uVar5;
          FUN_710392e1f0(&local_78,0x10,(long ****)&SUB_00000018,param_4,param_5,param_6,param_7,
                         param_8);
          uVar3 = uStack_48c;
        }
      }
      uStack_48c = uVar3;
      uVar5 = uStack_48c._2_2_;
      pppplVar29 = local_78;
      uVar3 = uStack_48c;
      uStack_48c._2_2_ = uVar5;
      nu::VirtualAllocHook(0x18,0x10,local_78);
      pppplVar30 = local_478;
      uStack_48c._2_2_ = SUB42(uStack_48c,2);
      *(byte *)local_78 = 0x1a;
      *(ulong *)((long)local_78 + 6) = CONCAT44(uStack_d7,uStack_db);
      *(ulong *)((long)local_78 + 1) = CONCAT35((undefined3)uStack_db,local_e0);
      ((byte *)((long)local_78 + 0xe))[0] = 0;
      ((byte *)((long)local_78 + 0xe))[1] = 0;
      local_78[2] = (long ***)0x0;
      local_468 = local_78 + 3;
      uStack_d7 = 0;
      local_e0 = (undefined1  [5])0x0;
      uStack_db = 0;
      pppplVar21 = local_478;
      pppplVar27 = local_470;
      pppplVar24 = local_78;
      while (pppplVar19 = local_468, uVar3 = uStack_48c, uVar5 = uStack_48c._2_2_,
            pppplVar27 != local_478) {
        pppplVar19 = pppplVar27 + -3;
        ppplVar15 = pppplVar27[-2];
        ppplVar14 = pppplVar27[-1];
        pppplVar24[-3] = *pppplVar19;
        pppplVar24[-2] = ppplVar15;
        pppplVar24[-1] = ppplVar14;
        *pppplVar19 = (long ***)0x0;
        pppplVar27[-2] = (long ***)0x0;
        pppplVar27[-1] = (long ***)0x0;
        pppplVar21 = local_470;
        pppplVar27 = pppplVar19;
        pppplVar24 = pppplVar24 + -3;
      }
      while (uStack_48c = uVar3, pppplVar27 = pppplVar21, local_478 = pppplVar24,
            local_470 = pppplVar19, uStack_48c._2_2_ = uVar5, pppplVar27 != pppplVar30) {
        pppplVar21 = pppplVar27 + -3;
        pppplVar19 = local_470;
        pppplVar24 = local_478;
        uVar3 = uStack_48c;
        if (((ulong)*pppplVar21 & 1) != 0) {
          ppplVar15 = pppplVar27[-1];
          nu::VirtualFreeHook(ppplVar15);
          FUN_710392eb40((ulong)ppplVar15);
          uVar3 = uStack_48c;
          pppplVar19 = local_470;
          pppplVar24 = local_478;
          uVar5 = uStack_48c._2_2_;
        }
      }
      uVar3 = uStack_48c;
      if (pppplVar30 != (long ****)0x0) {
        nu::VirtualFreeHook(pppplVar30);
        FUN_710392eb40((ulong)pppplVar30);
        uVar3 = uStack_48c;
        uVar5 = uStack_48c._2_2_;
      }
      uStack_48c._2_2_ = uVar5;
      uStack_48c = uVar3;
      pppplVar21 = local_b8;
      uVar5 = uStack_48c._2_2_;
      local_498._4_4_ = 0;
      local_4a0._4_4_ = 0xf;
      local_498._0_4_ = 1;
      local_4a0._0_4_ = iVar8;
      uStack_48c._2_2_ = uVar5;
      if (local_b8 < local_b0) {
        *local_b8 = (long ***)CONCAT44(0xf,iVar8);
        local_b8[1] = (long ***)0x1;
        pppplVar27 = local_b8 + 2;
        *pppplVar27 = (long ***)0x0;
        local_b8[3] = (long ***)0x0;
        local_b8[4] = (long ***)0x0;
        if ((local_490 & 1) == 0) {
          local_b8[3] = (long ***)
                        CONCAT17(uStack_481,CONCAT16(uStack_482,CONCAT24(uStack_484,iStack_488)));
          local_b8[4] = (long ***)CONCAT44(local_47c,uStack_480);
          *pppplVar27 = (long ***)
                        CONCAT26(uVar5,CONCAT44(uStack_48c,
                                                CONCAT22(uStack_48e,CONCAT11(uStack_48f,local_490)))
                                );
        }
        else {
          pppplVar24 = (long ****)
                       CONCAT17(uStack_481,CONCAT16(uStack_482,CONCAT24(uStack_484,iStack_488)));
          if ((long ****)0xffffffffffffffef < pppplVar24) {
            uVar3 = uStack_48c;
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          pvVar1 = (void *)CONCAT44(local_47c,uStack_480);
          if (pppplVar24 < (long ****)0x17) {
            ppplVar15 = (long ***)((long)local_b8 + 0x11);
            *(char *)pppplVar27 = (char)(iStack_488 << 1);
            uVar3 = uStack_48c;
            if (pppplVar24 != (long ****)0x0) goto LAB_71035e6aac;
          }
          else {
            pppplVar29 = (long ****)((ulong)(pppplVar24 + 2) & 0xfffffffffffffff0);
            uVar3 = uStack_48c;
            iVar6 = FUN_710392e1f0(local_70,0x10,pppplVar29,param_4,param_5,param_6,param_7,param_8)
            ;
            uVar5 = uStack_48c._2_2_;
            uVar3 = uStack_48c;
            if ((iVar6 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
              local_e0 = SUB85(pppplVar29,0);
              uStack_db._0_3_ = (undefined3)((ulong)pppplVar29 >> 0x28);
              uStack_48c._2_2_ = uVar5;
              uVar10 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_e0);
              uVar3 = uStack_48c;
              uVar5 = uStack_48c._2_2_;
              if ((uVar10 & 1) != 0) {
                uStack_48c = uVar3;
                uVar3 = uStack_48c;
                uStack_48c._2_2_ = uVar5;
                FUN_710392e1f0(local_70,0x10,pppplVar29,param_4,param_5,param_6,param_7,param_8);
                uVar3 = uStack_48c;
                uVar5 = uStack_48c._2_2_;
              }
            }
            uStack_48c._2_2_ = uVar5;
            uStack_48c = uVar3;
            uVar5 = uStack_48c._2_2_;
            uVar3 = uStack_48c;
            uStack_48c._2_2_ = uVar5;
            nu::VirtualAllocHook((ulong)pppplVar29,0x10,local_70[0]);
            pppplVar21[3] = (long ***)pppplVar24;
            pppplVar21[4] = local_70[0];
            pppplVar21[2] = (long ***)((ulong)pppplVar29 | 1);
            ppplVar15 = local_70[0];
            uVar5 = uStack_48c._2_2_;
LAB_71035e6aac:
            uStack_48c._2_2_ = uVar5;
            uVar5 = uStack_48c._2_2_;
            pppplVar29 = pppplVar24;
            uVar3 = uStack_48c;
            uStack_48c._2_2_ = uVar5;
            memcpy(ppplVar15,pvVar1,(size_t)pppplVar24);
            uVar3 = uStack_48c;
            uVar5 = uStack_48c._2_2_;
          }
          uStack_48c._2_2_ = uVar5;
          uStack_48c = uVar3;
          uVar5 = uStack_48c._2_2_;
          *(undefined1 *)((long)ppplVar15 + (long)pppplVar24) = 0;
        }
        uStack_48c._2_2_ = uVar5;
        uVar5 = uStack_48c._2_2_;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        FUN_71035e8320((ulong *)(pppplVar21 + 5),(long *)&local_478,pppplVar29,param_4,param_5,
                       param_6,param_7,param_8);
        uVar3 = uStack_48c;
        local_b8 = local_b8 + 8;
        pppplVar21 = local_a8;
      }
      else {
        uVar3 = uStack_48c;
        FUN_71035e8530(&local_c0,&local_4a0,pppplVar29,param_4,param_5,param_6,param_7,param_8);
        uVar3 = uStack_48c;
        pppplVar21 = local_a8;
      }
      pppplVar27 = pppplVar21;
      uVar5 = uStack_48c._2_2_;
      pppplVar24 = local_a0;
      if (pppplVar21 != (long ****)0x0) {
        while (pppplVar30 = pppplVar24, uStack_48c = uVar3, local_a8 = pppplVar27,
              pppplVar30 != pppplVar21) {
          ppplVar15 = pppplVar30[-3];
          uVar3 = uStack_48c;
          if (ppplVar15 != (long ***)0x0) {
            ppplVar14 = pppplVar30[-2];
            if (ppplVar14 == ppplVar15) {
              pppplVar30[-2] = ppplVar15;
            }
            else {
              do {
                uStack_48c._2_2_ = uVar5;
                uVar5 = uStack_48c._2_2_;
                ppplVar32 = ppplVar14 + -3;
                uVar3 = uStack_48c;
                if (((ulong)*ppplVar32 & 1) != 0) {
                  pplVar17 = ppplVar14[-1];
                  uStack_48c._2_2_ = uVar5;
                  nu::VirtualFreeHook(pplVar17);
                  FUN_710392eb40((ulong)pplVar17);
                  uVar3 = uStack_48c;
                  uVar5 = uStack_48c._2_2_;
                }
                uStack_48c._2_2_ = uVar5;
                uStack_48c = uVar3;
                uVar5 = uStack_48c._2_2_;
                ppplVar14 = ppplVar32;
              } while (ppplVar15 != ppplVar32);
              pppplVar30[-2] = ppplVar15;
              ppplVar15 = pppplVar30[-3];
            }
            uStack_48c._2_2_ = uVar5;
            uVar5 = uStack_48c._2_2_;
            uVar3 = uStack_48c;
            uStack_48c._2_2_ = uVar5;
            nu::VirtualFreeHook(ppplVar15);
            FUN_710392eb40((ulong)ppplVar15);
            uVar3 = uStack_48c;
            uVar5 = uStack_48c._2_2_;
          }
          uStack_48c._2_2_ = uVar5;
          uStack_48c = uVar3;
          uVar5 = uStack_48c._2_2_;
          uVar3 = uStack_48c;
          pppplVar27 = local_a8;
          pppplVar24 = pppplVar30 + -8;
          if (((ulong)pppplVar30[-6] & 1) != 0) {
            ppplVar15 = pppplVar30[-4];
            uStack_48c._2_2_ = uVar5;
            nu::VirtualFreeHook(ppplVar15);
            FUN_710392eb40((ulong)ppplVar15);
            uVar3 = uStack_48c;
            pppplVar27 = local_a8;
            uVar5 = uStack_48c._2_2_;
          }
        }
        local_a0 = pppplVar21;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        nu::VirtualFreeHook(pppplVar27);
        FUN_710392eb40((ulong)pppplVar27);
        uVar3 = uStack_48c;
      }
      uStack_48c = uVar3;
      pppplVar21 = local_c0;
      uVar5 = uStack_48c._2_2_;
      local_a8 = local_c0;
      local_a0 = local_b8;
      local_98 = local_b0;
      local_c0 = (long ****)0x0;
      local_b8 = (long ****)0x0;
      local_b0 = (long ****)0x0;
      uVar3 = uStack_48c;
      uStack_48c._2_2_ = uVar5;
      FUN_71035e88e0((undefined8 *)local_e0,(long *)&local_a8,pppplVar29,param_4,param_5,param_6,
                     param_7,param_8);
      pppplVar24 = local_478;
      uVar3 = uStack_48c;
      pppplVar27 = local_478;
      pppplVar30 = local_470;
      uVar5 = uStack_48c._2_2_;
      if ((local_d0 == (long ***)0x0) || (*local_d0 != local_c8)) {
        local_4c8 = 0;
        plVar12 = (long *)0x0;
        lVar11 = 0;
        if (local_478 != (long ****)0x0) goto joined_r0x0071035e6c30;
LAB_71035e6da8:
        if ((local_490 & 1) == 0) goto LAB_71035e6db0;
LAB_71035e6c8c:
        uStack_48c = uVar3;
        uVar5 = uStack_48c._2_2_;
        pvVar1 = (void *)CONCAT44(local_47c,uStack_480);
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        nu::VirtualFreeHook(pvVar1);
        uVar3 = uStack_48c;
        uVar5 = uStack_48c._2_2_;
        uStack_48c = uVar3;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        FUN_710392eb40((ulong)pvVar1);
        uVar3 = uStack_48c;
        uVar5 = uStack_48c._2_2_;
        pppplVar27 = local_c0;
        pppplVar30 = local_b8;
        pppplVar24 = local_c0;
        if (local_c0 == (long ****)0x0) goto LAB_71035e6cac;
joined_r0x0071035e6dc0:
        while (local_c0 = pppplVar24, pppplVar21 = pppplVar30, uStack_48c = uVar3,
              pppplVar24 = local_c0, pppplVar21 != local_c0) {
          ppplVar15 = pppplVar21[-3];
          uVar3 = uStack_48c;
          local_c0 = pppplVar27;
          if (ppplVar15 != (long ***)0x0) {
            ppplVar14 = pppplVar21[-2];
            if (ppplVar14 == ppplVar15) {
              pppplVar21[-2] = ppplVar15;
            }
            else {
              do {
                uStack_48c._2_2_ = uVar5;
                uVar5 = uStack_48c._2_2_;
                ppplVar32 = ppplVar14 + -3;
                uVar3 = uStack_48c;
                if (((ulong)*ppplVar32 & 1) != 0) {
                  pplVar17 = ppplVar14[-1];
                  uStack_48c._2_2_ = uVar5;
                  nu::VirtualFreeHook(pplVar17);
                  uVar3 = uStack_48c;
                  uVar5 = uStack_48c._2_2_;
                  uStack_48c = uVar3;
                  uVar3 = uStack_48c;
                  uStack_48c._2_2_ = uVar5;
                  FUN_710392eb40((ulong)pplVar17);
                  uVar3 = uStack_48c;
                  uVar5 = uStack_48c._2_2_;
                }
                uStack_48c._2_2_ = uVar5;
                uStack_48c = uVar3;
                uVar5 = uStack_48c._2_2_;
                ppplVar14 = ppplVar32;
              } while (ppplVar15 != ppplVar32);
              pppplVar21[-2] = ppplVar15;
              ppplVar15 = pppplVar21[-3];
            }
            uStack_48c._2_2_ = uVar5;
            uVar5 = uStack_48c._2_2_;
            uVar3 = uStack_48c;
            uStack_48c._2_2_ = uVar5;
            nu::VirtualFreeHook(ppplVar15);
            uVar3 = uStack_48c;
            uVar5 = uStack_48c._2_2_;
            uStack_48c = uVar3;
            uVar3 = uStack_48c;
            uStack_48c._2_2_ = uVar5;
            FUN_710392eb40((ulong)ppplVar15);
            uVar3 = uStack_48c;
            uVar5 = uStack_48c._2_2_;
          }
          uStack_48c._2_2_ = uVar5;
          uStack_48c = uVar3;
          uVar5 = uStack_48c._2_2_;
          uVar3 = uStack_48c;
          pppplVar27 = local_c0;
          pppplVar30 = pppplVar21 + -8;
          if (((ulong)pppplVar21[-6] & 1) != 0) {
            ppplVar15 = pppplVar21[-4];
            uStack_48c._2_2_ = uVar5;
            nu::VirtualFreeHook(ppplVar15);
            uVar3 = uStack_48c;
            uVar5 = uStack_48c._2_2_;
            uStack_48c = uVar3;
            uVar3 = uStack_48c;
            uStack_48c._2_2_ = uVar5;
            FUN_710392eb40((ulong)ppplVar15);
            uVar3 = uStack_48c;
            pppplVar27 = local_c0;
            uVar5 = uStack_48c._2_2_;
          }
        }
        local_b8 = local_c0;
        local_c0 = pppplVar27;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        nu::VirtualFreeHook(pppplVar27);
        uVar3 = uStack_48c;
        uVar5 = uStack_48c._2_2_;
        uStack_48c = uVar3;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        FUN_710392eb40((ulong)pppplVar27);
        uVar3 = uStack_48c;
        pppplVar21 = local_a8;
        pppplVar27 = local_a0;
        uVar5 = uStack_48c._2_2_;
        pppplVar24 = local_a8;
        if (local_a8 == (long ****)0x0) goto LAB_71035e6e9c;
joined_r0x0071035e6cb8:
        while (pppplVar30 = pppplVar27, uStack_48c = uVar3, pppplVar30 != pppplVar24) {
          ppplVar15 = pppplVar30[-3];
          uVar3 = uStack_48c;
          if (ppplVar15 != (long ***)0x0) {
            ppplVar14 = pppplVar30[-2];
            if (ppplVar14 == ppplVar15) {
              pppplVar30[-2] = ppplVar15;
            }
            else {
              do {
                uStack_48c._2_2_ = uVar5;
                uVar5 = uStack_48c._2_2_;
                ppplVar32 = ppplVar14 + -3;
                uVar3 = uStack_48c;
                if (((ulong)*ppplVar32 & 1) != 0) {
                  pplVar17 = ppplVar14[-1];
                  uStack_48c._2_2_ = uVar5;
                  nu::VirtualFreeHook(pplVar17);
                  uVar3 = uStack_48c;
                  uVar5 = uStack_48c._2_2_;
                  uStack_48c = uVar3;
                  uVar3 = uStack_48c;
                  uStack_48c._2_2_ = uVar5;
                  FUN_710392eb40((ulong)pplVar17);
                  uVar3 = uStack_48c;
                  uVar5 = uStack_48c._2_2_;
                }
                uStack_48c._2_2_ = uVar5;
                uStack_48c = uVar3;
                uVar5 = uStack_48c._2_2_;
                ppplVar14 = ppplVar32;
              } while (ppplVar15 != ppplVar32);
              pppplVar30[-2] = ppplVar15;
              ppplVar15 = pppplVar30[-3];
            }
            uStack_48c._2_2_ = uVar5;
            uVar5 = uStack_48c._2_2_;
            uVar3 = uStack_48c;
            uStack_48c._2_2_ = uVar5;
            nu::VirtualFreeHook(ppplVar15);
            uVar3 = uStack_48c;
            uVar5 = uStack_48c._2_2_;
            uStack_48c = uVar3;
            uVar3 = uStack_48c;
            uStack_48c._2_2_ = uVar5;
            FUN_710392eb40((ulong)ppplVar15);
            uVar3 = uStack_48c;
            uVar5 = uStack_48c._2_2_;
          }
          uStack_48c._2_2_ = uVar5;
          uStack_48c = uVar3;
          uVar5 = uStack_48c._2_2_;
          pppplVar21 = local_a8;
          uVar3 = uStack_48c;
          pppplVar27 = pppplVar30 + -8;
          if (((ulong)pppplVar30[-6] & 1) != 0) {
            ppplVar15 = pppplVar30[-4];
            uStack_48c._2_2_ = uVar5;
            nu::VirtualFreeHook(ppplVar15);
            FUN_710392eb40((ulong)ppplVar15);
            uVar3 = uStack_48c;
            pppplVar21 = local_a8;
            uVar5 = uStack_48c._2_2_;
          }
        }
        local_a0 = pppplVar24;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        nu::VirtualFreeHook(pppplVar21);
        FUN_710392eb40((ulong)pppplVar21);
        if (plVar12 != (long *)0x0) goto LAB_71035e6ea0;
LAB_71035e6ecc:
        local_348 = 0;
LAB_71035e6ed4:
        local_338 = 0;
        local_340 = (undefined8 *)0x0;
      }
      else {
        lVar13 = CONCAT35(uStack_d3,CONCAT41(uStack_d7,uStack_db._3_1_));
        plVar12 = (long *)0x0;
        local_4c8 = 0;
        lVar11 = 0;
        if (lVar13 != 0) {
          plVar12 = *(long **)(lVar13 + 8);
          local_4c8 = *plVar12;
          lVar11 = lVar13;
        }
        if (local_478 == (long ****)0x0) goto LAB_71035e6da8;
joined_r0x0071035e6c30:
        while (pppplVar19 = pppplVar30, uStack_48c = uVar3, local_478 = pppplVar27,
              uStack_48c._2_2_ = uVar5, pppplVar19 != pppplVar24) {
          pppplVar30 = pppplVar19 + -3;
          uVar3 = uStack_48c;
          if (((ulong)*pppplVar30 & 1) != 0) {
            ppplVar15 = pppplVar19[-1];
            nu::VirtualFreeHook(ppplVar15);
            uVar3 = uStack_48c;
            uVar5 = uStack_48c._2_2_;
            uStack_48c = uVar3;
            uVar3 = uStack_48c;
            uStack_48c._2_2_ = uVar5;
            FUN_710392eb40((ulong)ppplVar15);
            uVar3 = uStack_48c;
            pppplVar27 = local_478;
            uVar5 = uStack_48c._2_2_;
          }
        }
        local_470 = pppplVar24;
        uVar3 = uStack_48c;
        nu::VirtualFreeHook(pppplVar27);
        uVar3 = uStack_48c;
        uVar5 = uStack_48c._2_2_;
        uStack_48c = uVar3;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        FUN_710392eb40((ulong)pppplVar27);
        uVar3 = uStack_48c;
        if ((local_490 & 1) != 0) goto LAB_71035e6c8c;
LAB_71035e6db0:
        uStack_48c = uVar3;
        uVar5 = uStack_48c._2_2_;
        uVar3 = uStack_48c;
        pppplVar27 = local_c0;
        pppplVar30 = local_b8;
        pppplVar24 = local_c0;
        if (local_c0 != (long ****)0x0) goto joined_r0x0071035e6dc0;
LAB_71035e6cac:
        uStack_48c._2_2_ = uVar5;
        uStack_48c = uVar3;
        uVar5 = uStack_48c._2_2_;
        uVar3 = uStack_48c;
        pppplVar27 = local_a0;
        pppplVar24 = pppplVar21;
        if (pppplVar21 != (long ****)0x0) goto joined_r0x0071035e6cb8;
LAB_71035e6e9c:
        if (plVar12 == (long *)0x0) goto LAB_71035e6ecc;
LAB_71035e6ea0:
        if (*plVar12 != local_4c8) goto LAB_71035e6ecc;
        local_348 = lVar11;
        if (lVar11 == 0) goto LAB_71035e6ed4;
        local_340 = *(undefined8 **)(lVar11 + 8);
        local_338 = *local_340;
      }
      local_498._0_4_ = 0;
      local_498._4_4_ = 0;
      local_490 = 0;
      uStack_48f = 0;
      uStack_48e = 0;
      uStack_48c = 0;
      uStack_48c._2_2_ = 0;
      local_4a0._0_4_ = 0;
      local_4a0._4_4_ = 0;
      pppplVar21 = (long ****)(*(long *)(lVar18 + 0x78) - *(long *)(lVar18 + 0x70));
      if (pppplVar21 == (long ****)0x0) {
        pppplVar21 = (long ****)0x0;
        local_498 = (long ****)0x0;
        uVar3 = uStack_48c;
        local_4a0 = local_498;
      }
      else {
        if ((ulong)((long)pppplVar21 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        iVar6 = FUN_710392e1f0(&local_a8,0x10,pppplVar21,param_4,param_5,param_6,param_7,param_8);
        uVar5 = uStack_48c._2_2_;
        uVar3 = uStack_48c;
        if ((iVar6 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
          local_e0 = SUB85(pppplVar21,0);
          uStack_db._0_3_ = (undefined3)((ulong)pppplVar21 >> 0x28);
          uStack_48c._2_2_ = uVar5;
          uVar10 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_e0);
          uVar3 = uStack_48c;
          uVar5 = uStack_48c._2_2_;
          if ((uVar10 & 1) != 0) {
            uStack_48c = uVar3;
            uVar3 = uStack_48c;
            uStack_48c._2_2_ = uVar5;
            FUN_710392e1f0(&local_a8,0x10,pppplVar21,param_4,param_5,param_6,param_7,param_8);
            uVar3 = uStack_48c;
            uVar5 = uStack_48c._2_2_;
          }
        }
        uStack_48c._2_2_ = uVar5;
        uStack_48c = uVar3;
        uVar5 = uStack_48c._2_2_;
        pppplVar29 = local_a8;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        nu::VirtualAllocHook((ulong)pppplVar21,0x10,local_a8);
        pppplVar21 = local_a8 + ((long)pppplVar21 >> 3);
        local_490 = (byte)pppplVar21;
        uStack_48f = (undefined1)((ulong)pppplVar21 >> 8);
        uStack_48e = (undefined2)((ulong)pppplVar21 >> 0x10);
        uVar3 = (undefined4)((ulong)pppplVar21 >> 0x20);
        uStack_48c._2_2_ = (undefined2)((ulong)pppplVar21 >> 0x30);
        puVar23 = *(undefined8 **)(lVar18 + 0x70);
        puVar9 = *(undefined8 **)(lVar18 + 0x78);
        local_498 = local_a8;
        local_4a0 = local_a8;
        if (puVar23 != puVar9) {
          uVar20 = (long)puVar9 + (-8 - (long)puVar23);
          uVar2 = ((uint)(uVar20 >> 3) & 0x1fffffff) + 1;
          uVar10 = (ulong)uVar2 & 3;
          if ((uVar2 & 3) != 0) {
            lVar18 = -uVar10;
            puVar22 = puVar23;
            do {
              *local_498 = (long ***)*puVar22;
              local_498 = local_498 + 1;
              lVar18 = lVar18 + 1;
              puVar22 = puVar22 + 1;
            } while (lVar18 != 0);
            puVar23 = puVar23 + uVar10;
          }
          if (0x17 < uVar20) {
            do {
              *local_498 = (long ***)*puVar23;
              local_498[1] = (long ***)puVar23[1];
              local_498[2] = (long ***)puVar23[2];
              local_498[3] = (long ***)puVar23[3];
              puVar23 = puVar23 + 4;
              local_498 = local_498 + 4;
            } while (puVar23 != puVar9);
          }
        }
      }
      uStack_48c = uVar3;
      uVar5 = uStack_48c._2_2_;
      uVar31 = iVar7 + uVar31;
      local_c0 = (long ****)CONCAT44(0x10,(uVar31 - (int)local_410) * 0x10);
      if (local_498 < pppplVar21) {
        *local_498 = (long ***)local_c0;
        local_498 = local_498 + 1;
        uVar3 = uStack_48c;
        pppplVar29 = local_400;
      }
      else {
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        FUN_71035e8ec0(&local_4a0,&local_c0,pppplVar29,param_4,param_5,param_6,param_7,param_8);
        uVar3 = uStack_48c;
        pppplVar29 = local_400;
      }
      uStack_48c = uVar3;
      local_3f8 = local_498;
      local_400 = local_4a0;
      if (pppplVar29 != (void *)0x0) {
        uStack_48c._2_2_ = (undefined2)((uint)uVar3 >> 0x10);
        uVar5 = uStack_48c._2_2_;
        local_400 = pppplVar29;
        local_3f8 = pppplVar29;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        nu::VirtualFreeHook(pppplVar29);
        uVar3 = uStack_48c;
        uVar5 = uStack_48c._2_2_;
        uStack_48c = uVar3;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        FUN_710392eb40((ulong)pppplVar29);
        local_3f8 = local_498;
        local_400 = local_4a0;
      }
      local_3f0 = CONCAT44(uStack_48c,CONCAT22(uStack_48e,CONCAT11(uStack_48f,local_490)));
      local_4a0._0_4_ = 0;
      local_4a0._4_4_ = 0;
      local_498._0_4_ = 0;
      local_498._4_4_ = 0;
      local_490 = 0;
      uStack_48f = 0;
      uStack_48e = 0;
      uStack_48c = 0;
      uStack_48c._2_2_ = 0;
      iVar7 = FUN_710392e1f0(&local_a8,0x10,(long ****)&DAT_000001c0,param_4,param_5,param_6,param_7
                             ,param_8);
      uVar3 = uStack_48c;
      if ((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
        local_e0 = (undefined1  [5])0x1c0;
        uStack_db = uStack_db & 0xff000000;
        uVar5 = uStack_48c._2_2_;
        uStack_48c = uVar3;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        uVar10 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_e0);
        uVar3 = uStack_48c;
        if ((uVar10 & 1) != 0) {
          uVar5 = uStack_48c._2_2_;
          uStack_48c = uVar3;
          uVar3 = uStack_48c;
          uStack_48c._2_2_ = uVar5;
          FUN_710392e1f0(&local_a8,0x10,(long ****)&DAT_000001c0,param_4,param_5,param_6,param_7,
                         param_8);
          uVar3 = uStack_48c;
        }
      }
      uStack_48c = uVar3;
      uVar5 = uStack_48c._2_2_;
      param_3 = local_a8;
      uVar3 = uStack_48c;
      uStack_48c._2_2_ = uVar5;
      nu::VirtualAllocHook(0x1c0,0x10,local_a8);
      pppplVar29 = local_a8;
      uVar3 = uStack_48c;
      uVar5 = uStack_48c._2_2_;
      uStack_48c = uVar3;
      uVar3 = uStack_48c;
      uStack_48c._2_2_ = uVar5;
      FUN_71037c3a70(local_a8);
      uVar3 = uStack_48c;
      pppplVar29[0x1f] = (long ***)&PTR_FUN_7105231690;
      pppplVar29[0x20] = (long ***)0x0;
      *pppplVar29 = (long ***)&PTR_FUN_710526f9d8;
      pppplVar29[0x23] = (long ***)&PTR_FUN_7105231a30;
      pppplVar29[0x24] = (long ***)0x0;
      pppplVar29[0x27] = (long ***)&PTR_FUN_71052688a8;
      pppplVar29[0x28] = (long ***)0x0;
      pppplVar29[0x2f] = (long ***)&PTR_FUN_7105231970;
      pppplVar29[0x30] = (long ***)0x0;
      *(undefined8 *)((long)pppplVar29 + 100) = 0x100000000;
      *(undefined1 *)(pppplVar29 + 0x33) = 1;
      pppplVar29[2] = (long ***)0x0;
      *(undefined4 *)(pppplVar29 + 5) = 0;
      *(undefined1 *)(pppplVar29 + 0xc) = 0;
      pppplVar29[0xe] = (long ***)0x0;
      *(undefined4 *)(pppplVar29 + 0x11) = 2;
      *(undefined8 *)((long)pppplVar29 + 0xec) = 0;
      *(undefined8 *)((long)pppplVar29 + 0xe4) = 0;
      *(undefined8 *)((long)pppplVar29 + 0xdc) = 0;
      *(undefined8 *)((long)pppplVar29 + 0xd4) = 0;
      *(undefined8 *)((long)pppplVar29 + 0xcc) = 0;
      *(undefined8 *)((long)pppplVar29 + 0xc4) = 0;
      *(undefined8 *)((long)pppplVar29 + 0xbc) = 0;
      *(undefined8 *)((long)pppplVar29 + 0xb4) = 0;
      *(undefined8 *)((long)pppplVar29 + 0xac) = 0;
      *(undefined8 *)((long)pppplVar29 + 0xa4) = 0;
      *(undefined8 *)((long)pppplVar29 + 0x9c) = 0;
      *(undefined8 *)((long)pppplVar29 + 0x94) = 0;
      *(undefined8 *)((long)pppplVar29 + 0x8c) = 0;
      *(undefined4 *)((long)pppplVar29 + 0x19c) = 0;
      pppplVar29[3] = (long ***)0x0;
      pppplVar29[4] = (long ***)0x0;
      pppplVar29[10] = (long ***)0x0;
      pppplVar29[0xb] = (long ***)0x0;
      pppplVar29[8] = (long ***)0x0;
      pppplVar29[9] = (long ***)0x0;
      pppplVar29[6] = (long ***)0x0;
      pppplVar29[7] = (long ***)0x0;
      pppplVar29[0xf] = (long ***)0x0;
      pppplVar29[0x10] = (long ***)0x0;
      pppplVar29[0x21] = (long ***)0x0;
      pppplVar29[0x22] = (long ***)0x0;
      pppplVar29[0x25] = (long ***)0x0;
      pppplVar29[0x26] = (long ***)0x0;
      pppplVar29[0x29] = (long ***)0x0;
      pppplVar29[0x2a] = (long ***)0x0;
      pppplVar29[0x31] = (long ***)0x0;
      pppplVar29[0x32] = (long ***)0x0;
      pppplVar29[0x2d] = (long ***)0x0;
      pppplVar29[0x2e] = (long ***)0x0;
      pppplVar29[0x2b] = (long ***)0x0;
      pppplVar29[0x2c] = (long ***)0x0;
      pppplVar29[0x36] = (long ***)0x0;
      pppplVar29[0x37] = (long ***)0x0;
      pppplVar29[0x34] = (long ***)&PTR_FUN_7105232cc8;
      pppplVar29[0x35] = (long ***)0x0;
      ppplVar15 = DAT_71053354e8;
      if ((DAT_71053354f0 == (long *)0x0) || (*DAT_71053354f0 != DAT_71053354f8)) {
        pppplVar29[0x20] = (long ***)0x0;
LAB_71035e7280:
        ppplVar15 = (long ***)0x0;
        pppplVar29[0x21] = (long ***)0x0;
      }
      else {
        pppplVar29[0x20] = DAT_71053354e8;
        if (ppplVar15 == (long ***)0x0) goto LAB_71035e7280;
        ppplVar15 = (long ***)ppplVar15[1];
        pppplVar29[0x21] = ppplVar15;
        ppplVar15 = (long ***)*ppplVar15;
      }
      pppplVar29[0x22] = ppplVar15;
      uVar5 = uStack_48c._2_2_;
      uStack_48c = uVar3;
      uVar3 = uStack_48c;
      uStack_48c._2_2_ = uVar5;
      FUN_710388a9a0((long)pppplVar29,&local_448);
      uVar3 = uStack_48c;
      uStack_48c = uVar3;
      if ((ulong)((long)local_88 - (long)local_90 >> 5) <= uVar26) {
        uVar5 = uStack_48c._2_2_;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      ppplVar15 = pppplVar29[1];
      pplVar17 = *ppplVar15;
      plVar12 = (long *)local_90[uVar26 * 4 + 1];
      plVar16 = (long *)local_90[uVar26 * 4 + 2];
      local_90[uVar26 * 4 + 1] = pppplVar29;
      local_90[uVar26 * 4 + 2] = ppplVar15;
      lVar18 = local_90[uVar26 * 4 + 3];
      local_90[uVar26 * 4 + 3] = pplVar17;
      if (((plVar16 != (long *)0x0) && (plVar12 != (long *)0x0)) && (*plVar16 == lVar18)) {
        uVar5 = uStack_48c._2_2_;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        (**(code **)(*plVar12 + 8))();
        uVar5 = uStack_48c._2_2_;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
      }
      uStack_48c = uVar3;
      uVar5 = uStack_48c._2_2_;
      pvVar1 = (void *)CONCAT44(local_4a0._4_4_,(uint)local_4a0);
      uVar3 = uStack_48c;
      if (pvVar1 != (void *)0x0) {
        local_498._0_4_ = (uint)local_4a0;
        local_498._4_4_ = local_4a0._4_4_;
        uStack_48c._2_2_ = uVar5;
        nu::VirtualFreeHook(pvVar1);
        uVar3 = uStack_48c;
        uVar5 = uStack_48c._2_2_;
        uStack_48c = uVar3;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        FUN_710392eb40((ulong)pvVar1);
        uVar3 = uStack_48c;
        uVar5 = uStack_48c._2_2_;
      }
      uStack_48c._2_2_ = uVar5;
      uStack_48c = uVar3;
      uVar5 = uStack_48c._2_2_;
      local_320 = &PTR_FUN_7105231970;
      if (((local_310 != (long *)0x0) && (*local_310 == local_308)) && (local_318 != (long *)0x0)) {
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        (**(code **)(*local_318 + 8))();
        uVar5 = uStack_48c._2_2_;
      }
      uStack_48c._2_2_ = uVar5;
      pppplVar29 = local_400;
      uVar5 = uStack_48c._2_2_;
      uVar3 = uStack_48c;
      if (local_400 != (long ****)0x0) {
        local_3f8 = local_400;
        uStack_48c._2_2_ = uVar5;
        nu::VirtualFreeHook(local_400);
        uVar3 = uStack_48c;
        uVar5 = uStack_48c._2_2_;
        uStack_48c = uVar3;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        FUN_710392eb40((ulong)pppplVar29);
        uVar3 = uStack_48c;
        uVar5 = uStack_48c._2_2_;
      }
      uStack_48c._2_2_ = uVar5;
      uStack_48c = uVar3;
      uVar5 = uStack_48c._2_2_;
      uVar3 = uStack_48c;
      if ((local_428 & 1) != 0) {
        uStack_48c._2_2_ = uVar5;
        nu::VirtualFreeHook(local_418);
        uVar3 = uStack_48c;
        uVar5 = uStack_48c._2_2_;
        uStack_48c = uVar3;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        FUN_710392eb40((ulong)local_418);
        uVar3 = uStack_48c;
        uVar5 = uStack_48c._2_2_;
      }
      uStack_48c._2_2_ = uVar5;
      uStack_48c = uVar3;
      pvVar1 = local_438;
      uVar5 = uStack_48c._2_2_;
      uVar3 = uStack_48c;
      if ((local_448 & 1) != 0) {
        uStack_48c._2_2_ = uVar5;
        nu::VirtualFreeHook(local_438);
        uVar3 = uStack_48c;
        uVar5 = uStack_48c._2_2_;
        uStack_48c = uVar3;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        FUN_710392eb40((ulong)pvVar1);
        uVar3 = uStack_48c;
        uVar5 = uStack_48c._2_2_;
      }
      uStack_48c._2_2_ = uVar5;
      uStack_48c = uVar3;
      uVar5 = uStack_48c._2_2_;
      uVar26 = (ulong)((int)uVar26 + 1);
      uVar3 = uStack_48c;
    } while (uVar26 < (ulong)((long)local_88 - (long)local_90 >> 5));
    lVar11 = *(long *)(param_1 + 8);
  }
  uStack_48c._2_2_ = uVar5;
  uVar5 = uStack_48c._2_2_;
  local_3c0 = &local_3a8;
  local_3e8 = 0;
  uStack_3e4 = 0;
  local_3e0 = 0;
  uStack_3dc = 0;
  local_3b8 = 0;
  local_3c8 = (undefined8 *)((ulong)local_3c8 & 0xffffffff00000000);
  local_3b0 = 0x10;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = (long ***)&PTR_FUN_7105232e00;
  local_128[0] = 0;
  local_f0 = 0;
  local_f8 = (undefined8 *)0x0;
  local_100 = (undefined8 *)0x0;
  local_3d8 = (undefined **)0x0;
  local_3d0 = 0;
  local_3f8 = (long ****)0x0;
  local_3f0 = 0;
  local_408 = 0;
  local_400 = (long ****)0x0;
  local_418 = (void *)0x0;
  local_410 = 0;
  local_428 = 0;
  local_420 = 0;
  local_438 = (void *)0x0;
  local_430 = 0;
  local_448 = 0;
  local_440 = 0;
  if (*(long *)(lVar11 + 0x30) == *(long *)(lVar11 + 0x28)) {
LAB_71035e7bf4:
    uStack_48c._2_2_ = uVar5;
    uVar5 = uStack_48c._2_2_;
    local_3d0 = 0;
    local_3e8 = 0;
    local_3f0 = 0;
    local_3f8 = (long ****)0x0;
    local_400 = (long ****)0x0;
    local_410 = 0;
    local_418 = (void *)0x0;
    local_420 = 0;
    local_428 = 0;
    local_3e0 = 0;
    local_3b8 = 0;
    local_438 = (void *)0x0;
    local_440 = 0;
    local_448 = 0;
    uVar3 = uStack_48c;
    uStack_48c._2_2_ = uVar5;
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar18 = *(long *)(*(long *)(lVar11 + 0x28) + 8);
  uVar3 = uStack_48c;
  if (&local_448 != (ulong *)(lVar18 + 0x10)) {
    uVar26 = *(ulong *)(lVar18 + 0x18);
    pvVar1 = *(void **)(lVar18 + 0x20);
    if ((*(byte *)(lVar18 + 0x10) & 1) == 0) {
      pvVar1 = (void *)(lVar18 + 0x11);
      uVar26 = (ulong)(*(byte *)(lVar18 + 0x10) >> 1);
    }
    uStack_48c._2_2_ = uVar5;
    FUN_71002c51f0(&local_448,pvVar1,uVar26,param_4,param_5,param_6,param_7,param_8);
    uVar3 = uStack_48c;
    lVar11 = *(long *)(param_1 + 8);
    uVar5 = uStack_48c._2_2_;
  }
  uStack_48c._2_2_ = uVar5;
  uStack_48c = uVar3;
  uVar5 = uStack_48c._2_2_;
  local_428 = *(ulong *)(lVar11 + 0x58);
  local_420 = *(undefined8 *)(lVar11 + 0x60);
  local_418 = *(void **)(lVar11 + 0x68);
  local_410 = *(undefined8 *)(lVar11 + 0x70);
  local_408 = *(undefined8 *)(lVar11 + 0x78);
  local_400 = *(long *****)(lVar11 + 0x80);
  local_3f8 = *(long *****)(lVar11 + 0x88);
  local_3f0 = *(undefined8 *)(lVar11 + 0x90);
  local_3e8 = (undefined4)*(undefined8 *)(lVar11 + 0x98);
  uStack_3e4 = (undefined4)((ulong)*(undefined8 *)(lVar11 + 0x98) >> 0x20);
  local_3d0 = *(undefined8 *)(lVar11 + 0xb0);
  local_3d8 = *(undefined ***)(lVar11 + 0xa8);
  local_3e0 = (undefined4)*(undefined8 *)(lVar11 + 0xa0);
  uStack_3dc = (undefined4)((ulong)*(undefined8 *)(lVar11 + 0xa0) >> 0x20);
  local_3c8 = (undefined8 *)CONCAT44(local_3c8._4_4_,*(undefined4 *)(lVar11 + 0xb8));
  local_e8 = (undefined4)
             ((ulong)(*(long *)(*(long *)(param_2 + 8) + 0x20) -
                     *(long *)(*(long *)(param_2 + 8) + 0x18)) >> 6);
  uVar2 = *(uint *)(lVar11 + 0x5f0);
  uStack_48c._2_2_ = uVar5;
  if (local_128[0] == uVar2) {
    pppplVar29 = &local_120;
    local_4a0 = (long ****)(lVar11 + 0x5f8);
    uVar3 = uStack_48c;
    FUN_71035e7f20(local_128[0] ^ (int)local_128[0] >> 0x1f,&local_4a0,(long)pppplVar29);
    uVar3 = uStack_48c;
    puVar23 = local_100;
  }
  else {
    local_498._0_4_ = uVar2 ^ (int)uVar2 >> 0x1f;
    pppplVar29 = (long ****)(lVar11 + 0x5f8);
    local_4a0 = (long ****)local_128;
    uVar3 = uStack_48c;
    FUN_71035e8000((uint)local_498,&local_4a0,(long)pppplVar29);
    uVar5 = uStack_48c._2_2_;
    uVar3 = uStack_48c;
    puVar23 = local_100;
    uStack_48c._2_2_ = uVar5;
  }
  puVar9 = puVar23;
  uVar5 = uStack_48c._2_2_;
  puVar22 = local_f8;
  if (puVar23 != (undefined8 *)0x0) {
    while (uStack_48c = uVar3, local_100 = puVar9, uStack_48c._2_2_ = uVar5, puVar22 != puVar23) {
      puVar22 = puVar22 + -4;
      uVar3 = uStack_48c;
      (**(code **)*puVar22)(puVar22);
      uVar3 = uStack_48c;
      puVar9 = local_100;
      uVar5 = uStack_48c._2_2_;
    }
    local_f8 = puVar23;
    uVar3 = uStack_48c;
    nu::VirtualFreeHook(puVar9);
    FUN_710392eb40((ulong)puVar9);
    uVar3 = uStack_48c;
  }
  uStack_48c = uVar3;
  local_f0 = local_80;
  local_f8 = local_88;
  uVar5 = uStack_48c._2_2_;
  local_100 = local_90;
  local_90 = (undefined8 *)0x0;
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  lVar18 = *(long *)(*(long *)(param_1 + 8) + 0x360);
  if (lVar18 != 0) {
    puVar28 = *(uint **)(*(long *)(param_1 + 8) + 0x358);
    puVar25 = puVar28 + lVar18 * 10;
    do {
      uStack_48c._2_2_ = uVar5;
      uVar5 = uStack_48c._2_2_;
      pppplVar29 = (long ****)(puVar28 + 2);
      uVar3 = uStack_48c;
      uStack_48c._2_2_ = uVar5;
      FUN_710359c770(&local_4a0,*puVar28 ^ (int)*puVar28 >> 0x1f,(long)pppplVar29);
      uVar3 = uStack_48c;
      iVar8 = *(int *)(CONCAT44(local_498._4_4_,(uint)local_498) + 0x10);
      uVar5 = uStack_48c._2_2_;
      uStack_48c = uVar3;
      uVar3 = uStack_48c;
      uStack_48c._2_2_ = uVar5;
      FUN_710359c770(&local_4a0,*puVar28 ^ (int)*puVar28 >> 0x1f,(long)pppplVar29);
      uVar3 = uStack_48c;
      uVar5 = uStack_48c._2_2_;
      uStack_48c = uVar3;
      uVar3 = uStack_48c;
      uStack_48c._2_2_ = uVar5;
      (**(code **)(*(long *)CONCAT44(local_498._4_4_,(uint)local_498) + 0x20))(&local_4a0);
      uVar3 = uStack_48c;
      uStack_48c = uVar3;
      if (iVar8 == 0) {
        uVar5 = uStack_48c._2_2_;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        FUN_71035e9390((undefined8 *)local_e0,(long)&local_4a0,pppplVar29,param_4,param_5,param_6,
                       param_7,param_8);
        uVar3 = uStack_48c;
        uVar5 = uStack_48c._2_2_;
        uStack_48c = uVar3;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        FUN_71035e90a0((long *)&local_3c0,(long)local_e0,pppplVar29,param_4,param_5,param_6,param_7,
                       param_8);
        uVar3 = uStack_48c;
        local_e0 = (undefined1  [5])0x7105231bf0;
        uVar5 = uStack_48c._2_2_;
      }
      else {
        uVar5 = uStack_48c._2_2_;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        FUN_710359cdd0((undefined8 *)local_e0,(long)&local_4a0,pppplVar29,param_4,param_5,param_6,
                       param_7,param_8);
        uVar3 = uStack_48c;
        uVar5 = uStack_48c._2_2_;
        uStack_48c = uVar3;
        uVar3 = uStack_48c;
        uStack_48c._2_2_ = uVar5;
        FUN_710359cfb0((long *)&local_3c0,(long)local_e0,pppplVar29,param_4,param_5,param_6,param_7,
                       param_8);
        uVar3 = uStack_48c;
        local_e0 = (undefined1  [5])0x7105231850;
        uVar5 = uStack_48c._2_2_;
      }
      uStack_48c = uVar3;
      uStack_db = uStack_db & 0xff000000;
      if ((local_d0 != (long ***)0x0) && (*local_d0 == local_c8)) {
        uStack_db._3_1_ = (byte)(uStack_db >> 0x18);
        plVar12 = (long *)CONCAT35(uStack_d3,CONCAT41(uStack_d7,uStack_db._3_1_));
        if (plVar12 != (long *)0x0) {
          uVar3 = uStack_48c;
          uStack_48c._2_2_ = uVar5;
          (**(code **)(*plVar12 + 8))();
          uVar5 = uStack_48c._2_2_;
        }
      }
      uStack_48c._2_2_ = uVar5;
      uVar5 = uStack_48c._2_2_;
      puVar28 = puVar28 + 10;
    } while (puVar28 != puVar25);
  }
  local_498._0_4_ = uVar31 << 4;
  local_4a0._0_4_ = 0;
  local_4a0._4_4_ = 0;
  local_498._4_4_ = 0;
  uStack_484 = 0x7865;
  uStack_482 = 0x5f;
  uStack_481 = 99;
  uStack_480 = 0x726f6c6f;
  local_44b = 0x10;
  uStack_48c = 0x5f6b6e69;
  uStack_48c._2_2_ = 0x5f6b;
  iStack_488 = 0x74726576;
  local_47c = local_47c & 0xffffff00;
  local_490 = 4;
  uStack_48f = 0;
  uStack_48e = 0;
  if (uVar31 == 0) {
    puVar23 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)0x0;
    uVar5 = uStack_48c._2_2_;
    goto LAB_71035e7884;
  }
  uVar26 = (ulong)uVar31;
  lVar18 = uVar26 << 4;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,lVar18,pppplVar29,param_4,param_5,param_6,param_7,param_8);
  uVar3 = uStack_48c;
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a8 = (long ****)((ulong)local_a8 & 0xffffffff00000000);
      local_e0 = SUB85(lVar18,0);
      uStack_db = uStack_db & 0xff000000;
      pppplVar29 = (long ****)local_e0;
      uVar5 = uStack_48c._2_2_;
      uStack_48c = uVar3;
      uVar3 = uStack_48c;
      uStack_48c._2_2_ = uVar5;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
      uVar3 = uStack_48c;
      if (((uVar10 & 1) != 0) &&
         (uVar5 = uStack_48c._2_2_, uStack_48c = uVar3, uVar3 = uStack_48c, uStack_48c._2_2_ = uVar5
         , puVar9 = (undefined8 *)
                    FUN_710392e290(0x10,lVar18,pppplVar29,param_4,param_5,param_6,param_7,param_8),
         uVar3 = uStack_48c, puVar9 != (undefined8 *)0x0)) goto LAB_71035e7750;
    }
    uStack_48c = uVar3;
    uVar5 = uStack_48c._2_2_;
    puVar9 = (undefined8 *)0x0;
    uVar3 = uStack_48c;
    uStack_48c._2_2_ = uVar5;
  }
LAB_71035e7750:
  uStack_48c = uVar3;
  uVar5 = uStack_48c._2_2_;
  uVar10 = uVar26 & 3;
  uVar20 = uVar26;
  puVar23 = puVar9;
  if ((uVar31 & 3) != 0) {
    lVar18 = -uVar10;
    do {
      *puVar23 = 0;
      puVar23[1] = 0;
      lVar18 = lVar18 + 1;
      puVar23 = puVar23 + 2;
    } while (lVar18 != 0);
    uVar20 = uVar26 - uVar10;
    puVar23 = puVar9 + uVar10 * 2;
  }
  if (2 < uVar26 - 1) {
    do {
      *puVar23 = 0;
      puVar23[1] = 0;
      uVar20 = uVar20 - 4;
      puVar23[6] = 0;
      puVar23[7] = 0;
      puVar23[4] = 0;
      puVar23[5] = 0;
      puVar23[2] = 0;
      puVar23[3] = 0;
      puVar23 = puVar23 + 8;
    } while (uVar20 != 0);
  }
  puVar23 = puVar9 + uVar26 * 2;
LAB_71035e7884:
  uStack_48c._2_2_ = uVar5;
  uVar5 = uStack_48c._2_2_;
  if (0 < (long)puVar23 - (long)puVar9) {
    lVar18 = ((ulong)((long)puVar23 - (long)puVar9) >> 4) + 1;
    puVar23 = puVar9;
    do {
      lVar18 = lVar18 + -1;
      *puVar23 = 0xbf800000;
      puVar23[1] = 0;
      puVar23 = puVar23 + 2;
    } while (1 < lVar18);
  }
  local_4a0._0_4_ = (uint)puVar9;
  local_4a0._4_4_ = (undefined4)((ulong)puVar9 >> 0x20);
  uVar3 = uStack_48c;
  uStack_48c._2_2_ = uVar5;
  iVar8 = FUN_710392e1f0(&local_a8,0x10,(long ****)0xf20,param_4,param_5,param_6,param_7,param_8);
  uVar3 = uStack_48c;
  if ((iVar8 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_e0 = (undefined1  [5])0xf20;
    uStack_db = uStack_db & 0xff000000;
    uVar5 = uStack_48c._2_2_;
    uStack_48c = uVar3;
    uVar3 = uStack_48c;
    uStack_48c._2_2_ = uVar5;
    uVar26 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_e0);
    uVar3 = uStack_48c;
    if ((uVar26 & 1) != 0) {
      uVar5 = uStack_48c._2_2_;
      uStack_48c = uVar3;
      uVar3 = uStack_48c;
      uStack_48c._2_2_ = uVar5;
      FUN_710392e1f0(&local_a8,0x10,(long ****)0xf20,param_4,param_5,param_6,param_7,param_8);
      uVar3 = uStack_48c;
    }
  }
  uStack_48c = uVar3;
  uVar5 = uStack_48c._2_2_;
  pppplVar21 = local_a8;
  uVar3 = uStack_48c;
  uStack_48c._2_2_ = uVar5;
  nu::VirtualAllocHook(0xf20,0x10,local_a8);
  pppplVar29 = local_a8;
  FUN_71037c3a70(local_a8);
  uVar3 = uStack_48c;
  *(undefined4 *)(pppplVar29 + 2) = 0;
  *(undefined1 *)((long)pppplVar29 + 0x14) = 0;
  pppplVar29[0x1e3] = (long ***)0x0;
  *pppplVar29 = (long ***)&PTR_thunk_FUN_71037d83e0_7105243798;
  uStack_db._3_1_ = (byte)pppplVar29;
  uStack_d7 = (undefined4)((ulong)pppplVar29 >> 8);
  uStack_d3 = (undefined3)((ulong)pppplVar29 >> 0x28);
  if (pppplVar29 == (long ****)0x0) {
    local_c8 = (long **)0x0;
    local_d0 = (long ***)0x0;
  }
  else {
    local_d0 = pppplVar29[1];
    local_c8 = *local_d0;
  }
  local_e0 = (undefined1  [5])0x7105231bf0;
  uStack_db = (uint)uStack_db._3_1_ << 0x18;
  uVar5 = uStack_48c._2_2_;
  uStack_48c = uVar3;
  uVar3 = uStack_48c;
  uStack_48c._2_2_ = uVar5;
  (*(code *)(*pppplVar29)[2])(auStack_4a8,pppplVar29,&local_4a0);
  uVar3 = uStack_48c;
  uVar5 = uStack_48c._2_2_;
  uStack_48c = uVar3;
  uVar3 = uStack_48c;
  uStack_48c._2_2_ = uVar5;
  FUN_71035e90a0((long *)&local_3c0,(long)local_e0,pppplVar21,param_4,param_5,param_6,param_7,
                 param_8);
  uVar3 = uStack_48c;
  uVar5 = uStack_48c._2_2_;
  uStack_48c = uVar3;
  uVar3 = uStack_48c;
  uStack_48c._2_2_ = uVar5;
  iVar8 = FUN_710392e1f0(&local_c0,0x10,(long ****)0x698,param_4,param_5,param_6,param_7,param_8);
  uVar3 = uStack_48c;
  if ((iVar8 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_a8 = (long ****)0x698;
    uVar5 = uStack_48c._2_2_;
    uStack_48c = uVar3;
    uVar3 = uStack_48c;
    uStack_48c._2_2_ = uVar5;
    uVar26 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_a8);
    uVar3 = uStack_48c;
    if ((uVar26 & 1) != 0) {
      uVar5 = uStack_48c._2_2_;
      uStack_48c = uVar3;
      uVar3 = uStack_48c;
      uStack_48c._2_2_ = uVar5;
      FUN_710392e1f0(&local_c0,0x10,(long ****)0x698,param_4,param_5,param_6,param_7,param_8);
      uVar3 = uStack_48c;
    }
  }
  uStack_48c = uVar3;
  uVar5 = uStack_48c._2_2_;
  uVar3 = uStack_48c;
  uStack_48c._2_2_ = uVar5;
  nu::VirtualAllocHook(0x698,0x10,local_c0);
  pppplVar29 = local_c0;
  FUN_71037c3a70(local_c0);
  uVar3 = uStack_48c;
  *pppplVar29 = (long ***)&PTR_FUN_710526f908;
  pppplVar29[9] = (long ***)0x0;
  pppplVar29[8] = (long ***)(pppplVar29 + 9);
  pppplVar29[0x18] = (long ***)(pppplVar29 + 0x1b);
  pppplVar29[0x19] = (long ***)0x0;
  pppplVar29[0x1a] = (long ***)&DAT_00000010;
  pppplVar29[0x6d] = (long ***)&DAT_00000010;
  pppplVar29[0xc6] = (long ***)&PTR_FUN_7105231d18;
  pppplVar29[0xca] = (long ***)&PTR_FUN_7105231d18;
  pppplVar29[10] = (long ***)0x0;
  pppplVar29[0xb] = (long ***)0x0;
  *(undefined4 *)(pppplVar29 + 0x17) = 0;
  pppplVar29[0xc] = (long ***)0x0;
  pppplVar29[0x6b] = (long ***)(pppplVar29 + 0x6e);
  pppplVar29[0x6c] = (long ***)0x0;
  pppplVar29[0xc2] = (long ***)0x0;
  pppplVar29[0xc1] = (long ***)0x0;
  pppplVar29[0xc0] = (long ***)0x0;
  pppplVar29[0xbf] = (long ***)&PTR_FUN_7105232e00;
  *(undefined4 *)(pppplVar29 + 0xbe) = 0;
  pppplVar29[0xc5] = (long ***)0x0;
  pppplVar29[0xc4] = (long ***)0x0;
  pppplVar29[0xc3] = (long ***)0x0;
  pppplVar29[0xc9] = (long ***)0x0;
  pppplVar29[200] = (long ***)0x0;
  pppplVar29[199] = (long ***)0x0;
  pppplVar29[0xcd] = (long ***)0x0;
  pppplVar29[0xcc] = (long ***)0x0;
  pppplVar29[0xcb] = (long ***)0x0;
  pppplVar29[0xd1] = (long ***)0x0;
  pppplVar29[0xd0] = (long ***)0x0;
  pppplVar29[0xcf] = (long ***)0x0;
  pppplVar29[0xce] = (long ***)&PTR_FUN_7105232dc0;
  *(undefined2 *)(pppplVar29 + 0xd2) = 0;
  pppplVar29[6] = (long ***)0x0;
  pppplVar29[7] = (long ***)0x0;
  pppplVar29[4] = (long ***)0x0;
  pppplVar29[5] = (long ***)0x0;
  pppplVar29[2] = (long ***)0x0;
  pppplVar29[3] = (long ***)0x0;
  pppplVar29[0x15] = (long ***)0x0;
  pppplVar29[0x16] = (long ***)0x0;
  pppplVar29[0x13] = (long ***)0x0;
  pppplVar29[0x14] = (long ***)0x0;
  pppplVar29[0x11] = (long ***)0x0;
  pppplVar29[0x12] = (long ***)0x0;
  pppplVar29[0xf] = (long ***)0x0;
  pppplVar29[0x10] = (long ***)0x0;
  pppplVar29[0xd] = (long ***)0x0;
  pppplVar29[0xe] = (long ***)0x0;
  uVar5 = uStack_48c._2_2_;
  uStack_48c = uVar3;
  uVar3 = uStack_48c;
  uStack_48c._2_2_ = uVar5;
  FUN_7103886f60((long)pppplVar29,&local_448,1,1,param_5,param_6,param_7,param_8);
  uVar3 = uStack_48c;
  if (pppplVar29 == (long ****)0x0) {
    ppplVar15 = (long ***)0x0;
    pplVar17 = (long **)0x0;
  }
  else {
    ppplVar15 = pppplVar29[1];
    pplVar17 = *ppplVar15;
  }
  plVar12 = *(long **)(param_1 + 8);
  plVar16 = *(long **)(param_1 + 0x10);
  *(long *****)(param_1 + 8) = pppplVar29;
  *(long ****)(param_1 + 0x10) = ppplVar15;
  lVar18 = *(long *)(param_1 + 0x18);
  *(long ***)(param_1 + 0x18) = pplVar17;
  if (((plVar16 != (long *)0x0) && (plVar12 != (long *)0x0)) && (*plVar16 == lVar18)) {
    uVar5 = uStack_48c._2_2_;
    uStack_48c = uVar3;
    uVar3 = uStack_48c;
    uStack_48c._2_2_ = uVar5;
    (**(code **)(*plVar12 + 8))();
    uVar5 = uStack_48c._2_2_;
    uVar3 = uStack_48c;
    uStack_48c._2_2_ = uVar5;
  }
  uStack_48c = uVar3;
  uVar5 = uStack_48c._2_2_;
  local_e0 = (undefined1  [5])0x7105231bf0;
  bVar4 = uStack_db._3_1_;
  uStack_db = (uint)uStack_db._3_1_ << 0x18;
  uVar3 = uStack_48c;
  if (((local_d0 != (long ***)0x0) && (*local_d0 == local_c8)) &&
     (plVar12 = (long *)CONCAT35(uStack_d3,CONCAT41(uStack_d7,bVar4)), plVar12 != (long *)0x0)) {
    uStack_48c._2_2_ = uVar5;
    (**(code **)(*plVar12 + 8))();
    uVar3 = uStack_48c;
    uVar5 = uStack_48c._2_2_;
  }
  uStack_48c._2_2_ = uVar5;
  uStack_48c = uVar3;
  uVar5 = uStack_48c._2_2_;
  uVar3 = uStack_48c;
  if (puVar9 != (undefined8 *)0x0) {
    uStack_48c._2_2_ = uVar5;
    FUN_710392eb40((ulong)puVar9);
    uVar3 = uStack_48c;
    uVar5 = uStack_48c._2_2_;
  }
  uStack_48c._2_2_ = uVar5;
  uStack_48c = uVar3;
  uVar5 = uStack_48c._2_2_;
  uVar3 = uStack_48c;
  uStack_48c._2_2_ = uVar5;
  FUN_71035e9280((byte *)&local_448);
  puVar22 = local_90;
  uVar3 = uStack_48c;
  puVar23 = local_90;
  puVar9 = local_88;
  uVar5 = uStack_48c._2_2_;
  if (local_90 != (undefined8 *)0x0) {
    while (uStack_48c = uVar3, local_90 = puVar23, uStack_48c._2_2_ = uVar5, puVar9 != puVar22) {
      puVar9 = puVar9 + -4;
      uVar3 = uStack_48c;
      (**(code **)*puVar9)(puVar9);
      uVar3 = uStack_48c;
      puVar23 = local_90;
      uVar5 = uStack_48c._2_2_;
    }
    local_88 = puVar22;
    uVar3 = uStack_48c;
    nu::VirtualFreeHook(puVar23);
    FUN_710392eb40((ulong)puVar23);
  }
  return;
}

