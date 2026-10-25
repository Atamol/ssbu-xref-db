// addr:      7103583110
// offset:    0x3583110
// name:      FUN_7103583110
// mangled:   
// signature: undefined __cdecl FUN_7103583110(long param_1, undefined8 param_2, undefined8 param_3, char * param_4, byte * * * * param_5, byte * * * * param_6, byte * * * * param_7, long * * * * param_8)


void FUN_7103583110(long param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                   byte ****param_5,byte ****param_6,byte ****param_7,long ****param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  void *pvVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  long ****pppplVar15;
  char *pcVar16;
  long ****pppplVar17;
  long lVar18;
  ulong uVar19;
  long ***ppplVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  void *pvVar24;
  long *plVar25;
  long ****__n;
  undefined8 uVar26;
  size_t sVar27;
  ulong uVar28;
  long ***local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  long ***local_190;
  long local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  long ***local_170;
  long local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  long ***local_150;
  long local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  long ***local_130;
  long local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  long ***local_110;
  long local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  long ***local_f0;
  long local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long ***local_d0;
  long local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long ***local_b0;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined **local_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulong local_70 [2];
  
  lVar23 = *(long *)(param_1 + 8);
  std::mutex::lock();
  if (*(long *)(lVar23 + 0x18) == 0) {
    std::mutex::unlock();
    return;
  }
  plVar9 = (long *)(lVar23 + 0x10);
  if (*(long **)(lVar23 + 8) == plVar9) {
    bVar7 = false;
    bVar6 = false;
  }
  else {
    bVar6 = false;
    bVar7 = false;
    plVar22 = *(long **)(lVar23 + 8);
    do {
      while( true ) {
        param_4 = (char *)(lVar23 + 0x58);
        param_5 = (byte ****)(lVar23 + 0x60);
        param_6 = (byte ****)(lVar23 + 0x68);
        param_7 = (byte ****)(lVar23 + 0x70);
        param_8 = (long ****)(lVar23 + 0x78);
        FUN_7103578130(plVar22[4],lVar23 + 0x48,lVar23 + 0x50,(byte ****)(lVar23 + 0x58),
                       (byte ****)(lVar23 + 0x60),(byte ****)(lVar23 + 0x68),
                       (byte ****)(lVar23 + 0x70),(long ****)(lVar23 + 0x78),
                       (byte ****)(lVar23 + 0x80),(long ****)(lVar23 + 0x88));
        bVar6 = (bool)(bVar6 | *(char *)(plVar22[4] + 100) != '\0');
        bVar7 = (bool)(bVar7 | *(char *)(plVar22[4] + 99) != '\0');
        plVar25 = (long *)plVar22[1];
        if ((long *)plVar22[1] == (long *)0x0) break;
        do {
          plVar22 = plVar25;
          plVar25 = (long *)*plVar22;
        } while ((long *)*plVar22 != (long *)0x0);
LAB_7103583230:
        if (plVar22 == plVar9) goto LAB_7103583260;
      }
      plVar25 = plVar22 + 2;
      plVar13 = (long *)*plVar25;
      if ((long *)*plVar13 != plVar22) {
        do {
          lVar21 = *plVar25;
          plVar25 = (long *)(lVar21 + 0x10);
          plVar22 = (long *)*plVar25;
        } while (*plVar22 != lVar21);
        goto LAB_7103583230;
      }
      plVar22 = plVar13;
    } while (plVar13 != plVar9);
  }
LAB_7103583260:
  std::mutex::unlock();
  lVar18 = *(long *)(*(long *)(DAT_7105335480 + 0x68) + 0x18);
  lVar21 = *(long *)(lVar18 + 0x148);
  uVar2 = *(undefined8 *)(lVar18 + 0x150);
  uVar26 = *(undefined8 *)(lVar18 + 0x158);
  local_90 = &PTR_FUN_710522fd88;
  pppplVar15 = (long ****)0x1;
  local_88 = lVar21;
  uStack_80 = uVar2;
  local_78 = uVar26;
  puVar8 = FUN_710363fa50(**(long **)(lVar23 + 0x48),(long)&local_90,1);
  lVar18 = DAT_71053375a8;
  if (puVar8 != (undefined8 *)0x0) {
    std::mutex::lock();
    plVar9 = FUN_7103554700(*(long **)(lVar18 + 0x90),extraout_x1,pppplVar15,(byte ****)param_4,
                            (long ****)param_5,param_6,param_7,param_8);
    std::mutex::unlock();
    if (plVar9 != (long *)0x0) {
      local_a8 = 0;
      uStack_a0 = 0;
      local_b0 = (long ***)0x0;
      param_4 = "MiiModelRenderer::render";
      local_98 = 0xffffffffffffffff;
      pppplVar15 = &local_b0;
      param_5 = (byte ****)0x0;
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
      plVar22 = *(long **)(*DAT_710593b6a0 + 0x24e8);
      plVar25 = *(long **)(*DAT_710593b6a0 + 0x24f0);
      if (plVar25 != (long *)0x0) {
        plVar13 = plVar25 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = *plVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar10 = FUN_710381be50(lVar21);
      puVar12 = (undefined8 *)plVar9[0xe];
      plVar13 = plVar9 + 0xd;
      if (puVar12 < (undefined8 *)plVar9[0xf]) {
        *puVar12 = puVar10;
        puVar12 = (undefined8 *)(plVar9[0xe] + 8);
        plVar9[0xe] = (long)puVar12;
      }
      else {
        pvVar24 = (void *)*plVar13;
        pppplVar17 = (long ****)((long)puVar12 - (long)pvVar24);
        uVar28 = ((long)pppplVar17 >> 3) + 1;
        if (uVar28 >> 0x3d != 0) goto LAB_7103584dd0;
        lVar18 = plVar9[0xf] - (long)pvVar24;
        if ((ulong)(lVar18 >> 3) < 0xfffffffffffffff) {
          uVar19 = lVar18 >> 2;
          if (uVar28 <= uVar19) {
            uVar28 = uVar19;
          }
          if (uVar28 != 0) {
            if (uVar28 >> 0x3d != 0) goto LAB_7103584c9c;
            goto LAB_71035833d4;
          }
          pvVar14 = (void *)0x0;
        }
        else {
          uVar28 = 0x1fffffffffffffff;
LAB_71035833d4:
          ppplVar20 = (long ***)(uVar28 * 8);
          if (ppplVar20 == (long ***)0x0) {
            ppplVar20 = (long ***)0x1;
          }
          pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                           (long ****)param_5,param_6,param_7,param_8);
          if (pvVar14 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_d0 = (long ***)((ulong)local_d0 & 0xffffffff00000000);
              pppplVar15 = &local_b0;
              local_b0 = ppplVar20;
              uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
              if (((uVar19 & 1) != 0) &&
                 (pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                                   (long ****)param_5,param_6,param_7,param_8),
                 pvVar14 != (void *)0x0)) goto LAB_710358343c;
            }
            pvVar14 = (void *)0x0;
          }
        }
LAB_710358343c:
        puVar1 = (undefined8 *)((long)pvVar14 + ((long)pppplVar17 >> 3) * 8);
        puVar12 = puVar1 + 1;
        *puVar1 = puVar10;
        if (0 < (long)pppplVar17) {
          memcpy(pvVar14,pvVar24,(size_t)pppplVar17);
          pppplVar15 = pppplVar17;
        }
        plVar9[0xd] = (long)pvVar14;
        plVar9[0xe] = (long)puVar12;
        plVar9[0xf] = (long)((long)pvVar14 + uVar28 * 8);
        if (pvVar24 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar24);
          puVar12 = (undefined8 *)plVar9[0xe];
        }
      }
      if (puVar12 < (undefined8 *)plVar9[0xf]) {
        *puVar12 = puVar8;
        plVar9[0xe] = plVar9[0xe] + 8;
      }
      else {
        pvVar24 = (void *)*plVar13;
        sVar27 = (long)puVar12 - (long)pvVar24;
        uVar28 = ((long)sVar27 >> 3) + 1;
        if (uVar28 >> 0x3d != 0) goto LAB_7103584dcc;
        lVar18 = plVar9[0xf] - (long)pvVar24;
        if ((ulong)(lVar18 >> 3) < 0xfffffffffffffff) {
          uVar19 = lVar18 >> 2;
          if (uVar28 <= uVar19) {
            uVar28 = uVar19;
          }
          if (uVar28 != 0) {
            if (uVar28 >> 0x3d != 0) goto LAB_7103584c9c;
            goto LAB_71035834f0;
          }
          pvVar14 = (void *)0x0;
        }
        else {
          uVar28 = 0x1fffffffffffffff;
LAB_71035834f0:
          ppplVar20 = (long ***)(uVar28 * 8);
          if (ppplVar20 == (long ***)0x0) {
            ppplVar20 = (long ***)0x1;
          }
          pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                           (long ****)param_5,param_6,param_7,param_8);
          if (pvVar14 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_d0 = (long ***)((ulong)local_d0 & 0xffffffff00000000);
              pppplVar15 = &local_b0;
              local_b0 = ppplVar20;
              uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
              if (((uVar19 & 1) != 0) &&
                 (pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                                   (long ****)param_5,param_6,param_7,param_8),
                 pvVar14 != (void *)0x0)) goto LAB_7103583558;
            }
            pvVar14 = (void *)0x0;
          }
        }
LAB_7103583558:
        puVar12 = (undefined8 *)((long)pvVar14 + ((long)sVar27 >> 3) * 8);
        *puVar12 = puVar8;
        if (0 < (long)sVar27) {
          memcpy(pvVar14,pvVar24,sVar27);
        }
        plVar9[0xd] = (long)pvVar14;
        plVar9[0xe] = (long)(puVar12 + 1);
        plVar9[0xf] = (long)((long)pvVar14 + uVar28 * 8);
        if (pvVar24 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar24);
        }
      }
      local_b0 = (long ***)&DAT_00000080;
      local_d0 = (long ***)&DAT_00000010;
      plVar11 = *(long **)(lVar21 + 0x50);
      if (plVar11 == (long *)0x0) goto LAB_7103584c9c;
      puVar12 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,&local_b0,&local_d0);
      pppplVar15 = (long ****)(lVar21 + 0x60);
      FUN_71035b9760(puVar12,(long *)(lVar21 + 0x30),(long *)pppplVar15);
      puVar8 = (undefined8 *)plVar9[0xe];
      if (puVar8 < (undefined8 *)plVar9[0xf]) {
        *puVar8 = puVar12;
        plVar9[0xe] = plVar9[0xe] + 8;
      }
      else {
        pvVar24 = (void *)*plVar13;
        pppplVar17 = (long ****)((long)puVar8 - (long)pvVar24);
        uVar28 = ((long)pppplVar17 >> 3) + 1;
        if (uVar28 >> 0x3d != 0) goto LAB_7103584dcc;
        lVar18 = plVar9[0xf] - (long)pvVar24;
        if ((ulong)(lVar18 >> 3) < 0xfffffffffffffff) {
          uVar19 = lVar18 >> 2;
          if (uVar28 <= uVar19) {
            uVar28 = uVar19;
          }
          if (uVar28 != 0) {
            if (uVar28 >> 0x3d != 0) goto LAB_7103584c9c;
            goto LAB_7103583648;
          }
LAB_71035836a8:
          pvVar14 = (void *)0x0;
        }
        else {
          uVar28 = 0x1fffffffffffffff;
LAB_7103583648:
          ppplVar20 = (long ***)(uVar28 * 8);
          if (ppplVar20 == (long ***)0x0) {
            ppplVar20 = (long ***)0x1;
          }
          pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                           (long ****)param_5,param_6,param_7,param_8);
          if (pvVar14 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_d0 = (long ***)((ulong)local_d0 & 0xffffffff00000000);
              pppplVar15 = &local_b0;
              local_b0 = ppplVar20;
              uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
              if (((uVar19 & 1) != 0) &&
                 (pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                                   (long ****)param_5,param_6,param_7,param_8),
                 pvVar14 != (void *)0x0)) goto LAB_71035836ac;
            }
            goto LAB_71035836a8;
          }
        }
LAB_71035836ac:
        puVar8 = (undefined8 *)((long)pvVar14 + ((long)pppplVar17 >> 3) * 8);
        *puVar8 = puVar12;
        if (0 < (long)pppplVar17) {
          memcpy(pvVar14,pvVar24,(size_t)pppplVar17);
          pppplVar15 = pppplVar17;
        }
        plVar9[0xd] = (long)pvVar14;
        plVar9[0xe] = (long)(puVar8 + 1);
        plVar9[0xf] = (long)((long)pvVar14 + uVar28 * 8);
        if (pvVar24 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar24);
        }
      }
      FUN_7103555dc0(*(long *)(*plVar22 + 8),plVar9,pppplVar15,(byte ****)param_4,(long ****)param_5
                     ,param_6,param_7,param_8);
      if (plVar25 != (long *)0x0) {
        plVar9 = plVar25 + 1;
        do {
          lVar18 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  local_b0 = (long ***)&PTR_FUN_710522fd88;
  pppplVar15 = (long ****)0x1;
  local_a8 = lVar21;
  uStack_a0 = uVar2;
  local_98 = uVar26;
  puVar8 = FUN_710363fa50(**(long **)(lVar23 + 0x50),(long)&local_b0,1);
  lVar18 = DAT_71053375a8;
  if (puVar8 != (undefined8 *)0x0) {
    std::mutex::lock();
    plVar9 = FUN_7103554700(*(long **)(lVar18 + 0x90),extraout_x1_00,pppplVar15,(byte ****)param_4,
                            (long ****)param_5,param_6,param_7,param_8);
    std::mutex::unlock();
    if (plVar9 != (long *)0x0) {
      local_c8 = 0;
      uStack_c0 = 0;
      local_d0 = (long ***)0x0;
      param_4 = "MiiModelRenderer::render";
      local_b8 = 0xffffffffffffffff;
      pppplVar15 = &local_d0;
      param_5 = (byte ****)0x0;
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
      plVar22 = *(long **)(*DAT_710593b6a0 + 0x24e8);
      plVar25 = *(long **)(*DAT_710593b6a0 + 0x24f0);
      if (plVar25 != (long *)0x0) {
        plVar13 = plVar25 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = *plVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar10 = FUN_710381be50(lVar21);
      puVar12 = (undefined8 *)plVar9[0xe];
      plVar13 = plVar9 + 0xd;
      if (puVar12 < (undefined8 *)plVar9[0xf]) {
        *puVar12 = puVar10;
        puVar12 = (undefined8 *)(plVar9[0xe] + 8);
        plVar9[0xe] = (long)puVar12;
      }
      else {
        pvVar24 = (void *)*plVar13;
        pppplVar17 = (long ****)((long)puVar12 - (long)pvVar24);
        uVar28 = ((long)pppplVar17 >> 3) + 1;
        if (uVar28 >> 0x3d != 0) {
LAB_7103584dd0:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar18 = plVar9[0xf] - (long)pvVar24;
        if ((ulong)(lVar18 >> 3) < 0xfffffffffffffff) {
          uVar19 = lVar18 >> 2;
          if (uVar28 <= uVar19) {
            uVar28 = uVar19;
          }
          if (uVar28 != 0) {
            if (uVar28 >> 0x3d != 0) goto LAB_7103584c9c;
            goto LAB_710358387c;
          }
          pvVar14 = (void *)0x0;
        }
        else {
          uVar28 = 0x1fffffffffffffff;
LAB_710358387c:
          ppplVar20 = (long ***)(uVar28 * 8);
          if (ppplVar20 == (long ***)0x0) {
            ppplVar20 = (long ***)0x1;
          }
          pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                           (long ****)param_5,param_6,param_7,param_8);
          if (pvVar14 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_f0 = (long ***)((ulong)local_f0 & 0xffffffff00000000);
              pppplVar15 = &local_d0;
              local_d0 = ppplVar20;
              uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
              if (((uVar19 & 1) != 0) &&
                 (pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                                   (long ****)param_5,param_6,param_7,param_8),
                 pvVar14 != (void *)0x0)) goto LAB_71035838e4;
            }
            pvVar14 = (void *)0x0;
          }
        }
LAB_71035838e4:
        puVar1 = (undefined8 *)((long)pvVar14 + ((long)pppplVar17 >> 3) * 8);
        puVar12 = puVar1 + 1;
        *puVar1 = puVar10;
        if (0 < (long)pppplVar17) {
          memcpy(pvVar14,pvVar24,(size_t)pppplVar17);
          pppplVar15 = pppplVar17;
        }
        plVar9[0xd] = (long)pvVar14;
        plVar9[0xe] = (long)puVar12;
        plVar9[0xf] = (long)((long)pvVar14 + uVar28 * 8);
        if (pvVar24 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar24);
          puVar12 = (undefined8 *)plVar9[0xe];
        }
      }
      if (puVar12 < (undefined8 *)plVar9[0xf]) {
        *puVar12 = puVar8;
        plVar9[0xe] = plVar9[0xe] + 8;
      }
      else {
        pvVar24 = (void *)*plVar13;
        sVar27 = (long)puVar12 - (long)pvVar24;
        uVar28 = ((long)sVar27 >> 3) + 1;
        if (uVar28 >> 0x3d != 0) goto LAB_7103584dcc;
        lVar18 = plVar9[0xf] - (long)pvVar24;
        if ((ulong)(lVar18 >> 3) < 0xfffffffffffffff) {
          uVar19 = lVar18 >> 2;
          if (uVar28 <= uVar19) {
            uVar28 = uVar19;
          }
          if (uVar28 != 0) {
            if (uVar28 >> 0x3d != 0) goto LAB_7103584c9c;
            goto LAB_7103583998;
          }
          pvVar14 = (void *)0x0;
        }
        else {
          uVar28 = 0x1fffffffffffffff;
LAB_7103583998:
          ppplVar20 = (long ***)(uVar28 * 8);
          if (ppplVar20 == (long ***)0x0) {
            ppplVar20 = (long ***)0x1;
          }
          pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                           (long ****)param_5,param_6,param_7,param_8);
          if (pvVar14 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_f0 = (long ***)((ulong)local_f0 & 0xffffffff00000000);
              pppplVar15 = &local_d0;
              local_d0 = ppplVar20;
              uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
              if (((uVar19 & 1) != 0) &&
                 (pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                                   (long ****)param_5,param_6,param_7,param_8),
                 pvVar14 != (void *)0x0)) goto LAB_7103583a00;
            }
            pvVar14 = (void *)0x0;
          }
        }
LAB_7103583a00:
        puVar12 = (undefined8 *)((long)pvVar14 + ((long)sVar27 >> 3) * 8);
        *puVar12 = puVar8;
        if (0 < (long)sVar27) {
          memcpy(pvVar14,pvVar24,sVar27);
        }
        plVar9[0xd] = (long)pvVar14;
        plVar9[0xe] = (long)(puVar12 + 1);
        plVar9[0xf] = (long)((long)pvVar14 + uVar28 * 8);
        if (pvVar24 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar24);
        }
      }
      local_d0 = (long ***)&DAT_00000080;
      local_f0 = (long ***)&DAT_00000010;
      plVar11 = *(long **)(lVar21 + 0x50);
      if (plVar11 == (long *)0x0) goto LAB_7103584c9c;
      puVar12 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,&local_d0,&local_f0);
      pppplVar15 = (long ****)(lVar21 + 0x60);
      FUN_71035b9760(puVar12,(long *)(lVar21 + 0x30),(long *)pppplVar15);
      puVar8 = (undefined8 *)plVar9[0xe];
      if (puVar8 < (undefined8 *)plVar9[0xf]) {
        *puVar8 = puVar12;
        plVar9[0xe] = plVar9[0xe] + 8;
      }
      else {
        pvVar24 = (void *)*plVar13;
        pppplVar17 = (long ****)((long)puVar8 - (long)pvVar24);
        uVar28 = ((long)pppplVar17 >> 3) + 1;
        if (uVar28 >> 0x3d != 0) goto LAB_7103584dcc;
        lVar18 = plVar9[0xf] - (long)pvVar24;
        if ((ulong)(lVar18 >> 3) < 0xfffffffffffffff) {
          uVar19 = lVar18 >> 2;
          if (uVar28 <= uVar19) {
            uVar28 = uVar19;
          }
          if (uVar28 != 0) {
            if (uVar28 >> 0x3d != 0) goto LAB_7103584c9c;
            goto LAB_7103583af0;
          }
LAB_7103583b50:
          pvVar14 = (void *)0x0;
        }
        else {
          uVar28 = 0x1fffffffffffffff;
LAB_7103583af0:
          ppplVar20 = (long ***)(uVar28 * 8);
          if (ppplVar20 == (long ***)0x0) {
            ppplVar20 = (long ***)0x1;
          }
          pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                           (long ****)param_5,param_6,param_7,param_8);
          if (pvVar14 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_f0 = (long ***)((ulong)local_f0 & 0xffffffff00000000);
              pppplVar15 = &local_d0;
              local_d0 = ppplVar20;
              uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
              if (((uVar19 & 1) != 0) &&
                 (pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                                   (long ****)param_5,param_6,param_7,param_8),
                 pvVar14 != (void *)0x0)) goto LAB_7103583b54;
            }
            goto LAB_7103583b50;
          }
        }
LAB_7103583b54:
        puVar8 = (undefined8 *)((long)pvVar14 + ((long)pppplVar17 >> 3) * 8);
        *puVar8 = puVar12;
        if (0 < (long)pppplVar17) {
          memcpy(pvVar14,pvVar24,(size_t)pppplVar17);
          pppplVar15 = pppplVar17;
        }
        plVar9[0xd] = (long)pvVar14;
        plVar9[0xe] = (long)(puVar8 + 1);
        plVar9[0xf] = (long)((long)pvVar14 + uVar28 * 8);
        if (pvVar24 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar24);
        }
      }
      FUN_7103555dc0(*(long *)(*plVar22 + 0x48),plVar9,pppplVar15,(byte ****)param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      if (plVar25 != (long *)0x0) {
        plVar9 = plVar25 + 1;
        do {
          lVar18 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  iVar3 = *(int *)(DAT_7105338e40 + 8);
  if (iVar3 - 1U < 2) {
    local_d0 = (long ***)&PTR_FUN_710522fd88;
    pppplVar15 = (long ****)0x1;
    local_c8 = lVar21;
    uStack_c0 = uVar2;
    local_b8 = uVar26;
    puVar8 = FUN_710363fa50(**(long **)(lVar23 + 0x58),(long)&local_d0,1);
    lVar18 = DAT_71053375a8;
    if (puVar8 != (undefined8 *)0x0) {
      std::mutex::lock();
      plVar9 = FUN_7103554700(*(long **)(lVar18 + 0x90),extraout_x1_01,pppplVar15,(byte ****)param_4
                              ,(long ****)param_5,param_6,param_7,param_8);
      std::mutex::unlock();
      if (plVar9 != (long *)0x0) {
        local_e8 = 0;
        uStack_e0 = 0;
        local_f0 = (long ***)0x0;
        param_4 = "MiiModelRenderer::render";
        local_d8 = 0xffffffffffffffff;
        pppplVar15 = &local_f0;
        param_5 = (byte ****)0x0;
        (**(code **)(*plVar9 + 0x10))(plVar9,0);
        puVar12 = (undefined8 *)plVar9[0xe];
        if (puVar12 < (undefined8 *)plVar9[0xf]) {
          *puVar12 = puVar8;
          plVar9[0xe] = plVar9[0xe] + 8;
        }
        else {
          pvVar24 = (void *)plVar9[0xd];
          pppplVar17 = (long ****)((long)puVar12 - (long)pvVar24);
          uVar28 = ((long)pppplVar17 >> 3) + 1;
          if (uVar28 >> 0x3d != 0) goto LAB_7103584dcc;
          lVar18 = plVar9[0xf] - (long)pvVar24;
          if ((ulong)(lVar18 >> 3) < 0xfffffffffffffff) {
            uVar19 = lVar18 >> 2;
            if (uVar28 <= uVar19) {
              uVar28 = uVar19;
            }
            if (uVar28 != 0) {
              if (uVar28 >> 0x3d != 0) goto LAB_7103584c9c;
              goto LAB_7103583cf4;
            }
LAB_7103583d54:
            pvVar14 = (void *)0x0;
          }
          else {
            uVar28 = 0x1fffffffffffffff;
LAB_7103583cf4:
            ppplVar20 = (long ***)(uVar28 * 8);
            if (ppplVar20 == (long ***)0x0) {
              ppplVar20 = (long ***)0x1;
            }
            pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                             (long ****)param_5,param_6,param_7,param_8);
            if (pvVar14 == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_110 = (long ***)((ulong)local_110 & 0xffffffff00000000);
                pppplVar15 = &local_f0;
                local_f0 = ppplVar20;
                uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_110);
                if (((uVar19 & 1) != 0) &&
                   (pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                                     (long ****)param_5,param_6,param_7,param_8),
                   pvVar14 != (void *)0x0)) goto LAB_7103583d58;
              }
              goto LAB_7103583d54;
            }
          }
LAB_7103583d58:
          puVar12 = (undefined8 *)((long)pvVar14 + ((long)pppplVar17 >> 3) * 8);
          *puVar12 = puVar8;
          if (0 < (long)pppplVar17) {
            memcpy(pvVar14,pvVar24,(size_t)pppplVar17);
            pppplVar15 = pppplVar17;
          }
          plVar9[0xd] = (long)pvVar14;
          plVar9[0xe] = (long)(puVar12 + 1);
          plVar9[0xf] = (long)((long)pvVar14 + uVar28 * 8);
          if (pvVar24 != (void *)0x0) {
            FUN_710392eb40((ulong)pvVar24);
          }
        }
        plVar22 = *(long **)(*DAT_710593b6a0 + 0x24e8);
        plVar25 = *(long **)(*DAT_710593b6a0 + 0x24f0);
        if (plVar25 != (long *)0x0) {
          plVar13 = plVar25 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = *plVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar18 = *plVar22;
        if (iVar3 == 1) {
          lVar18 = *(long *)(lVar18 + 0x608);
        }
        else {
          lVar18 = *(long *)(lVar18 + 0x628);
        }
        FUN_7103555dc0(lVar18,plVar9,pppplVar15,(byte ****)param_4,(long ****)param_5,param_6,
                       param_7,param_8);
        if (plVar25 != (long *)0x0) {
          plVar9 = plVar25 + 1;
          do {
            lVar18 = *plVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = lVar18 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plVar25 + 0x10))(plVar25);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
    }
    local_f0 = (long ***)&PTR_FUN_710522fd88;
    pppplVar15 = (long ****)0x1;
    local_e8 = lVar21;
    uStack_e0 = uVar2;
    local_d8 = uVar26;
    puVar8 = FUN_710363fa50(**(long **)(lVar23 + 0x60),(long)&local_f0,1);
    lVar18 = DAT_71053375a8;
    if (puVar8 != (undefined8 *)0x0) {
      std::mutex::lock();
      plVar9 = FUN_7103554700(*(long **)(lVar18 + 0x90),extraout_x1_02,pppplVar15,(byte ****)param_4
                              ,(long ****)param_5,param_6,param_7,param_8);
      std::mutex::unlock();
      if (plVar9 != (long *)0x0) {
        local_108 = 0;
        uStack_100 = 0;
        local_110 = (long ***)0x0;
        param_4 = "MiiModelRenderer::render";
        local_f8 = 0xffffffffffffffff;
        pppplVar15 = &local_110;
        param_5 = (byte ****)0x0;
        (**(code **)(*plVar9 + 0x10))(plVar9,0);
        puVar12 = (undefined8 *)plVar9[0xe];
        if (puVar12 < (undefined8 *)plVar9[0xf]) {
          *puVar12 = puVar8;
          plVar9[0xe] = plVar9[0xe] + 8;
        }
        else {
          pvVar24 = (void *)plVar9[0xd];
          pppplVar17 = (long ****)((long)puVar12 - (long)pvVar24);
          uVar28 = ((long)pppplVar17 >> 3) + 1;
          if (uVar28 >> 0x3d != 0) goto LAB_7103584dcc;
          lVar18 = plVar9[0xf] - (long)pvVar24;
          if ((ulong)(lVar18 >> 3) < 0xfffffffffffffff) {
            uVar19 = lVar18 >> 2;
            if (uVar28 <= uVar19) {
              uVar28 = uVar19;
            }
            if (uVar28 != 0) {
              if (uVar28 >> 0x3d != 0) goto LAB_7103584c9c;
              goto LAB_7103583f18;
            }
LAB_7103583f78:
            pvVar14 = (void *)0x0;
          }
          else {
            uVar28 = 0x1fffffffffffffff;
LAB_7103583f18:
            ppplVar20 = (long ***)(uVar28 * 8);
            if (ppplVar20 == (long ***)0x0) {
              ppplVar20 = (long ***)0x1;
            }
            pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                             (long ****)param_5,param_6,param_7,param_8);
            if (pvVar14 == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_130 = (long ***)((ulong)local_130 & 0xffffffff00000000);
                pppplVar15 = &local_110;
                local_110 = ppplVar20;
                uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_130);
                if (((uVar19 & 1) != 0) &&
                   (pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                                     (long ****)param_5,param_6,param_7,param_8),
                   pvVar14 != (void *)0x0)) goto LAB_7103583f7c;
              }
              goto LAB_7103583f78;
            }
          }
LAB_7103583f7c:
          puVar12 = (undefined8 *)((long)pvVar14 + ((long)pppplVar17 >> 3) * 8);
          *puVar12 = puVar8;
          if (0 < (long)pppplVar17) {
            memcpy(pvVar14,pvVar24,(size_t)pppplVar17);
            pppplVar15 = pppplVar17;
          }
          plVar9[0xd] = (long)pvVar14;
          plVar9[0xe] = (long)(puVar12 + 1);
          plVar9[0xf] = (long)((long)pvVar14 + uVar28 * 8);
          if (pvVar24 != (void *)0x0) {
            FUN_710392eb40((ulong)pvVar24);
          }
        }
        plVar22 = *(long **)(*DAT_710593b6a0 + 0x24e8);
        plVar25 = *(long **)(*DAT_710593b6a0 + 0x24f0);
        if (plVar25 == (long *)0x0) {
          FUN_7103555dc0(*(long *)(*plVar22 + 0x648),plVar9,pppplVar15,(byte ****)param_4,
                         (long ****)param_5,param_6,param_7,param_8);
        }
        else {
          plVar13 = plVar25 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = *plVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          FUN_7103555dc0(*(long *)(*plVar22 + 0x648),plVar9,pppplVar15,(byte ****)param_4,
                         (long ****)param_5,param_6,param_7,param_8);
          plVar9 = plVar25 + 1;
          do {
            lVar18 = *plVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = lVar18 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plVar25 + 0x10))(plVar25);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
    }
    local_110 = (long ***)&PTR_FUN_710522fd88;
    pppplVar15 = (long ****)0x1;
    local_108 = lVar21;
    uStack_100 = uVar2;
    local_f8 = uVar26;
    puVar8 = FUN_710363fa50(**(long **)(lVar23 + 0x68),(long)&local_110,1);
    lVar18 = DAT_71053375a8;
    if (puVar8 != (undefined8 *)0x0) {
      std::mutex::lock();
      plVar9 = FUN_7103554700(*(long **)(lVar18 + 0x90),extraout_x1_03,pppplVar15,(byte ****)param_4
                              ,(long ****)param_5,param_6,param_7,param_8);
      std::mutex::unlock();
      if (plVar9 != (long *)0x0) {
        local_128 = 0;
        uStack_120 = 0;
        local_130 = (long ***)0x0;
        param_4 = "MiiModelRenderer::render";
        local_118 = 0xffffffffffffffff;
        pppplVar15 = &local_130;
        param_5 = (byte ****)0x0;
        (**(code **)(*plVar9 + 0x10))(plVar9,0);
        puVar12 = (undefined8 *)plVar9[0xe];
        if (puVar12 < (undefined8 *)plVar9[0xf]) {
          *puVar12 = puVar8;
          plVar9[0xe] = plVar9[0xe] + 8;
        }
        else {
          pvVar24 = (void *)plVar9[0xd];
          pppplVar17 = (long ****)((long)puVar12 - (long)pvVar24);
          uVar28 = ((long)pppplVar17 >> 3) + 1;
          if (uVar28 >> 0x3d != 0) goto LAB_7103584dcc;
          lVar18 = plVar9[0xf] - (long)pvVar24;
          if ((ulong)(lVar18 >> 3) < 0xfffffffffffffff) {
            uVar19 = lVar18 >> 2;
            if (uVar28 <= uVar19) {
              uVar28 = uVar19;
            }
            if (uVar28 != 0) {
              if (uVar28 >> 0x3d != 0) goto LAB_7103584c9c;
              goto LAB_7103584138;
            }
LAB_7103584198:
            pvVar14 = (void *)0x0;
          }
          else {
            uVar28 = 0x1fffffffffffffff;
LAB_7103584138:
            ppplVar20 = (long ***)(uVar28 * 8);
            if (ppplVar20 == (long ***)0x0) {
              ppplVar20 = (long ***)0x1;
            }
            pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                             (long ****)param_5,param_6,param_7,param_8);
            if (pvVar14 == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_150 = (long ***)((ulong)local_150 & 0xffffffff00000000);
                pppplVar15 = &local_130;
                local_130 = ppplVar20;
                uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_150);
                if (((uVar19 & 1) != 0) &&
                   (pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                                     (long ****)param_5,param_6,param_7,param_8),
                   pvVar14 != (void *)0x0)) goto LAB_710358419c;
              }
              goto LAB_7103584198;
            }
          }
LAB_710358419c:
          puVar12 = (undefined8 *)((long)pvVar14 + ((long)pppplVar17 >> 3) * 8);
          *puVar12 = puVar8;
          if (0 < (long)pppplVar17) {
            memcpy(pvVar14,pvVar24,(size_t)pppplVar17);
            pppplVar15 = pppplVar17;
          }
          plVar9[0xd] = (long)pvVar14;
          plVar9[0xe] = (long)(puVar12 + 1);
          plVar9[0xf] = (long)((long)pvVar14 + uVar28 * 8);
          if (pvVar24 != (void *)0x0) {
            FUN_710392eb40((ulong)pvVar24);
          }
        }
        plVar22 = *(long **)(*DAT_710593b6a0 + 0x24e8);
        plVar25 = *(long **)(*DAT_710593b6a0 + 0x24f0);
        if (plVar25 == (long *)0x0) {
          FUN_7103555dc0(*(long *)(*plVar22 + 0x668),plVar9,pppplVar15,(byte ****)param_4,
                         (long ****)param_5,param_6,param_7,param_8);
        }
        else {
          plVar13 = plVar25 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = *plVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          FUN_7103555dc0(*(long *)(*plVar22 + 0x668),plVar9,pppplVar15,(byte ****)param_4,
                         (long ****)param_5,param_6,param_7,param_8);
          plVar9 = plVar25 + 1;
          do {
            lVar18 = *plVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = lVar18 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plVar25 + 0x10))(plVar25);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
    }
    local_130 = (long ***)&PTR_FUN_710522fd88;
    pppplVar15 = (long ****)0x1;
    local_128 = lVar21;
    uStack_120 = uVar2;
    local_118 = uVar26;
    puVar8 = FUN_710363fa50(**(long **)(lVar23 + 0x70),(long)&local_130,1);
    lVar18 = DAT_71053375a8;
    if (puVar8 != (undefined8 *)0x0) {
      std::mutex::lock();
      plVar9 = FUN_7103554700(*(long **)(lVar18 + 0x90),extraout_x1_04,pppplVar15,(byte ****)param_4
                              ,(long ****)param_5,param_6,param_7,param_8);
      std::mutex::unlock();
      if (plVar9 != (long *)0x0) {
        local_148 = 0;
        uStack_140 = 0;
        local_150 = (long ***)0x0;
        param_4 = "MiiModelRenderer::render";
        local_138 = 0xffffffffffffffff;
        pppplVar15 = &local_150;
        param_5 = (byte ****)0x0;
        (**(code **)(*plVar9 + 0x10))(plVar9,0);
        puVar12 = (undefined8 *)plVar9[0xe];
        if (puVar12 < (undefined8 *)plVar9[0xf]) {
          *puVar12 = puVar8;
          plVar9[0xe] = plVar9[0xe] + 8;
        }
        else {
          pvVar24 = (void *)plVar9[0xd];
          pppplVar17 = (long ****)((long)puVar12 - (long)pvVar24);
          uVar28 = ((long)pppplVar17 >> 3) + 1;
          if (uVar28 >> 0x3d != 0) goto LAB_7103584dcc;
          lVar18 = plVar9[0xf] - (long)pvVar24;
          if ((ulong)(lVar18 >> 3) < 0xfffffffffffffff) {
            uVar19 = lVar18 >> 2;
            if (uVar28 <= uVar19) {
              uVar28 = uVar19;
            }
            if (uVar28 != 0) {
              if (uVar28 >> 0x3d != 0) goto LAB_7103584c9c;
              goto LAB_7103584358;
            }
LAB_71035843b8:
            pvVar14 = (void *)0x0;
          }
          else {
            uVar28 = 0x1fffffffffffffff;
LAB_7103584358:
            ppplVar20 = (long ***)(uVar28 * 8);
            if (ppplVar20 == (long ***)0x0) {
              ppplVar20 = (long ***)0x1;
            }
            pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                             (long ****)param_5,param_6,param_7,param_8);
            if (pvVar14 == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_170 = (long ***)((ulong)local_170 & 0xffffffff00000000);
                pppplVar15 = &local_150;
                local_150 = ppplVar20;
                uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_170);
                if (((uVar19 & 1) != 0) &&
                   (pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                                     (long ****)param_5,param_6,param_7,param_8),
                   pvVar14 != (void *)0x0)) goto LAB_71035843bc;
              }
              goto LAB_71035843b8;
            }
          }
LAB_71035843bc:
          puVar12 = (undefined8 *)((long)pvVar14 + ((long)pppplVar17 >> 3) * 8);
          *puVar12 = puVar8;
          if (0 < (long)pppplVar17) {
            memcpy(pvVar14,pvVar24,(size_t)pppplVar17);
            pppplVar15 = pppplVar17;
          }
          plVar9[0xd] = (long)pvVar14;
          plVar9[0xe] = (long)(puVar12 + 1);
          plVar9[0xf] = (long)((long)pvVar14 + uVar28 * 8);
          if (pvVar24 != (void *)0x0) {
            FUN_710392eb40((ulong)pvVar24);
          }
        }
        plVar22 = *(long **)(*DAT_710593b6a0 + 0x24e8);
        plVar25 = *(long **)(*DAT_710593b6a0 + 0x24f0);
        if (plVar25 == (long *)0x0) {
          FUN_7103555dc0(*(long *)(*plVar22 + 0x688),plVar9,pppplVar15,(byte ****)param_4,
                         (long ****)param_5,param_6,param_7,param_8);
        }
        else {
          plVar13 = plVar25 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = *plVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          FUN_7103555dc0(*(long *)(*plVar22 + 0x688),plVar9,pppplVar15,(byte ****)param_4,
                         (long ****)param_5,param_6,param_7,param_8);
          plVar9 = plVar25 + 1;
          do {
            lVar18 = *plVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = lVar18 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plVar25 + 0x10))(plVar25);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
    }
  }
  if (bVar6) {
    local_150 = (long ***)&PTR_FUN_710522fd88;
    pppplVar15 = (long ****)0x1;
    local_148 = lVar21;
    uStack_140 = uVar2;
    local_138 = uVar26;
    puVar8 = FUN_710363fa50(**(long **)(lVar23 + 0x78),(long)&local_150,1);
    lVar18 = DAT_71053375a8;
    if (puVar8 != (undefined8 *)0x0) {
      std::mutex::lock();
      plVar9 = FUN_7103554700(*(long **)(lVar18 + 0x90),extraout_x1_05,pppplVar15,(byte ****)param_4
                              ,(long ****)param_5,param_6,param_7,param_8);
      std::mutex::unlock();
      if (plVar9 != (long *)0x0) {
        local_168 = 0;
        uStack_160 = 0;
        local_170 = (long ***)0x0;
        param_4 = "MiiModelRenderer::render";
        local_158 = 0xffffffffffffffff;
        pppplVar15 = &local_170;
        param_5 = (byte ****)0x0;
        (**(code **)(*plVar9 + 0x10))(plVar9,0);
        plVar25 = *(long **)(*DAT_710593b6a0 + 0x24e8);
        plVar22 = *(long **)(*DAT_710593b6a0 + 0x24f0);
        if (plVar22 != (long *)0x0) {
          plVar13 = plVar22 + 1;
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = *plVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        puVar12 = (undefined8 *)plVar9[0xe];
        if (puVar12 < (undefined8 *)plVar9[0xf]) {
          *puVar12 = puVar8;
          plVar9[0xe] = plVar9[0xe] + 8;
        }
        else {
          pvVar24 = (void *)plVar9[0xd];
          pppplVar17 = (long ****)((long)puVar12 - (long)pvVar24);
          uVar28 = ((long)pppplVar17 >> 3) + 1;
          if (uVar28 >> 0x3d != 0) {
LAB_7103584dcc:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar18 = plVar9[0xf] - (long)pvVar24;
          if ((ulong)(lVar18 >> 3) < 0xfffffffffffffff) {
            uVar19 = lVar18 >> 2;
            if (uVar28 <= uVar19) {
              uVar28 = uVar19;
            }
            if (uVar28 != 0) {
              if (uVar28 >> 0x3d != 0) goto LAB_7103584c9c;
              goto LAB_71035845b8;
            }
LAB_7103584618:
            pvVar14 = (void *)0x0;
          }
          else {
            uVar28 = 0x1fffffffffffffff;
LAB_71035845b8:
            ppplVar20 = (long ***)(uVar28 * 8);
            if (ppplVar20 == (long ***)0x0) {
              ppplVar20 = (long ***)0x1;
            }
            pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                             (long ****)param_5,param_6,param_7,param_8);
            if (pvVar14 == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_190 = (long ***)((ulong)local_190 & 0xffffffff00000000);
                pppplVar15 = &local_170;
                local_170 = ppplVar20;
                uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_190);
                if (((uVar19 & 1) != 0) &&
                   (pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                                     (long ****)param_5,param_6,param_7,param_8),
                   pvVar14 != (void *)0x0)) goto LAB_710358461c;
              }
              goto LAB_7103584618;
            }
          }
LAB_710358461c:
          puVar12 = (undefined8 *)((long)pvVar14 + ((long)pppplVar17 >> 3) * 8);
          *puVar12 = puVar8;
          if (0 < (long)pppplVar17) {
            memcpy(pvVar14,pvVar24,(size_t)pppplVar17);
            pppplVar15 = pppplVar17;
          }
          plVar9[0xd] = (long)pvVar14;
          plVar9[0xe] = (long)(puVar12 + 1);
          plVar9[0xf] = (long)((long)pvVar14 + uVar28 * 8);
          if (pvVar24 != (void *)0x0) {
            FUN_710392eb40((ulong)pvVar24);
          }
        }
        FUN_7103555dc0(*(long *)(*plVar25 + 0x308),plVar9,pppplVar15,(byte ****)param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        if (plVar22 != (long *)0x0) {
          plVar9 = plVar22 + 1;
          do {
            lVar18 = *plVar9;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = lVar18 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
    }
    local_170 = (long ***)&PTR_FUN_710522fd88;
    pppplVar15 = (long ****)0x1;
    local_168 = lVar21;
    uStack_160 = uVar2;
    local_158 = uVar26;
    puVar8 = FUN_710363fa50(**(long **)(lVar23 + 0x80),(long)&local_170,1);
    lVar18 = DAT_71053375a8;
    if (puVar8 != (undefined8 *)0x0) {
      std::mutex::lock();
      plVar9 = FUN_7103554700(*(long **)(lVar18 + 0x90),extraout_x1_06,pppplVar15,(byte ****)param_4
                              ,(long ****)param_5,param_6,param_7,param_8);
      std::mutex::unlock();
      if (plVar9 != (long *)0x0) {
        local_188 = 0;
        uStack_180 = 0;
        local_190 = (long ***)0x0;
        param_4 = "MiiModelRenderer::render";
        local_178 = 0xffffffffffffffff;
        pppplVar15 = &local_190;
        param_5 = (byte ****)0x0;
        (**(code **)(*plVar9 + 0x10))(plVar9,0);
        plVar25 = *(long **)(*DAT_710593b6a0 + 0x24e8);
        plVar22 = *(long **)(*DAT_710593b6a0 + 0x24f0);
        if (plVar22 != (long *)0x0) {
          plVar13 = plVar22 + 1;
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = *plVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        puVar12 = (undefined8 *)plVar9[0xe];
        if (puVar12 < (undefined8 *)plVar9[0xf]) {
          *puVar12 = puVar8;
          plVar9[0xe] = plVar9[0xe] + 8;
        }
        else {
          pvVar24 = (void *)plVar9[0xd];
          sVar27 = (long)puVar12 - (long)pvVar24;
          uVar28 = ((long)sVar27 >> 3) + 1;
          if (uVar28 >> 0x3d != 0) goto LAB_7103584dd8;
          lVar18 = plVar9[0xf] - (long)pvVar24;
          if ((ulong)(lVar18 >> 3) < 0xfffffffffffffff) {
            uVar19 = lVar18 >> 2;
            if (uVar28 <= uVar19) {
              uVar28 = uVar19;
            }
            if (uVar28 != 0) {
              if (uVar28 >> 0x3d != 0) goto LAB_7103584c9c;
              goto LAB_71035847d8;
            }
LAB_7103584838:
            pvVar14 = (void *)0x0;
          }
          else {
            uVar28 = 0x1fffffffffffffff;
LAB_71035847d8:
            ppplVar20 = (long ***)(uVar28 * 8);
            if (ppplVar20 == (long ***)0x0) {
              ppplVar20 = (long ***)0x1;
            }
            pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                             (long ****)param_5,param_6,param_7,param_8);
            if (pvVar14 == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_1b0 = (long ***)((ulong)local_1b0 & 0xffffffff00000000);
                pppplVar15 = &local_190;
                local_190 = ppplVar20;
                uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
                if (((uVar19 & 1) != 0) &&
                   (pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                                     (long ****)param_5,param_6,param_7,param_8),
                   pvVar14 != (void *)0x0)) goto LAB_710358483c;
              }
              goto LAB_7103584838;
            }
          }
LAB_710358483c:
          puVar12 = (undefined8 *)((long)pvVar14 + ((long)sVar27 >> 3) * 8);
          *puVar12 = puVar8;
          if (0 < (long)sVar27) {
            memcpy(pvVar14,pvVar24,sVar27);
          }
          plVar9[0xd] = (long)pvVar14;
          plVar9[0xe] = (long)(puVar12 + 1);
          plVar9[0xf] = (long)((long)pvVar14 + uVar28 * 8);
          if (pvVar24 != (void *)0x0) {
            FUN_710392eb40((ulong)pvVar24);
          }
        }
        local_190 = (long ***)&DAT_00000080;
        local_1b0 = (long ***)&DAT_00000010;
        plVar13 = *(long **)(lVar21 + 0x50);
        if (plVar13 == (long *)0x0) goto LAB_7103584c9c;
        puVar12 = (undefined8 *)(**(code **)(*plVar13 + 0x30))(plVar13,&local_190,&local_1b0);
        pppplVar15 = (long ****)(lVar21 + 0x60);
        FUN_71035b9760(puVar12,(long *)(lVar21 + 0x30),(long *)pppplVar15);
        puVar8 = (undefined8 *)plVar9[0xe];
        if (puVar8 < (undefined8 *)plVar9[0xf]) {
          *puVar8 = puVar12;
          plVar9[0xe] = plVar9[0xe] + 8;
        }
        else {
          pvVar24 = (void *)plVar9[0xd];
          pppplVar17 = (long ****)((long)puVar8 - (long)pvVar24);
          uVar28 = ((long)pppplVar17 >> 3) + 1;
          if (uVar28 >> 0x3d != 0) goto LAB_7103584dd8;
          lVar18 = plVar9[0xf] - (long)pvVar24;
          if ((ulong)(lVar18 >> 3) < 0xfffffffffffffff) {
            uVar19 = lVar18 >> 2;
            if (uVar28 <= uVar19) {
              uVar28 = uVar19;
            }
            if (uVar28 != 0) {
              if (uVar28 >> 0x3d != 0) goto LAB_7103584c9c;
              goto LAB_710358492c;
            }
LAB_710358498c:
            pvVar14 = (void *)0x0;
          }
          else {
            uVar28 = 0x1fffffffffffffff;
LAB_710358492c:
            ppplVar20 = (long ***)(uVar28 * 8);
            if (ppplVar20 == (long ***)0x0) {
              ppplVar20 = (long ***)0x1;
            }
            pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                             (long ****)param_5,param_6,param_7,param_8);
            if (pvVar14 == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_1b0 = (long ***)((ulong)local_1b0 & 0xffffffff00000000);
                pppplVar15 = &local_190;
                local_190 = ppplVar20;
                uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
                if (((uVar19 & 1) != 0) &&
                   (pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)param_4,
                                                     (long ****)param_5,param_6,param_7,param_8),
                   pvVar14 != (void *)0x0)) goto LAB_7103584990;
              }
              goto LAB_710358498c;
            }
          }
LAB_7103584990:
          puVar8 = (undefined8 *)((long)pvVar14 + ((long)pppplVar17 >> 3) * 8);
          *puVar8 = puVar12;
          if (0 < (long)pppplVar17) {
            memcpy(pvVar14,pvVar24,(size_t)pppplVar17);
            pppplVar15 = pppplVar17;
          }
          plVar9[0xd] = (long)pvVar14;
          plVar9[0xe] = (long)(puVar8 + 1);
          plVar9[0xf] = (long)((long)pvVar14 + uVar28 * 8);
          if (pvVar24 != (void *)0x0) {
            FUN_710392eb40((ulong)pvVar24);
          }
        }
        FUN_7103555dc0(*(long *)(*plVar25 + 0x328),plVar9,pppplVar15,(byte ****)param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        if (plVar22 != (long *)0x0) {
          plVar9 = plVar22 + 1;
          do {
            lVar18 = *plVar9;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = lVar18 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
    }
  }
  if (!bVar7) {
    return;
  }
  local_190 = (long ***)&PTR_FUN_710522fd88;
  pppplVar15 = (long ****)0x1;
  local_188 = lVar21;
  uStack_180 = uVar2;
  local_178 = uVar26;
  puVar8 = FUN_710363fa50(**(long **)(lVar23 + 0x88),(long)&local_190,1);
  lVar23 = DAT_71053375a8;
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
  std::mutex::lock();
  plVar9 = FUN_7103554700(*(long **)(lVar23 + 0x90),extraout_x1_07,pppplVar15,(byte ****)param_4,
                          (long ****)param_5,param_6,param_7,param_8);
  std::mutex::unlock();
  if (plVar9 == (long *)0x0) {
    return;
  }
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b0 = (long ***)0x0;
  pcVar16 = "MiiModelRenderer::render";
  local_198 = 0xffffffffffffffff;
  pppplVar15 = &local_1b0;
  pppplVar17 = (long ****)0x0;
  (**(code **)(*plVar9 + 0x10))(plVar9,0);
  plVar25 = *(long **)(*DAT_710593b6a0 + 0x24e8);
  plVar22 = *(long **)(*DAT_710593b6a0 + 0x24f0);
  if (plVar22 != (long *)0x0) {
    plVar13 = plVar22 + 1;
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = *plVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar12 = (undefined8 *)plVar9[0xe];
  if (puVar12 < (undefined8 *)plVar9[0xf]) {
    *puVar12 = puVar8;
    plVar9[0xe] = plVar9[0xe] + 8;
  }
  else {
    pvVar24 = (void *)plVar9[0xd];
    sVar27 = (long)puVar12 - (long)pvVar24;
    uVar28 = ((long)sVar27 >> 3) + 1;
    if (uVar28 >> 0x3d != 0) goto LAB_7103584dd8;
    lVar23 = plVar9[0xf] - (long)pvVar24;
    if ((ulong)(lVar23 >> 3) < 0xfffffffffffffff) {
      uVar19 = lVar23 >> 2;
      if (uVar28 <= uVar19) {
        uVar28 = uVar19;
      }
      if (uVar28 != 0) {
        if (uVar28 >> 0x3d != 0) goto LAB_7103584c9c;
        goto LAB_7103584b50;
      }
LAB_7103584bb0:
      pvVar14 = (void *)0x0;
    }
    else {
      uVar28 = 0x1fffffffffffffff;
LAB_7103584b50:
      ppplVar20 = (long ***)(uVar28 * 8);
      if (ppplVar20 == (long ***)0x0) {
        ppplVar20 = (long ***)0x1;
      }
      pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)pcVar16,pppplVar17,
                                       param_6,param_7,param_8);
      if (pvVar14 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_70[0] = local_70[0] & 0xffffffff00000000;
          pppplVar15 = &local_1b0;
          local_1b0 = ppplVar20;
          uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_70);
          if (((uVar19 & 1) != 0) &&
             (pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)pcVar16,
                                               pppplVar17,param_6,param_7,param_8),
             pvVar14 != (void *)0x0)) goto LAB_7103584bb4;
        }
        goto LAB_7103584bb0;
      }
    }
LAB_7103584bb4:
    puVar12 = (undefined8 *)((long)pvVar14 + ((long)sVar27 >> 3) * 8);
    *puVar12 = puVar8;
    if (0 < (long)sVar27) {
      memcpy(pvVar14,pvVar24,sVar27);
    }
    plVar9[0xd] = (long)pvVar14;
    plVar9[0xe] = (long)(puVar12 + 1);
    plVar9[0xf] = (long)((long)pvVar14 + uVar28 * 8);
    if (pvVar24 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar24);
    }
  }
  local_1b0 = (long ***)&DAT_00000080;
  local_70[0] = 0x10;
  plVar13 = *(long **)(lVar21 + 0x50);
  if (plVar13 == (long *)0x0) {
LAB_7103584c9c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar12 = (undefined8 *)(**(code **)(*plVar13 + 0x30))(plVar13,&local_1b0,local_70);
  pppplVar15 = (long ****)(lVar21 + 0x60);
  FUN_71035b9760(puVar12,(long *)(lVar21 + 0x30),(long *)pppplVar15);
  puVar8 = (undefined8 *)plVar9[0xe];
  if (puVar8 < (undefined8 *)plVar9[0xf]) {
    *puVar8 = puVar12;
    plVar9[0xe] = plVar9[0xe] + 8;
    goto LAB_7103584d44;
  }
  pvVar24 = (void *)plVar9[0xd];
  __n = (long ****)((long)puVar8 - (long)pvVar24);
  uVar28 = ((long)__n >> 3) + 1;
  if (uVar28 >> 0x3d != 0) {
LAB_7103584dd8:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar23 = plVar9[0xf] - (long)pvVar24;
  if ((ulong)(lVar23 >> 3) < 0xfffffffffffffff) {
    uVar19 = lVar23 >> 2;
    if (uVar28 <= uVar19) {
      uVar28 = uVar19;
    }
    if (uVar28 != 0) {
      if (uVar28 >> 0x3d != 0) goto LAB_7103584c9c;
      goto LAB_7103584ca4;
    }
LAB_7103584d04:
    pvVar14 = (void *)0x0;
  }
  else {
    uVar28 = 0x1fffffffffffffff;
LAB_7103584ca4:
    ppplVar20 = (long ***)(uVar28 * 8);
    if (ppplVar20 == (long ***)0x0) {
      ppplVar20 = (long ***)0x1;
    }
    pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)pcVar16,pppplVar17,param_6
                                     ,param_7,param_8);
    if (pvVar14 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_70[0] = local_70[0] & 0xffffffff00000000;
        pppplVar15 = &local_1b0;
        local_1b0 = ppplVar20;
        uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_70);
        if (((uVar19 & 1) != 0) &&
           (pvVar14 = (void *)FUN_710392e290(0x10,ppplVar20,pppplVar15,(byte ****)pcVar16,pppplVar17
                                             ,param_6,param_7,param_8), pvVar14 != (void *)0x0))
        goto LAB_7103584d08;
      }
      goto LAB_7103584d04;
    }
  }
LAB_7103584d08:
  puVar8 = (undefined8 *)((long)pvVar14 + ((long)__n >> 3) * 8);
  *puVar8 = puVar12;
  if (0 < (long)__n) {
    memcpy(pvVar14,pvVar24,(size_t)__n);
    pppplVar15 = __n;
  }
  plVar9[0xd] = (long)pvVar14;
  plVar9[0xe] = (long)(puVar8 + 1);
  plVar9[0xf] = (long)((long)pvVar14 + uVar28 * 8);
  if (pvVar24 != (void *)0x0) {
    FUN_710392eb40((ulong)pvVar24);
  }
LAB_7103584d44:
  FUN_7103555dc0(*(long *)(*plVar25 + 0x368),plVar9,pppplVar15,(byte ****)pcVar16,pppplVar17,param_6
                 ,param_7,param_8);
  if (plVar22 != (long *)0x0) {
    plVar9 = plVar22 + 1;
    do {
      lVar23 = *plVar9;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = lVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar23 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

