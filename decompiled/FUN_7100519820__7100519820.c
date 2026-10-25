// addr:      7100519820
// offset:    0x519820
// name:      FUN_7100519820
// mangled:   
// signature: undefined __cdecl FUN_7100519820(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


void FUN_7100519820(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long ***ppplVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar11;
  long *********ppppppppplVar12;
  long ****pppplVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  long ***local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_68 [2];
  
  lVar19 = 0;
  do {
    ppppppppplVar12 = (long *********)"model.numdlb";
    FUN_710353e1d0((uint *)&local_b0,(uint *)(param_1 + ((lVar19 << 0x20) >> 0x1e) + 0x5ac),
                   (byte *)"model.numdlb");
    uVar6 = (uint)local_b0;
    uVar17 = (ulong)local_b0 & 0xffffffff;
    if ((uint)local_b0 != 0xffffff) {
      FUN_7103540b10(DAT_7105332f20,(uint)local_b0,ppppppppplVar12,param_4,param_5,param_6,param_7,
                     param_8);
    }
    if ((uVar6 == 0xffffff) ||
       (lVar15 = **(long **)(DAT_7105332f20 + 0x78),
       *(uint *)(*(long *)(lVar15 + 0x40) + 4) <= uVar6)) {
      local_b0 = (long ***)0x0;
    }
    else {
      local_b0 = (long ***)(*(ulong *)(*(long *)(lVar15 + 0x60) + uVar17 * 0x20) & 0xffffffffff);
    }
    lVar15 = (*(long **)(DAT_7105332f20 + 0x78))[1];
    param_4 = (byte ****)&DAT_00000008;
    param_5 = (long ****)FUN_7103542240;
    puVar8 = bsearch(&local_b0,*(void **)(lVar15 + 0x20),(ulong)*(uint *)(*(long *)(lVar15 + 8) + 8)
                     ,8,FUN_7103542240);
    local_68[0] = 0xffffff;
    if (puVar8 != (undefined8 *)0x0) {
      uVar6 = (uint)((ulong)*puVar8 >> 0x20);
      uVar14 = uVar6 >> 8;
      if ((uVar14 != 0xffffff) &&
         (uVar2 = *(uint *)(*(long *)(lVar15 + 8) + 4), local_68[0] = uVar6 >> 8,
         uVar2 < uVar14 || uVar2 == local_68[0])) {
        local_68[0] = 0xffffff;
      }
    }
    pppplVar13 = (long ****)&DAT_00000004;
    FUN_71035c2890(&local_b0,local_68,(long *********)&DAT_00000004,param_4,param_5,param_6,param_7,
                   param_8);
    plVar10 = plStack_a8;
    ppplVar7 = local_b0;
    lVar15 = param_1 + (long)(int)lVar19 * 0x10;
    local_b0 = (long ***)0x0;
    plStack_a8 = (long *)0x0;
    plVar18 = *(long **)(lVar15 + 0x6b8);
    *(long ****)(lVar15 + 0x6b0) = ppplVar7;
    *(long **)(lVar15 + 0x6b8) = plVar10;
    if (plVar18 != (long *)0x0) {
      plVar10 = plVar18 + 1;
      do {
        lVar16 = *plVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plStack_a8 != (long *)0x0) {
      plVar10 = plStack_a8 + 1;
      do {
        lVar16 = *plVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        std::__shared_weak_count::__release_weak();
      }
    }
    plStack_a8 = (long *)0x0;
    local_b0 = (long ***)&DAT_3f800000;
    uStack_98 = 0;
    local_a0 = 0x3f80000000000000;
    uStack_88 = 0x3f800000;
    local_90 = 0;
    uStack_78 = 0x3f80000000000000;
    local_80 = 0;
    (**(code **)(**(long **)(lVar15 + 0x6b0) + 0x148))(*(long **)(lVar15 + 0x6b0),&local_b0);
    lVar19 = lVar19 + 1;
  } while (lVar19 != 0xd);
  lVar19 = 0;
  do {
    puVar8 = (undefined8 *)
             FUN_710392e290(0x10,200,pppplVar13,param_4,param_5,param_6,param_7,param_8);
    uVar11 = extraout_x1;
    if (puVar8 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_68[0] = 0;
        local_b0 = (long ***)&DAT_000000c8;
        pppplVar13 = &local_b0;
        auVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_68);
        uVar11 = auVar21._8_8_;
        if (((auVar21._0_8_ & 1) != 0) &&
           (puVar8 = (undefined8 *)
                     FUN_710392e290(0x10,200,pppplVar13,param_4,param_5,param_6,param_7,param_8),
           uVar11 = extraout_x1_00, puVar8 != (undefined8 *)0x0)) goto LAB_7100519aa0;
      }
      puVar8 = (undefined8 *)0x0;
    }
LAB_7100519aa0:
    *puVar8 = &PTR_FUN_7104f76000;
    puVar8[1] = 0;
    puVar8[2] = 0;
    FUN_710367adf0(puVar8 + 3,uVar11,pppplVar13,param_4,param_5,param_6,param_7,param_8);
    lVar15 = param_1 + ((lVar19 << 0x20) >> 0x1c);
    *(undefined8 **)(lVar15 + 0x5e0) = puVar8 + 3;
    plVar18 = *(long **)(lVar15 + 0x5e8);
    lVar16 = (long)(int)lVar19;
    plVar10 = (long *)(lVar15 + 0x5e0);
    *(undefined8 **)(lVar15 + 0x5e8) = puVar8;
    if (plVar18 != (long *)0x0) {
      plVar1 = plVar18 + 1;
      do {
        lVar15 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        std::__shared_weak_count::__release_weak();
      }
    }
    lVar15 = param_1 + lVar16 * 0x10;
    lVar9 = *plVar10;
    local_b0 = *(long ****)(lVar15 + 0x6b0);
    plStack_a8 = *(long **)(lVar15 + 0x6b8);
    if (plStack_a8 == (long *)0x0) {
      FUN_710367b2d0(lVar9,(long *)&local_b0,(undefined **)pppplVar13,param_4,param_5,param_6,
                     param_7,param_8);
    }
    else {
      plVar18 = (long *)((long)plStack_a8 + 0x10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = *plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_710367b2d0(lVar9,(long *)&local_b0,(undefined **)pppplVar13,param_4,param_5,param_6,
                     param_7,param_8);
      std::__shared_weak_count::__release_weak();
    }
    lVar15 = *plVar10;
    if (*(char *)(lVar15 + 0xa8) != '\0') {
      pppplVar13 = (long ****)(param_1 + lVar16 * 4 + 0x578);
      param_4 = (byte ****)0x0;
      (**(code **)(**(long **)(lVar15 + 0x98) + 0x10))(*(long **)(lVar15 + 0x98),0);
      lVar15 = *plVar10;
    }
    FUN_710367c160(0,lVar15,0);
    plVar18 = *(long **)(*plVar10 + 0x10);
    iVar3 = *(int *)(*plVar10 + 0xac);
    if (iVar3 == 1) {
      plVar18 = (long *)(**(code **)(*plVar18 + 0x38))(plVar18,1);
      plVar10 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
LAB_7100519bd0:
        plVar10 = (long *)(**(code **)(*plVar18 + 0x40))(plVar18,0);
      }
LAB_7100519be0:
      uVar20 = (**(code **)(*plVar10 + 0x88))();
    }
    else {
      uVar20 = 0;
      if (iVar3 == 0) {
        plVar18 = (long *)(**(code **)(*plVar18 + 0x38))(plVar18,0);
        if (plVar18 != (long *)0x0) goto LAB_7100519bd0;
        plVar10 = (long *)0x0;
        goto LAB_7100519be0;
      }
    }
    lVar19 = lVar19 + 1;
    *(undefined4 *)(param_1 + lVar16 * 0x14 + 0x474) = uVar20;
    if (lVar19 == 0xd) {
      return;
    }
  } while( true );
}

