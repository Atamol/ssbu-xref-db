// addr:      71018bafc0
// offset:    0x18bafc0
// name:      FUN_71018bafc0
// mangled:   
// signature: long * __cdecl FUN_71018bafc0(undefined1[16] param_1, undefined4 param_2, float param_3, long * param_4, undefined8 param_5, undefined * * param_6, byte * * * * param_7, long * * * * param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11)


long * FUN_71018bafc0(undefined1 param_1 [16],undefined4 param_2,float param_3,long *param_4,
                     undefined8 param_5,undefined **param_6,byte ****param_7,long ****param_8,
                     undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  undefined4 **ppuVar5;
  byte *pbVar6;
  ulong uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  undefined1 *puVar14;
  ushort *puVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long *********ppppppppplVar19;
  byte ****ppppbVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  ushort uVar26;
  int *piVar27;
  ushort *puVar28;
  long lVar29;
  int *piVar30;
  undefined1 *puVar31;
  uint *puVar32;
  ulong uVar33;
  undefined1 auVar34 [16];
  undefined4 *local_198;
  undefined4 *local_190;
  char *local_188;
  int *local_180;
  byte *local_178;
  long *local_170;
  ushort *local_168;
  ulong *local_160;
  uint *local_158;
  long local_150;
  undefined **local_148;
  ulong local_140;
  uint local_138;
  int local_134;
  ushort local_130 [12];
  undefined **local_118;
  ulong local_110;
  undefined **local_108;
  ulong local_100;
  uint auStack_f8 [2];
  byte abStack_f0 [64];
  undefined **local_b0;
  ulong local_a8 [9];
  
  lVar22 = DAT_7105329740;
  plVar12 = param_4;
  if (*(int *)((long)param_4 + 0xec) == 0) {
    lVar13 = *(long *)(DAT_7105329740 + 8);
    lVar23 = lVar13 + (ulong)*(uint *)(param_4 + 0x3a) * 0x18;
    lVar29 = *(long *)(lVar23 + 8);
    if ((ulong)(*(long *)(lVar23 + 0x10) - lVar29 >> 4) <= (ulong)*(uint *)((long)param_4 + 0x1d4))
    goto LAB_71018bb94c;
    plVar12 = (long *)(lVar29 + (ulong)*(uint *)((long)param_4 + 0x1d4) * 0x10);
    lVar23 = *plVar12;
    plVar2 = (long *)plVar12[1];
    if (plVar2 != (long *)0x0) {
      plVar12 = plVar2 + 1;
      do {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar8) {
          *plVar12 = *plVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar13 = *(long *)(lVar22 + 8);
    }
    uVar33 = (ulong)*(uint *)(lVar23 + 0x50);
    lVar22 = *(long *)(lVar13 + 0x80);
    uVar24 = (*(long *)(lVar13 + 0x88) - lVar22 >> 5) * 0xfc0fc0fc0fc0fc1;
    if (uVar24 < uVar33 || uVar24 - uVar33 == 0) goto LAB_71018bb94c;
    local_150 = lVar22 + uVar33 * 0x820;
    lVar13 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x98);
    piVar25 = *(int **)(lVar13 + 0x550);
    piVar27 = *(int **)(lVar13 + 0x558);
    if (piVar25 != piVar27) {
      do {
        if ((uint)*(byte *)(piVar25 + 2) == (*(uint *)(param_4 + 0x3a) & 0xff)) {
          piVar30 = *(int **)(piVar25 + 10);
          piVar3 = *(int **)(piVar25 + 0xc);
          if (piVar30 != piVar3) {
            iVar11 = *piVar30;
            while (iVar11 != *(int *)(local_150 + 0x81c)) {
              piVar30 = piVar30 + 1;
              if (piVar3 == piVar30) goto LAB_71018bb240;
              iVar11 = *piVar30;
            }
          }
          if (piVar30 != piVar3) {
            iVar11 = *piVar25;
            goto LAB_71018bb250;
          }
        }
LAB_71018bb240:
        piVar25 = piVar25 + 0x10;
      } while (piVar25 != piVar27);
    }
    iVar11 = 0;
LAB_71018bb250:
    uVar24 = FUN_710239b2a0(*(int *)(local_150 + 0x81c),iVar11,param_6,param_7,param_8,param_9,
                            param_10,param_11);
    if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    lVar23 = lVar22 + uVar33 * 0x820;
    bVar8 = DAT_71052cc5dd == '\x01';
    lVar13 = param_4[0x22];
    *(undefined1 *)(lVar13 + 0xc0) = *(undefined1 *)(lVar23 + 0x811);
    if (*(int *)(lVar23 + 0x814) != 0) {
      local_158 = (uint *)(lVar23 + 0x814);
      local_160 = local_a8;
      local_178 = abStack_f0;
      local_170 = *(long **)(lVar13 + 0x78);
      lVar13 = lVar13 + 0x98;
      lVar29 = (long)((int)uVar24 << bVar8);
      local_168 = local_130;
      local_180 = (int *)(lVar22 + uVar33 * 0x820 + 0x1f8);
      lVar23 = lVar29 * 0x3860;
      local_188 = &DAT_71052cc664 + lVar23;
      local_190 = &DAT_71052cc660 + lVar29 * 0xe18;
      local_198 = (undefined4 *)(lVar23 + 0x71052cc662);
      uVar24 = 0;
      do {
        puVar31 = *(undefined1 **)(lVar22 + uVar33 * 0x820 + uVar24 * 0x1c8 + 0x38);
        lVar23 = *(long *)(DAT_710532f730 + 8);
        bVar8 = FUN_71032648e0(lVar23 + 0x160,(ulong)puVar31);
        lVar29 = *(long *)(lVar23 + 0x168);
        puVar14 = puVar31;
        if (bVar8) {
          puVar14 = FUN_71032631a0(lVar29,0x143829f67e);
        }
        uVar10 = FUN_7103263540(lVar29,(ulong)puVar14,
                                (ulong)*(byte *)(lVar22 + uVar33 * 0x820 + uVar24 * 0x1c8 + 0x48),
                                param_7,param_8,param_9,param_10,param_11);
        FUN_7103262310((uint *)&local_b0,*(long *)(lVar23 + 0x168),(ulong)puVar14);
        FUN_71003a4ca0(auStack_f8,"nam_chr2_%02d_%s",(ulong)uVar10,local_160,param_7,param_8,param_9
                       ,param_10,param_11);
        pbVar6 = local_178;
        bVar8 = FUN_71037a4570((long *)*DAT_710593bc60,local_178);
        if (bVar8) {
          puVar15 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar6);
          if (puVar15 == (ushort *)0x0) {
            uVar10 = 0;
          }
          else {
            uVar26 = *puVar15;
            uVar10 = (uint)(uVar26 != 0);
            if (uVar26 != 0) {
              uVar21 = 0;
              puVar28 = puVar15;
              do {
                if ((uVar26 | 1) == 0xf) {
                  if (uVar26 == 0xe) {
                    iVar11 = (puVar28[3] >> 1) + 4;
                  }
                  else {
                    iVar11 = 3;
                    if (uVar26 != 0xf) {
                      iVar11 = 0;
                    }
                  }
                }
                else {
                  iVar11 = 1;
                  if (uVar26 == 10) {
                    uVar10 = uVar10 + 1;
                  }
                }
                uVar21 = iVar11 + uVar21;
                puVar28 = puVar15 + uVar21;
                uVar26 = *puVar28;
              } while (uVar26 != 0);
            }
          }
        }
        else {
          uVar10 = 0;
        }
        FUN_7103778430(lVar13,"fighter_name_%d_%02d",(ulong)uVar10,uVar24 & 0xffffffff,param_8,
                       param_9,param_10,param_11);
        uVar17 = (ulong)uVar10;
        ppppbVar20 = (byte ****)(uVar24 & 0xffffffff);
        FUN_7103776910(&local_b0,lVar13,(long ****)"set_txt_fighter_%d_%02d",uVar17,ppppbVar20,
                       param_8,param_9,param_10,param_11);
        FUN_710377a120((long)&local_b0,(char *)pbVar6,uVar17,ppppbVar20,param_8,param_9,param_10,
                       param_11);
        uVar17 = local_a8[0];
        local_b0 = &PTR_FUN_710523d9a8;
        local_a8[0] = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_7103776910(&local_108,lVar13,(long ****)"set_txt_player_name_%02d",uVar24 & 0xffffffff,
                       ppppbVar20,param_8,param_9,param_10,param_11);
        FUN_7103776910(&local_118,lVar13,(long ****)"set_txt_player_namefp_%02d",uVar24 & 0xffffffff
                       ,ppppbVar20,param_8,param_9,param_10,param_11);
        uVar10 = (uint)uVar24;
        if ((*local_158 < 2) || (*local_180 == 2)) {
          FUN_7102398db0(&local_138,local_150,uVar10);
        }
        else {
          FUN_7102398db0(&local_138,local_150,uVar10);
          if (((uVar10 + 0x31 & 0xffff) != 0) && (lVar23 = (long)local_134, local_134 < 0xb)) {
            local_134 = local_134 + 1;
            local_130[lVar23] = (ushort)(uVar10 + 0x31);
            local_130[local_134] = 0;
            uVar21 = (uint)local_130[0];
            local_138 = 0x811c9dc5;
            if (local_130[0] != 0) {
              local_138 = 0x811c9dc5;
              puVar15 = local_130;
              do {
                puVar15 = puVar15 + 1;
                local_138 = local_138 * 0x89 ^ uVar21;
                uVar21 = (uint)*puVar15;
              } while (uVar21 != 0);
            }
          }
        }
        uVar17 = local_100;
        if (*(long **)(local_100 + 0x10) != (long *)0x0) {
          ppppbVar20 = (byte ****)0x1;
          FUN_71037a2270(*(long **)(local_100 + 0x10),local_168,0xffffffff,1);
        }
        uVar7 = local_110;
        if (*(long **)(local_110 + 0x10) != (long *)0x0) {
          ppppbVar20 = (byte ****)0x1;
          FUN_71037a2270(*(long **)(local_110 + 0x10),local_168,0xffffffff,1);
        }
        if (*(int *)(lVar22 + uVar33 * 0x820 + uVar24 * 0x1c8 + 0x30) == 2) {
          uVar18 = uVar24 & 0xffffffff;
          FUN_7103776910(&local_b0,lVar13,(long ****)"set_txt_player_id_%02d",uVar18,ppppbVar20,
                         param_8,param_9,param_10,param_11);
          FUN_710377a120((long)&local_b0,"mel_tournament_match_fp",uVar18,ppppbVar20,param_8,param_9
                         ,param_10,param_11);
          uVar18 = local_a8[0];
          plVar12 = local_170;
          local_b0 = &PTR_FUN_710523d9a8;
          local_a8[0] = 0;
          if (uVar18 != 0) {
            FUN_710392eb40(uVar18);
          }
          FUN_7103778430(lVar13,"player_color_fp_%02d",uVar24 & 0xffffffff,ppppbVar20,param_8,
                         param_9,param_10,param_11);
        }
        else {
          uVar18 = uVar24 & 0xffffffff;
          FUN_7103776910(&local_148,lVar13,(long ****)"set_txt_player_id_%02d",uVar18,ppppbVar20,
                         param_8,param_9,param_10,param_11);
          FUN_71003a4ca0((uint *)&local_b0,"cmn_%dp",(ulong)(uVar10 + 1),uVar18,ppppbVar20,param_8,
                         param_9,param_10,param_11);
          FUN_710377a120((long)&local_148,(char *)local_160,uVar18,ppppbVar20,param_8,param_9,
                         param_10,param_11);
          uVar18 = local_140;
          plVar12 = local_170;
          local_148 = &PTR_FUN_710523d9a8;
          local_140 = 0;
          if (uVar18 != 0) {
            FUN_710392eb40(uVar18);
          }
          ppuVar5 = &local_190;
          if (*local_188 != '\0') {
            ppuVar5 = &local_198;
          }
          if (*(ushort *)*ppuVar5 - 2 < 0xd) {
            uVar18 = (ulong)*(uint *)(&DAT_7104545560 + (long)(short)(*(ushort *)*ppuVar5 - 2) * 4);
          }
          else {
            uVar18 = 1;
          }
          ppppbVar20 = (byte ****)(uVar24 & 0xffffffff);
          FUN_7103778430(lVar13,"player_color_%dp_%02d",uVar18,ppppbVar20,param_8,param_9,param_10,
                         param_11);
        }
        uVar18 = FUN_7103263f80(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),(ulong)puVar31);
        plVar16 = FUN_710323f600(plVar12,uVar18,(long ****)&DAT_00000011,ppppbVar20,param_8,param_9,
                                 param_10,param_11);
        ppppppppplVar19 = (long *********)(uVar24 & 0xffffffff);
        FUN_7103776910(&local_b0,lVar13,(long ****)"set_rep_icon_series_%02d",ppppppppplVar19,
                       ppppbVar20,param_8,param_9,param_10,param_11);
        uVar18 = local_a8[0];
        FUN_7103778b80(local_a8[0],(long)plVar16,ppppppppplVar19,ppppbVar20,param_8,param_9,param_10
                       ,param_11);
        local_b0 = &PTR_FUN_710523d9a8;
        local_a8[0] = 0;
        if (uVar18 != 0) {
          FUN_710392eb40(uVar18);
        }
        ppppppppplVar19 = (long *********)(uVar24 & 0xffffffff);
        FUN_7103776910(&local_b0,lVar13,(long ****)"set_rep_icon_seriesfp_%02d",ppppppppplVar19,
                       ppppbVar20,param_8,param_9,param_10,param_11);
        uVar18 = local_a8[0];
        FUN_7103778b80(local_a8[0],(long)plVar16,ppppppppplVar19,ppppbVar20,param_8,param_9,param_10
                       ,param_11);
        local_b0 = &PTR_FUN_710523d9a8;
        local_a8[0] = 0;
        if (uVar18 != 0) {
          FUN_710392eb40(uVar18);
        }
        auVar34 = FUN_7103776910(&local_b0,lVar13,(long ****)"set_rep_fighter_%02d",
                                 uVar24 & 0xffffffff,ppppbVar20,param_8,param_9,param_10,param_11);
        param_8 = (long ****)0x3;
        param_9 = 1;
        param_7 = (byte ****)(uVar24 & 0xffffffff);
        FUN_710239d920(auVar34,param_2,param_3,&local_b0,plVar12,local_150,param_7,(long ****)0x3,1,
                       param_10,param_11);
        uVar18 = local_a8[0];
        local_b0 = &PTR_FUN_710523d9a8;
        local_a8[0] = 0;
        if (uVar18 != 0) {
          FUN_710392eb40(uVar18);
        }
        local_118 = &PTR_FUN_710523d9a8;
        local_110 = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        local_108 = &PTR_FUN_710523d9a8;
        local_100 = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < *local_158);
    }
    param_6 = (undefined **)(ulong)*(uint *)((long)param_4 + 0x1d4);
    param_7 = (byte ****)0x1;
    param_8 = (long ****)0x1;
    plVar12 = (long *)FUN_7101d0b220(param_4[0x23],(int)param_4[0x3a],param_6,(byte ****)0x1,
                                     (long ****)0x1,param_9,param_10,param_11);
    if (plVar2 != (long *)0x0) {
      plVar16 = plVar2 + 1;
      do {
        lVar22 = *plVar16;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar8) {
          *plVar16 = lVar22 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar22 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        plVar12 = (long *)std::__shared_weak_count::__release_weak();
      }
    }
  }
  puVar32 = (uint *)(param_4 + 0x3a);
  lVar22 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x98);
  if (*(int *)(lVar22 + 0x178) == 0) {
    uVar10 = *puVar32;
    if (((uVar10 < *(byte *)(lVar22 + 0x549)) &&
        (uVar10 < *(uint *)(*(long *)(DAT_7105329740 + 8) + 4))) &&
       (lVar22 = *(long *)(DAT_7105329740 + 8) + (ulong)uVar10 * 0x18,
       iVar11 = (int)((ulong)(*(long *)(lVar22 + 0x10) - *(long *)(lVar22 + 8)) >> 4), 0 < iVar11))
    {
      uVar21 = 0;
      do {
        uVar9 = FUN_710239acc0(uVar10,(ulong)uVar21,param_6,param_7,param_8,param_9,param_10,
                               param_11);
        plVar12 = (long *)(ulong)uVar9;
        uVar21 = uVar21 + 1;
      } while ((int)(uVar21 & 0xffff) < iVar11);
    }
  }
  if (*(int *)(param_4[0x23] + 0x2a8) == 9) {
    uVar10 = *(uint *)(param_4 + 0x3a);
    lVar22 = *(long *)(DAT_7105329740 + 8) + (ulong)uVar10 * 0x18;
    plVar12 = (long *)(lVar22 + 8);
    if ((ulong)(*(long *)(lVar22 + 0x10) - *plVar12 >> 4) <= (ulong)*(uint *)((long)param_4 + 0x1d4)
       ) {
LAB_71018bb94c:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    plVar2 = (long *)(*plVar12 + (ulong)*(uint *)((long)param_4 + 0x1d4) * 0x10);
    lVar22 = *plVar2;
    plVar2 = (long *)plVar2[1];
    if (plVar2 != (long *)0x0) {
      plVar16 = plVar2 + 1;
      do {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar8) {
          *plVar16 = *plVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar10 = *puVar32;
    }
    *puVar32 = uVar10 + 1;
    lVar13 = *(long *)(lVar22 + 0x28);
    plVar16 = *(long **)(lVar22 + 0x30);
    if (plVar16 == (long *)0x0) {
      *(undefined4 *)((long)param_4 + 0x1d4) = *(undefined4 *)(lVar13 + 8);
    }
    else {
      plVar1 = plVar16 + 1;
      do {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(undefined4 *)((long)param_4 + 0x1d4) = *(undefined4 *)(lVar13 + 8);
      plVar1 = plVar16 + 1;
      do {
        lVar22 = *plVar1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar22 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar22 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        plVar12 = (long *)std::__shared_weak_count::__release_weak();
      }
    }
    if (0x12 < *(uint *)((long)param_4 + 0xe4)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)((long)param_4 + (long)(int)*(uint *)((long)param_4 + 0xe4) * 4 + 0x98) = 1;
    if (plVar2 != (long *)0x0) {
      plVar16 = plVar2 + 1;
      do {
        lVar22 = *plVar16;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar8) {
          *plVar16 = lVar22 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar22 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        plVar12 = (long *)std::__shared_weak_count::__release_weak();
      }
    }
  }
  return plVar12;
}

