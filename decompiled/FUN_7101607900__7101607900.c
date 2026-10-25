// addr:      7101607900
// offset:    0x1607900
// name:      FUN_7101607900
// mangled:   
// signature: undefined __cdecl FUN_7101607900(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, undefined * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101607900(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined8 extraout_x1;
  long *********ppppppppplVar10;
  char *pcVar11;
  code *pcVar12;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  long ********pppppppplVar16;
  uint uVar17;
  byte *pbVar18;
  ulong uVar19;
  long lVar20;
  ulong *puVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  long ********pppppppplVar25;
  long lVar26;
  ulong *puVar27;
  ulong *puVar28;
  long *plVar29;
  ulong *puVar30;
  long *plVar31;
  uint local_198;
  uint local_194;
  long ********local_190;
  long *plStack_188;
  uint local_180 [2];
  byte local_178 [256];
  undefined2 local_78;
  uint local_70 [4];
  
  local_198 = *(uint *)(param_1 + 0x10);
  lVar26 = **(long **)(param_1 + 8);
  pcVar12 = (code *)param_5;
  if (local_198 != 0xffffff) {
    FUN_7103540a00(DAT_7105332f20,local_198);
    pcVar12 = (code *)param_5;
  }
  lVar20 = DAT_7105332f20;
  uVar24 = *(uint *)(param_1 + 0x14);
  local_194 = uVar24;
  if ((uVar24 != 0xffffff) && (uVar24 < *(uint *)(DAT_7105332f20 + 0x48))) {
    std::recursive_mutex::lock();
    lVar13 = *(long *)(lVar20 + 0x40);
    if ((*(byte *)(lVar13 + (ulong)uVar24 * 0x48 + 8) & 1) == 0) {
      std::recursive_mutex::unlock();
      FUN_7103540d50(lVar20,uVar24,param_3,param_4,(long ****)pcVar12,param_6,param_7,param_8);
    }
    else {
      FUN_71035432d0((int *)(lVar13 + (ulong)uVar24 * 0x48));
      std::recursive_mutex::unlock();
    }
  }
  iVar6 = *(int *)(param_1 + 0x18);
  std::mutex::lock();
  lVar26 = lVar26 + (long)iVar6 * 0x18;
  plVar3 = (long *)(lVar26 + 0x12950);
  plVar4 = (long *)(lVar26 + 0x12958);
  uVar24 = 0;
  while( true ) {
    local_78 = 0;
    local_178[0] = 0;
    FUN_710147f330((long)local_178,"c%02d",(ulong)uVar24,param_4,pcVar12,param_6,param_7,param_8);
    uVar22 = (uint)local_178[0];
    if (local_178[0] == 0) {
      uVar19 = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      uVar17 = 0xffffffff;
      pbVar18 = (byte *)((ulong)local_178 | 1);
      do {
        uVar5 = uVar22 + 0x20;
        if (0x19 < uVar22 - 0x41) {
          uVar5 = uVar22;
        }
        uVar17 = (&DAT_7104754084)[(uVar5 ^ uVar17) & 0xff] ^ uVar17 >> 8;
        uVar22 = (uint)*pbVar18;
        uVar14 = uVar14 + 0x100000000;
        pbVar18 = pbVar18 + 1;
      } while (uVar22 != 0);
      uVar19 = (ulong)~uVar17;
      uVar14 = uVar14 & 0xff00000000;
    }
    ppppppppplVar10 = (long *********)(uVar14 | uVar19);
    FUN_710353e380(local_180,local_194,(long ****)ppppppppplVar10,param_4,(long ****)pcVar12,param_6
                   ,param_7,param_8);
    if (local_180[0] == 0xffffff) {
      plVar29 = (long *)0x0;
      pppppppplVar25 = (long ********)0x0;
    }
    else {
      pcVar11 = "model.numdlb";
      FUN_710353e1d0((uint *)&local_190,local_180,(byte *)"model.numdlb");
      uVar22 = (uint)local_190;
      uVar14 = (ulong)local_190 & 0xffffffff;
      if ((uint)local_190 != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,(uint)local_190,(long *********)pcVar11,param_4,
                       (long ****)pcVar12,param_6,param_7,param_8);
      }
      if ((uVar22 == 0xffffff) ||
         (lVar20 = **(long **)(DAT_7105332f20 + 0x78),
         *(uint *)(*(long *)(lVar20 + 0x40) + 4) <= uVar22)) {
        local_190 = (long ********)0x0;
      }
      else {
        local_190 = (long ********)
                    (*(ulong *)(*(long *)(lVar20 + 0x60) + uVar14 * 0x20) & 0xffffffffff);
      }
      lVar20 = (*(long **)(DAT_7105332f20 + 0x78))[1];
      param_4 = (byte ****)&DAT_00000008;
      pcVar12 = FUN_7103542240;
      puVar9 = bsearch(&local_190,*(void **)(lVar20 + 0x20),
                       (ulong)*(uint *)(*(long *)(lVar20 + 8) + 8),8,FUN_7103542240);
      local_70[0] = 0xffffff;
      if (puVar9 != (undefined8 *)0x0) {
        uVar22 = (uint)((ulong)*puVar9 >> 0x20);
        uVar17 = uVar22 >> 8;
        if ((uVar17 != 0xffffff) &&
           (uVar5 = *(uint *)(*(long *)(lVar20 + 8) + 4), local_70[0] = uVar22 >> 8,
           uVar5 < uVar17 || uVar5 == local_70[0])) {
          local_70[0] = 0xffffff;
        }
      }
      ppppppppplVar10 = (long *********)0x2;
      FUN_71035c2890(&local_190,local_70,(long *********)0x2,param_4,(long ****)pcVar12,param_6,
                     param_7,param_8);
      plVar29 = plStack_188;
      pppppppplVar25 = local_190;
      local_190 = (long ********)0x0;
      plStack_188 = (long *)0x0;
    }
    puVar27 = (ulong *)*plVar4;
    puVar15 = *(ulong **)(lVar26 + 0x12960);
    if (puVar15 <= puVar27) break;
    *puVar27 = (ulong)pppppppplVar25;
    puVar27[1] = (ulong)plVar29;
    if (plVar29 != (long *)0x0) {
      plVar31 = plVar29 + 1;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar31,0x10);
        if (bVar8) {
          *plVar31 = *plVar31 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    *plVar4 = *plVar4 + 0x10;
joined_r0x007101607e5c:
    if (plVar29 != (long *)0x0) {
      plVar31 = plVar29 + 1;
      do {
        lVar20 = *plVar31;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar31,0x10);
        if (bVar8) {
          *plVar31 = lVar20 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
        std::__shared_weak_count::__release_weak();
      }
    }
    lVar20 = DAT_7105332f20;
    uVar14 = (ulong)local_180[0];
    if (local_180[0] != 0xffffff) {
      if (local_180[0] < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar13 = *(long *)(lVar20 + 0x40);
        if ((*(byte *)(lVar13 + uVar14 * 0x48 + 8) & 1) != 0) {
          FUN_710353f5a0(lVar20,(int *)(lVar13 + uVar14 * 0x48),(long ****)ppppppppplVar10,param_4,
                         (long ****)pcVar12,param_6,param_7,param_8);
        }
        std::recursive_mutex::unlock();
      }
      local_180[0] = 0xffffff;
    }
    uVar24 = uVar24 + 1;
    if ((int)(&DAT_7105071fd4)[(long)iVar6 * 8] <= (int)uVar24) {
      std::mutex::unlock();
      FUN_710353f120(&local_198,extraout_x1,ppppppppplVar10,param_4,(long ****)pcVar12,param_6,
                     param_7,param_8);
      return;
    }
  }
  puVar30 = (ulong *)*plVar3;
  lVar20 = (long)puVar27 - (long)puVar30 >> 4;
  uVar14 = lVar20 + 1;
  if (uVar14 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar13 = (long)puVar15 - (long)puVar30;
  if ((ulong)(lVar13 >> 4) < 0x7ffffffffffffff) {
    uVar19 = lVar13 >> 3;
    if (uVar14 <= uVar19) {
      uVar14 = uVar19;
    }
    if (uVar14 == 0) {
      lVar13 = 0;
      goto LAB_7101607cb4;
    }
    if (uVar14 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    uVar14 = 0xfffffffffffffff;
  }
  pppppppplVar16 = (long ********)(uVar14 * 0x10);
  if (pppppppplVar16 == (long ********)0x0) {
    pppppppplVar16 = (long ********)0x1;
  }
  lVar13 = FUN_710392e290(0x10,pppppppplVar16,(long ****)ppppppppplVar10,param_4,(long ****)pcVar12,
                          param_6,param_7,param_8);
  if (lVar13 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70[0] = 0;
      ppppppppplVar10 = &local_190;
      local_190 = pppppppplVar16;
      uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_70);
      if (((uVar19 & 1) != 0) &&
         (lVar13 = FUN_710392e290(0x10,pppppppplVar16,(long ****)ppppppppplVar10,param_4,
                                  (long ****)pcVar12,param_6,param_7,param_8), lVar13 != 0))
      goto LAB_7101607cb4;
    }
    lVar13 = 0;
  }
LAB_7101607cb4:
  puVar15 = (ulong *)(lVar13 + lVar20 * 0x10);
  *puVar15 = (ulong)pppppppplVar25;
  puVar15[1] = (ulong)plVar29;
  if (plVar29 != (long *)0x0) {
    plVar31 = plVar29 + 1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar8) {
        *plVar31 = *plVar31 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    puVar30 = (ulong *)*plVar3;
    puVar27 = (ulong *)*plVar4;
  }
  puVar1 = puVar15 + 2;
  if (puVar27 != puVar30) {
    uVar19 = (long)puVar27 + (-0x10 - (long)puVar30);
    puVar21 = puVar15;
    puVar28 = puVar27;
    if (((uint)uVar19 >> 4 & 1) == 0) {
      puVar28 = puVar27 + -2;
      puVar21 = puVar15 + -2;
      *puVar21 = *puVar28;
      puVar15[-1] = puVar27[-1];
      *puVar28 = 0;
      puVar27[-1] = 0;
    }
    if (0xf < uVar19) {
      uVar23 = (long)puVar28 + (-0x20 - (long)puVar30);
      puVar27 = puVar28;
      if (((uint)uVar23 >> 5 & 1) == 0) {
        puVar21[-2] = puVar28[-2];
        puVar21[-1] = puVar28[-1];
        puVar28[-2] = 0;
        puVar28[-1] = 0;
        puVar27 = puVar28 + -4;
        puVar21[-4] = *puVar27;
        puVar21[-3] = puVar28[-3];
        puVar21 = puVar21 + -4;
        *puVar27 = 0;
        puVar28[-3] = 0;
      }
      if (0x1f < uVar23) {
        puVar21 = puVar21 + -4;
        do {
          puVar21[2] = puVar27[-2];
          puVar21[3] = puVar27[-1];
          puVar27[-2] = 0;
          puVar27[-1] = 0;
          *puVar21 = puVar27[-4];
          puVar21[1] = puVar27[-3];
          puVar27[-4] = 0;
          puVar27[-3] = 0;
          puVar21[-2] = puVar27[-6];
          puVar21[-1] = puVar27[-5];
          puVar27[-6] = 0;
          puVar27[-5] = 0;
          puVar15 = puVar27 + -8;
          puVar21[-4] = *puVar15;
          puVar21[-3] = puVar27[-7];
          puVar21 = puVar21 + -8;
          *puVar15 = 0;
          puVar27[-7] = 0;
          puVar27 = puVar15;
        } while (puVar30 != puVar15);
      }
    }
    puVar30 = (ulong *)*plVar3;
    puVar27 = (ulong *)*plVar4;
    puVar15 = (ulong *)(lVar13 + (lVar20 + (uVar19 >> 4 ^ 0xffffffffffffffff)) * 0x10);
  }
  *plVar3 = (long)puVar15;
  *plVar4 = (long)puVar1;
  *(ulong *)(lVar26 + 0x12960) = lVar13 + uVar14 * 0x10;
joined_r0x007101607df4:
  if (puVar27 != puVar30) {
    do {
      plVar31 = (long *)puVar27[-1];
      puVar27 = puVar27 + -2;
      if (plVar31 != (long *)0x0) {
        plVar2 = plVar31 + 1;
        do {
          lVar20 = *plVar2;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = lVar20 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar20 == 0) goto LAB_7101607e28;
      }
      if (puVar27 == puVar30) break;
    } while( true );
  }
  if (puVar30 != (ulong *)0x0) {
    FUN_710392eb40((ulong)puVar30);
  }
  goto joined_r0x007101607e5c;
LAB_7101607e28:
  (**(code **)(*plVar31 + 0x10))(plVar31);
  std::__shared_weak_count::__release_weak();
  goto joined_r0x007101607df4;
}

