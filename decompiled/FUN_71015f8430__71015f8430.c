// addr:      71015f8430
// offset:    0x15f8430
// name:      FUN_71015f8430
// mangled:   
// signature: undefined __cdecl FUN_71015f8430(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71015f8430(long *param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong *puVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  uint *puVar9;
  long lVar10;
  long *********ppppppppplVar11;
  long *********ppppppppplVar12;
  byte ****ppppbVar13;
  long lVar14;
  ulong *puVar15;
  ulong *puVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  byte ****ppppbVar22;
  long lVar23;
  long lVar24;
  long local_190;
  long local_188;
  uint local_180 [2];
  byte local_178;
  byte abStack_177 [255];
  long ********local_78;
  undefined4 local_6c [3];
  
  lVar23 = *param_1;
  FUN_710353da30(local_180,0x1b38b2332e);
  uVar18 = local_180[0];
  uVar19 = *(uint *)(lVar23 + 0x8104c);
  if (uVar19 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,uVar19,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  *(uint *)(lVar23 + 0x8104c) = uVar18;
  FUN_710353da30(local_180,0x20d1614079);
  uVar18 = local_180[0];
  uVar19 = *(uint *)(lVar23 + 0x81050);
  if (uVar19 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,uVar19,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  *(uint *)(lVar23 + 0x81050) = uVar18;
  FUN_710353da30(local_180,0x2215d12962);
  uVar19 = local_180[0];
  if (*(uint *)(lVar23 + 0x81054) != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,*(uint *)(lVar23 + 0x81054),param_3,param_4,param_5,param_6,
                   param_7,param_8);
  }
  *(uint *)(lVar23 + 0x81054) = uVar19;
  FUN_710353da30(local_180,0x200c4e12ce);
  uVar19 = local_180[0];
  if (*(uint *)(lVar23 + 0x81058) != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,*(uint *)(lVar23 + 0x81058),param_3,param_4,param_5,param_6,
                   param_7,param_8);
  }
  *(uint *)(lVar23 + 0x81058) = uVar19;
  FUN_710353da30(local_180,0x29592d4f07);
  uVar19 = local_180[0];
  if (*(uint *)(lVar23 + 0x8105c) != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,*(uint *)(lVar23 + 0x8105c),param_3,param_4,param_5,param_6,
                   param_7,param_8);
  }
  *(uint *)(lVar23 + 0x8105c) = uVar19;
  FUN_710353da30(local_180,0x2bc24f8bda);
  uVar19 = local_180[0];
  if (*(uint *)(lVar23 + 0x81060) != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,*(uint *)(lVar23 + 0x81060),param_3,param_4,param_5,param_6,
                   param_7,param_8);
  }
  *(uint *)(lVar23 + 0x81060) = uVar19;
  FUN_710353da30(local_180,0x2c0face608);
  uVar19 = local_180[0];
  if (*(uint *)(lVar23 + 0x81064) != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,*(uint *)(lVar23 + 0x81064),param_3,param_4,param_5,param_6,
                   param_7,param_8);
  }
  *(uint *)(lVar23 + 0x81064) = uVar19;
  puVar15 = *(ulong **)(**(long **)(DAT_7105332f20 + 0x78) + 0x70);
  uVar19 = *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 0xc);
  uVar20 = (ulong)uVar19;
  puVar2 = puVar15 + uVar20;
  puVar16 = puVar15;
  if (uVar19 != 0) {
    do {
      uVar21 = uVar20;
      if ((long)uVar20 < 0) {
        uVar21 = uVar20 + 1;
      }
      uVar21 = (long)uVar21 >> 1;
      puVar15 = puVar16 + uVar21 + 1;
      uVar20 = uVar20 + ~uVar21;
      if (0x10eb5d1a4d < (puVar16[uVar21] & 0xfffffffffe)) {
        puVar15 = puVar16;
        uVar20 = uVar21;
      }
      puVar16 = puVar15;
    } while (uVar20 != 0);
  }
  if ((puVar15 == puVar2) || ((*puVar15 & 0xffffffffff) != 0x10eb5d1a4e)) {
    uVar19 = 0xffffff;
  }
  else {
    uVar19 = (uint)(*puVar15 >> 0x28);
  }
  puVar9 = FUN_7103540d50(DAT_7105332f20,uVar19,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar24 = DAT_7105332f20;
  puVar3 = &DAT_7104471f50;
  if (puVar9 != (uint *)0x0) {
    puVar3 = puVar9;
  }
  uVar19 = *(uint *)(lVar23 + 0x81068);
  uVar18 = *puVar3;
  if ((uVar19 != 0xffffff) && (uVar19 < *(uint *)(DAT_7105332f20 + 0x48))) {
    std::recursive_mutex::lock();
    lVar14 = *(long *)(lVar24 + 0x40);
    if ((*(byte *)(lVar14 + (ulong)uVar19 * 0x48 + 8) & 1) != 0) {
      FUN_710353f5a0(lVar24,(int *)(lVar14 + (ulong)uVar19 * 0x48),(long ****)param_3,param_4,
                     param_5,param_6,param_7,param_8);
    }
    std::recursive_mutex::unlock();
  }
  *(uint *)(lVar23 + 0x81068) = uVar18;
  FUN_710353da30(local_180,0x2719e5ab31);
  if (*(uint *)(lVar23 + 0x8106c) != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,*(uint *)(lVar23 + 0x8106c),param_3,param_4,param_5,param_6,
                   param_7,param_8);
  }
  lVar24 = 0;
  *(uint *)(lVar23 + 0x8106c) = local_180[0];
  do {
    ppppbVar22 = *(byte *****)((long)&PTR_s_assist_7105071fe0 + ((lVar24 << 0x20) >> 0x1b));
    lVar14 = (long)(int)lVar24;
    ppppppppplVar12 = (long *********)"assist";
    if ((0x72 < lVar14 - 0xa6U) &&
       (ppppppppplVar12 = (long *********)"pokemon", 0x46 < lVar14 - 0x119U)) {
      ppppppppplVar12 = (long *********)&DAT_71042c3080;
      if (lVar14 - 0x160U < 0x4a) {
        ppppppppplVar12 = (long *********)&DAT_7104349902;
      }
    }
    local_178 = 0;
    local_180[0] = 0;
    local_180[1] = 0;
    ppppppppplVar11 = ppppppppplVar12;
    ppppbVar13 = ppppbVar22;
    FUN_710059c310(local_180,"%s/%s/param/param.prc");
    uVar19 = (uint)local_178;
    if (local_178 == 0) {
      uVar21 = 0;
      uVar20 = 0;
    }
    else {
      uVar20 = 0;
      uVar18 = 0xffffffff;
      pbVar17 = abStack_177;
      do {
        uVar5 = uVar19 + 0x20;
        if (0x19 < uVar19 - 0x41) {
          uVar5 = uVar19;
        }
        uVar18 = (&DAT_7104754084)[(uVar5 ^ uVar18) & 0xff] ^ uVar18 >> 8;
        uVar19 = (uint)*pbVar17;
        uVar20 = uVar20 + 0x100000000;
        pbVar17 = pbVar17 + 1;
      } while (uVar19 != 0);
      uVar21 = (ulong)~uVar18;
      uVar20 = uVar20 & 0xff00000000;
    }
    FUN_710353da30((uint *)&local_78,uVar20 | uVar21);
    lVar14 = lVar23 + lVar24 * 4;
    puVar3 = (uint *)(lVar14 + 0x81070);
    uVar19 = *puVar3;
    uVar18 = (uint)local_78;
    if (uVar19 != 0xffffff) {
      FUN_7103540b10(DAT_7105332f20,uVar19,ppppppppplVar11,ppppbVar13,param_5,param_6,param_7,
                     param_8);
    }
    *puVar3 = uVar18;
    if (uVar18 != 0xffffff) {
      lVar10 = FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar11,ppppbVar13,param_5,param_6,
                              param_7,param_8);
      if (lVar10 == 0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_6c[0] = 0;
          local_78 = (long ********)&DAT_00000030;
          ppppppppplVar11 = &local_78;
          uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
          if (((uVar20 & 1) != 0) &&
             (lVar10 = FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar11,ppppbVar13,param_5,
                                      param_6,param_7,param_8), lVar10 != 0)) goto LAB_71015f88b0;
        }
        lVar10 = 0;
      }
LAB_71015f88b0:
      *(undefined4 *)(lVar10 + 0x10) = 0xffffff;
      *(long *)lVar10 = lVar10;
      *(undefined1 **)(lVar10 + 8) = &DAT_7104742dbb;
      lVar4 = lVar23 + lVar24 * 8;
      *(undefined8 *)(lVar10 + 0x20) = 0;
      *(undefined8 *)(lVar10 + 0x28) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      uVar20 = *(ulong *)(lVar4 + 0x1e08);
      *(long *)(lVar4 + 0x1e08) = lVar10;
      if (uVar20 != 0) {
        if (*(uint *)(uVar20 + 0x10) != 0xffffff) {
          FUN_7103540b10(DAT_7105332f20,*(uint *)(uVar20 + 0x10),ppppppppplVar11,ppppbVar13,param_5,
                         param_6,param_7,param_8);
          *(undefined4 *)(uVar20 + 0x10) = 0xffffff;
        }
        FUN_710392eb40(uVar20);
      }
    }
    FUN_710059c310(local_180,"%s/%s/param/duet_param.prc");
    uVar19 = (uint)local_178;
    if (local_178 == 0) {
      uVar21 = 0;
      uVar20 = 0;
    }
    else {
      uVar20 = 0;
      uVar18 = 0xffffffff;
      pbVar17 = abStack_177;
      do {
        uVar5 = uVar19 + 0x20;
        if (0x19 < uVar19 - 0x41) {
          uVar5 = uVar19;
        }
        uVar18 = (&DAT_7104754084)[(uVar5 ^ uVar18) & 0xff] ^ uVar18 >> 8;
        uVar19 = (uint)*pbVar17;
        uVar20 = uVar20 + 0x100000000;
        pbVar17 = pbVar17 + 1;
      } while (uVar19 != 0);
      uVar21 = (ulong)~uVar18;
      uVar20 = uVar20 & 0xff00000000;
    }
    FUN_710353da30((uint *)&local_78,uVar20 | uVar21);
    puVar3 = (uint *)(lVar14 + 0x81730);
    uVar19 = *puVar3;
    uVar18 = (uint)local_78;
    if (uVar19 != 0xffffff) {
      FUN_7103540b10(DAT_7105332f20,uVar19,ppppppppplVar12,ppppbVar22,param_5,param_6,param_7,
                     param_8);
    }
    *puVar3 = uVar18;
    if (uVar18 != 0xffffff) {
      lVar14 = FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar12,ppppbVar22,param_5,param_6,
                              param_7,param_8);
      if (lVar14 == 0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_6c[0] = 0;
          local_78 = (long ********)&DAT_00000030;
          ppppppppplVar12 = &local_78;
          uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
          if (((uVar20 & 1) != 0) &&
             (lVar14 = FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar12,ppppbVar22,param_5,
                                      param_6,param_7,param_8), lVar14 != 0)) goto LAB_71015f8a00;
        }
        lVar14 = 0;
      }
LAB_71015f8a00:
      *(undefined4 *)(lVar14 + 0x10) = 0xffffff;
      *(long *)lVar14 = lVar14;
      *(undefined1 **)(lVar14 + 8) = &DAT_7104742dbb;
      lVar10 = lVar23 + lVar24 * 8;
      *(undefined8 *)(lVar14 + 0x20) = 0;
      *(undefined8 *)(lVar14 + 0x28) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      uVar20 = *(ulong *)(lVar10 + 0x2b88);
      *(long *)(lVar10 + 0x2b88) = lVar14;
      if (uVar20 != 0) {
        if (*(uint *)(uVar20 + 0x10) != 0xffffff) {
          FUN_7103540b10(DAT_7105332f20,*(uint *)(uVar20 + 0x10),ppppppppplVar12,ppppbVar22,param_5,
                         param_6,param_7,param_8);
          *(undefined4 *)(uVar20 + 0x10) = 0xffffff;
        }
        FUN_710392eb40(uVar20);
      }
    }
    plVar8 = lib::Singleton<app::StageManager>::instance_;
    lVar24 = lVar24 + 1;
    if (lVar24 == 0x1b0) {
      local_190 = *param_1;
      local_188 = param_1[1];
      if (local_188 != 0) {
        plVar1 = (long *)(local_188 + 0x10);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = *plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      FUN_710260db20(*plVar8,&local_190,(long ****)ppppppppplVar12,ppppbVar22,param_5,param_6,
                     param_7,param_8);
      if (local_188 != 0) {
        std::__shared_weak_count::__release_weak();
      }
      return;
    }
  } while( true );
}

