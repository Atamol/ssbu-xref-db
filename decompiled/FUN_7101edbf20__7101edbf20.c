// addr:      7101edbf20
// offset:    0x1edbf20
// name:      FUN_7101edbf20
// mangled:   
// signature: undefined __cdecl FUN_7101edbf20(long param_1)


void FUN_7101edbf20(long param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  ulong *puVar3;
  undefined *puVar4;
  char cVar5;
  byte ***pppbVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  char *pcVar12;
  undefined **ppuVar13;
  long *********ppppppppplVar14;
  byte ****ppppbVar15;
  undefined8 uVar16;
  long ****pppplVar17;
  undefined8 uVar18;
  undefined8 *in_x5;
  undefined8 *puVar19;
  byte ****in_x6;
  char *in_x7;
  byte ****ppppbVar20;
  undefined8 *puVar21;
  long lVar22;
  ulong *puVar23;
  ulong *puVar24;
  uint uVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  uint auStack_140 [2];
  byte ***apppbStack_138 [8];
  uint auStack_f8 [2];
  byte ***apppbStack_f0 [8];
  undefined **local_b0;
  byte ***local_a8 [9];
  
  if (*(int *)(param_1 + 0xf4) == 0) {
    plVar9 = (long *)(param_1 + 0x100);
    ppuVar13 = &PTR_DAT_71050b3930;
    ppppbVar15 = (byte ****)0x26628ac126;
    pppplVar17 = (long ****)0x1;
    FUN_71032cb040(param_1,plVar9,(long ****)&PTR_DAT_71050b3930,(byte ****)0x26628ac126,
                   (long ****)0x1,in_x5,in_x6,in_x7);
    FUN_71023d4940(*(undefined8 *)(DAT_7105329de8 + 8),*(long **)(param_1 + 0x40),ppuVar13,
                   ppppbVar15,pppplVar17,in_x5,in_x6,in_x7);
    if ((long *)**(long **)(param_1 + 0x40) == (long *)0x0) {
      lVar29 = 0;
    }
    else {
      lVar29 = *(long *)**(long **)(param_1 + 0x40);
    }
    pcVar12 = "actor";
    FUN_71038f7260(lVar29,"actor");
    puVar21 = *(undefined8 **)(lVar29 + 0x10);
    *puVar21 = puVar21[-2];
    puVar21[1] = puVar21[-1];
    lVar22 = *(long *)(lVar29 + 0x10);
    *(long *)(lVar29 + 0x10) = lVar22 + 0x10;
    FUN_71038f5390(lVar29,(long *)(lVar22 + -0x10),"__index");
    FUN_71038f9510(lVar29,(long *)&DAT_71050b39c0,0,ppppbVar15,pppplVar17,in_x5,in_x6,in_x7);
    *(long *)(lVar29 + 0x10) = *(long *)(lVar29 + 0x10) + -0x10;
    plVar8 = FUN_71038f6930(lVar29,8);
    *plVar8 = param_1;
    FUN_71038f4d40(lVar29,(long *)(*(long *)(lVar29 + 0x18) + 0x40),"actor");
    FUN_71038f5c00(lVar29,-2);
    ppuVar13 = (undefined **)pcVar12;
    if (lVar29 != 0) {
      lVar22 = *(long *)(*(long *)(lVar29 + 0x18) + 0x40);
      if (*(uint *)(lVar22 + 0xc) < 2) {
        plVar8 = (long *)(*(long *)(lVar22 + 0x18) +
                         ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar22 + 0xb) & 0x3f)) & 2
                         ) * 0x20);
        do {
          if (((int)plVar8[3] == 0x13) && (plVar10 = plVar8, plVar8[2] == 2)) break;
          piVar1 = (int *)((long)plVar8 + 0x1c);
          plVar8 = plVar8 + (long)*piVar1 * 4;
          plVar10 = &DAT_7104862960;
        } while (*piVar1 != 0);
      }
      else {
        plVar10 = (long *)(*(long *)(lVar22 + 0x10) + 0x10);
      }
      pcVar12 = "actor";
      FUN_71038f5390(lVar29,plVar10,"actor");
      ppuVar13 = (undefined **)pcVar12;
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0)) {
      FUN_7101764000();
      ppuVar13 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    puVar21 = (undefined8 *)FUN_71032cbb00(param_1,(byte *)"standard_matchup");
    cVar5 = DAT_710530d568;
    puVar23 = *(ulong **)(param_1 + 0x108);
    puVar24 = *(ulong **)(param_1 + 0x110);
    if (puVar23 != puVar24) {
      ppuVar13 = (undefined **)(ulong)(uint)puVar23[1];
      in_x7 = "set_rep_chara";
      pppplVar17 = (long ****)0x5;
      ppppbVar15 = (byte ****)0x3;
      in_x6 = (byte ****)0x0;
      in_x5 = puVar21;
      FUN_7101edcad0(plVar9,*puVar23,(long ****)ppuVar13,(byte ****)0x3,(long ****)0x5,puVar21,
                     (byte ****)0x0,(long ****)"set_rep_chara");
      puVar23 = *(ulong **)(param_1 + 0x108);
      puVar24 = *(ulong **)(param_1 + 0x110);
      if (puVar24 != puVar23) {
        lVar29 = 0;
        uVar31 = 0;
        do {
          puVar3 = (ulong *)((long)puVar23 + lVar29);
          if (*(char *)((long)puVar3 + 0x54) != '\0') {
            uVar28 = *puVar3;
            uVar26 = puVar3[1];
            FUN_71003a4ca0((uint *)&local_b0,"set_rep_player_icon_%02d",uVar31 & 0xffffffff,ppuVar13
                           ,ppppbVar15,pppplVar17,in_x5,in_x6,in_x7);
            ppuVar13 = (undefined **)(ulong)(uint)uVar26;
            ppppbVar15 = (byte ****)0x2;
            pppplVar17 = (long ****)0x0;
            in_x6 = (byte ****)0x0;
            in_x5 = puVar21;
            in_x7 = (char *)local_a8;
            FUN_7101edcad0(plVar9,uVar28,(long ****)ppuVar13,(byte ****)0x2,(long ****)0x0,puVar21,
                           (byte ****)0x0,(long ****)local_a8);
            puVar23 = *(ulong **)(param_1 + 0x108);
            puVar24 = *(ulong **)(param_1 + 0x110);
          }
          uVar26 = ((long)puVar24 - (long)puVar23 >> 3) * 0x2e8ba2e8ba2e8ba3;
          uVar31 = uVar31 + 1;
          lVar29 = lVar29 + 0x58;
        } while (uVar31 <= uVar26 && uVar26 - uVar31 != 0);
      }
    }
    if ((puVar24 != puVar23) && (cVar5 == '\x01')) {
      lVar29 = 0;
      uVar31 = 0;
      do {
        uVar28 = *(ulong *)((long)puVar23 + lVar29);
        uVar26 = ((ulong *)((long)puVar23 + lVar29))[1];
        FUN_71003a4ca0((uint *)&local_b0,"set_rep_player_icon_t_%02d",uVar31 & 0xffffffff,ppuVar13,
                       ppppbVar15,pppplVar17,in_x5,in_x6,in_x7);
        ppuVar13 = (undefined **)(ulong)(uint)uVar26;
        ppppbVar15 = (byte ****)0x2;
        pppplVar17 = (long ****)0x0;
        in_x6 = (byte ****)0x0;
        in_x5 = puVar21;
        in_x7 = (char *)local_a8;
        FUN_7101edcad0(plVar9,uVar28,(long ****)ppuVar13,(byte ****)0x2,(long ****)0x0,puVar21,
                       (byte ****)0x0,(long ****)local_a8);
        puVar23 = *(ulong **)(param_1 + 0x108);
        uVar26 = (*(long *)(param_1 + 0x110) - (long)puVar23 >> 3) * 0x2e8ba2e8ba2e8ba3;
        uVar31 = uVar31 + 1;
        lVar29 = lVar29 + 0x58;
      } while (uVar31 <= uVar26 && uVar26 - uVar31 != 0);
    }
    if (((cVar5 == '\x04') && (DAT_710530d7cb == '\0')) && (DAT_710530d786 != 0xff)) {
      FUN_71003a4ca0((uint *)&local_b0,"set_parts_enemy_any_%02d",(ulong)DAT_710530d786,ppuVar13,
                     ppppbVar15,pppplVar17,in_x5,in_x6,in_x7);
      if ((DAT_710530d786 < 8) && ((1 << (ulong)(DAT_710530d786 & 0x1f) & 0xc1U) != 0)) {
        puVar23 = *(ulong **)(param_1 + 0x120);
        if (*(ulong **)(param_1 + 0x128) == puVar23) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        uVar31 = *puVar23;
        uVar25 = (uint)puVar23[1];
        in_x6 = local_a8;
        FUN_7101edcad0(plVar9,uVar31,(long ****)(ulong)uVar25,(byte ****)0x3,
                       (long ****)&DAT_00000004,puVar21,in_x6,(long ****)"set_rep_chara_00");
        pcVar12 = "set_rep_chara_sd_00";
        uVar16 = 3;
        uVar18 = 4;
        pppplVar17 = (long ****)(ulong)uVar25;
        puVar19 = puVar21;
        ppppbVar15 = in_x6;
        FUN_7101edcad0(plVar9,uVar31,pppplVar17,(byte ****)0x3,(long ****)&DAT_00000004,puVar21,
                       in_x6,(long ****)"set_rep_chara_sd_00");
        in_x7 = (char *)apppbStack_f0;
        FUN_71003a4ca0(auStack_f8,"set_rep_chara_%02d",1,pppplVar17,uVar16,uVar18,puVar19,ppppbVar15
                       ,pcVar12);
        uVar16 = 3;
        uVar18 = 4;
        pppplVar17 = (long ****)(ulong)uVar25;
        puVar19 = puVar21;
        ppppbVar15 = in_x6;
        ppppbVar20 = (byte ****)in_x7;
        FUN_7101edcad0(plVar9,uVar31,pppplVar17,(byte ****)0x3,(long ****)&DAT_00000004,puVar21,
                       in_x6,(long ****)in_x7);
        FUN_71003a4ca0(auStack_f8,"set_rep_chara_%02d",2,pppplVar17,uVar16,uVar18,puVar19,ppppbVar15
                       ,ppppbVar20);
        uVar16 = 3;
        uVar18 = 4;
        pppplVar17 = (long ****)(ulong)uVar25;
        puVar19 = puVar21;
        ppppbVar15 = in_x6;
        ppppbVar20 = (byte ****)in_x7;
        FUN_7101edcad0(plVar9,uVar31,pppplVar17,(byte ****)0x3,(long ****)&DAT_00000004,puVar21,
                       in_x6,(long ****)in_x7);
        FUN_71003a4ca0(auStack_f8,"set_rep_chara_%02d",3,pppplVar17,uVar16,uVar18,puVar19,ppppbVar15
                       ,ppppbVar20);
        uVar16 = 3;
        uVar18 = 4;
        pppplVar17 = (long ****)(ulong)uVar25;
        puVar19 = puVar21;
        ppppbVar15 = in_x6;
        ppppbVar20 = (byte ****)in_x7;
        FUN_7101edcad0(plVar9,uVar31,pppplVar17,(byte ****)0x3,(long ****)&DAT_00000004,puVar21,
                       in_x6,(long ****)in_x7);
        FUN_71003a4ca0(auStack_f8,"set_rep_chara_%02d",4,pppplVar17,uVar16,uVar18,puVar19,ppppbVar15
                       ,ppppbVar20);
        uVar16 = 3;
        uVar18 = 4;
        pppplVar17 = (long ****)(ulong)uVar25;
        puVar19 = puVar21;
        ppppbVar15 = in_x6;
        ppppbVar20 = (byte ****)in_x7;
        FUN_7101edcad0(plVar9,uVar31,pppplVar17,(byte ****)0x3,(long ****)&DAT_00000004,puVar21,
                       in_x6,(long ****)in_x7);
        FUN_71003a4ca0(auStack_f8,"set_rep_chara_%02d",5,pppplVar17,uVar16,uVar18,puVar19,ppppbVar15
                       ,ppppbVar20);
        uVar16 = 3;
        uVar18 = 4;
        pppplVar17 = (long ****)(ulong)uVar25;
        puVar19 = puVar21;
        ppppbVar15 = in_x6;
        ppppbVar20 = (byte ****)in_x7;
        FUN_7101edcad0(plVar9,uVar31,pppplVar17,(byte ****)0x3,(long ****)&DAT_00000004,puVar21,
                       in_x6,(long ****)in_x7);
        FUN_71003a4ca0(auStack_f8,"set_rep_chara_%02d",6,pppplVar17,uVar16,uVar18,puVar19,ppppbVar15
                       ,ppppbVar20);
        ppppbVar15 = (byte ****)0x3;
        pppplVar17 = (long ****)&DAT_00000004;
        ppuVar13 = (undefined **)(ulong)uVar25;
        in_x5 = puVar21;
        FUN_7101edcad0(plVar9,uVar31,(long ****)ppuVar13,(byte ****)0x3,(long ****)&DAT_00000004,
                       puVar21,in_x6,(long ****)in_x7);
      }
      else {
        lVar29 = *(long *)(param_1 + 0x120);
        lVar22 = *(long *)(param_1 + 0x128);
        if (lVar22 != lVar29) {
          lVar32 = 0;
          uVar31 = 1;
          do {
            if (DAT_710530d786 - 1 < 8) {
              uVar26 = *(ulong *)(lVar29 + lVar32);
              uVar25 = (uint)((ulong *)(lVar29 + lVar32))[1];
              switch((uint)DAT_710530d786) {
              case 1:
                uVar28 = uVar26 & 0xffffffffff;
                if ((uVar26 & 0xff00000000000000) == 0xc100000000000000 && uVar28 != 0) {
                  if (uVar28 < 0x12915a4ff6) {
                    if (uVar28 == 0x105cf985ed) goto LAB_7101edc6d8;
                    if (uVar28 == 0x1280f1c82e) goto LAB_7101edc7dc;
                  }
                  else {
                    if (uVar28 == 0x12915a4ff6) {
                      uVar27 = 3;
                      goto LAB_7101edc828;
                    }
                    if (uVar28 == 0x14ef73f367) goto LAB_7101edc80c;
                  }
                }
                break;
              case 2:
                uVar28 = uVar26 & 0xffffffffff;
                if ((uVar26 & 0xff00000000000000) == 0xc100000000000000 && uVar28 != 0) {
                  if (uVar28 == 0xe18857219) {
                    uVar27 = 1;
                    if (uVar25 != 0) {
                      uVar27 = 2;
                    }
                  }
                  else {
                    if (uVar28 != 0xee02f04df) break;
                    uVar27 = 0;
                    if (uVar25 != 0) {
                      uVar27 = 3;
                    }
                  }
                  goto LAB_7101edc828;
                }
                break;
              case 3:
                if ((uVar26 & 0xff0000ffffffffff) == 0xc10000105d8a1bb1) {
                  puVar2 = (undefined4 *)&DAT_7104470980;
joined_r0x007101edc758:
                  if (7 < uVar25) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  uVar27 = puVar2[(int)uVar25];
                  if (-1 < (int)puVar2[(int)uVar25]) goto LAB_7101edc828;
                }
                break;
              case 4:
                if ((uVar26 & 0xff0000ffffffffff) == 0xc10000105d8a1bb1) {
                  puVar2 = &DAT_7104470e20;
                  goto joined_r0x007101edc758;
                }
                break;
              case 5:
                uVar28 = uVar26 & 0xffffffffff;
                if ((uVar26 & 0xff00000000000000) == 0xc100000000000000 && uVar28 != 0) {
                  if (uVar28 == 0x1257ab1d87) {
LAB_7101edc80c:
                    uVar27 = 2;
                    goto LAB_7101edc828;
                  }
                  if (uVar28 == 0x13fdfdfb2b) goto LAB_7101edc6d8;
                  if (uVar28 == 0x15d7061f77) goto LAB_7101edc7dc;
                }
                break;
              case 8:
                if ((uVar25 == 0) && ((uVar26 & 0xff0000ffffffffff) == 0xc100000c29ebe495)) {
LAB_7101edc6d8:
                  uVar27 = 0;
                }
                else {
                  if (((uVar26 & 0xff0000ffffffffff) != 0xc100000df1f263d6) || (uVar25 != 0)) break;
LAB_7101edc7dc:
                  uVar27 = 1;
                }
LAB_7101edc828:
                FUN_71003a4ca0(auStack_f8,"set_rep_chara_%02d",(ulong)uVar27,ppuVar13,ppppbVar15,
                               pppplVar17,in_x5,in_x6,in_x7);
                FUN_71003a4ca0(auStack_140,"set_rep_chara_sd_%02d",(ulong)uVar27,ppuVar13,ppppbVar15
                               ,pppplVar17,in_x5,in_x6,in_x7);
                FUN_7101edcad0(plVar9,uVar26,(long ****)(ulong)uVar25,(byte ****)0x3,
                               (long ****)&DAT_00000004,puVar21,local_a8,(long ****)apppbStack_f0);
                ppppbVar15 = (byte ****)0x3;
                pppplVar17 = (long ****)&DAT_00000004;
                ppuVar13 = (undefined **)(ulong)uVar25;
                in_x5 = puVar21;
                in_x6 = local_a8;
                in_x7 = (char *)apppbStack_138;
                FUN_7101edcad0(plVar9,uVar26,(long ****)ppuVar13,(byte ****)0x3,
                               (long ****)&DAT_00000004,puVar21,local_a8,(long ****)apppbStack_138);
                lVar29 = *(long *)(param_1 + 0x120);
                lVar22 = *(long *)(param_1 + 0x128);
              }
            }
            uVar26 = (lVar22 - lVar29 >> 3) * 0x2e8ba2e8ba2e8ba3;
            if (uVar26 < uVar31 || uVar26 - uVar31 == 0) break;
            uVar31 = uVar31 + 1;
            lVar32 = lVar32 + 0x58;
          } while( true );
        }
      }
    }
    else {
      lVar29 = *(long *)(param_1 + 0x120);
      uVar31 = (*(long *)(param_1 + 0x128) - lVar29 >> 3) * 0xba2e8ba3;
      iVar7 = (int)uVar31;
      uVar25 = 5;
      if (4 < iVar7) {
        uVar25 = 6;
      }
      uVar27 = 4;
      if (1 < iVar7) {
        uVar27 = uVar25;
      }
      if (0 < iVar7) {
        puVar4 = &DAT_71043ae026;
        if (cVar5 != '\x01') {
          puVar4 = &DAT_7104867c2e;
        }
        if (*(long *)(param_1 + 0x128) != lVar29) {
          lVar22 = 0;
          uVar26 = 0;
          do {
            uVar25 = (uint)((ulong *)(lVar29 + lVar22))[1];
            uVar28 = *(ulong *)(lVar29 + lVar22);
            FUN_71003a4ca0((uint *)&local_b0,"set_parts_enemy_%s%d_%02d",puVar4,uVar31 & 0xffffffff,
                           uVar26 & 0xffffffff,pppplVar17,in_x5,in_x6,in_x7);
            FUN_7101edcad0(plVar9,uVar28,(long ****)(ulong)uVar25,(byte ****)0x3,
                           (long ****)(ulong)uVar27,puVar21,local_a8,(long ****)"set_rep_chara");
            ppppbVar15 = (byte ****)0x3;
            ppuVar13 = (undefined **)(ulong)uVar25;
            pppplVar17 = (long ****)(ulong)uVar27;
            in_x7 = "set_rep_chara_sd";
            in_x5 = puVar21;
            in_x6 = local_a8;
            FUN_7101edcad0(plVar9,uVar28,(long ****)ppuVar13,(byte ****)0x3,pppplVar17,puVar21,
                           local_a8,(long ****)"set_rep_chara_sd");
            uVar26 = uVar26 + 1;
            if ((long)iVar7 <= (long)uVar26) goto LAB_7101edc8c0;
            lVar29 = *(long *)(param_1 + 0x120);
            uVar28 = (*(long *)(param_1 + 0x128) - lVar29 >> 3) * 0x2e8ba2e8ba2e8ba3;
            lVar22 = lVar22 + 0x58;
          } while (uVar26 <= uVar28 && uVar28 - uVar26 != 0);
        }
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
    }
LAB_7101edc8c0:
    uVar31 = DAT_710530a7c0;
    uVar25 = 0x10;
    if (DAT_710530a7c8 != 1) {
      uVar25 = 0xe;
    }
    uVar27 = 0xf;
    if (DAT_710530a7c8 != 2) {
      uVar27 = uVar25;
    }
    FUN_7103776910(&local_b0,*(long *)*puVar21 + 8,(long ****)"set_rep_stage_00",ppuVar13,ppppbVar15
                   ,pppplVar17,in_x5,in_x6,in_x7);
    ppppppppplVar14 = (long *********)(ulong)uVar27;
    plVar9 = FUN_710323f4a0(plVar9,uVar31,(long ****)ppppppppplVar14,ppppbVar15,pppplVar17,in_x5,
                            in_x6,in_x7);
    pppbVar6 = local_a8[0];
    FUN_7103778b80((long)local_a8[0],(long)plVar9,ppppppppplVar14,ppppbVar15,pppplVar17,in_x5,in_x6,
                   in_x7);
    local_b0 = &PTR_FUN_710523d9a8;
    local_a8[0] = (byte ***)0x0;
    if (pppbVar6 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar6);
    }
    lVar29 = *(long *)(param_1 + 0x10);
    lVar22 = *(long *)(param_1 + 0x18);
    uVar31 = lVar22 - lVar29;
    if (0 < (int)(uVar31 >> 3)) {
      lVar30 = 0;
      lVar32 = 0;
      while( true ) {
        if ((ulong)(lVar22 - lVar29 >> 3) <= (ulong)(lVar30 >> 0x20)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        iVar11 = (int)(long ****)(lVar32 + (ulong)(uint)(&DAT_7104545d60)[lVar32]);
        iVar7 = 9;
        if (iVar11 < 0x500000) {
          if (iVar11 < 0x250000) {
            iVar7 = 5;
            if (iVar11 < 0x200000) {
              if (iVar11 < 0x150000) {
                if (iVar11 < 0x100000) {
                  if (iVar11 < 0xfe000) {
                    if (iVar11 < 0x50000) {
                      if (iVar11 < 0x10000) {
                        iVar7 = 3;
                        if (0 < iVar11) {
                          iVar7 = 0;
                        }
                      }
                      else {
                        iVar7 = 1;
                      }
                    }
                    else {
                      iVar7 = 2;
                    }
                  }
                  else {
                    iVar7 = 8;
                  }
                }
                else {
                  iVar7 = 4;
                }
              }
              else {
                iVar7 = 6;
              }
            }
          }
          else {
            iVar7 = 7;
          }
        }
        FUN_7103775dc0(*(long **)**(undefined8 **)(lVar29 + (lVar30 >> 0x20) * 8),iVar7,
                       (long ****)(lVar32 + (ulong)(uint)(&DAT_7104545d60)[lVar32]),ppppbVar15,
                       pppplVar17,in_x5,in_x6,in_x7);
        if ((uVar31 >> 3 & 0xffffffff) - 1 == lVar32) break;
        lVar29 = *(long *)(param_1 + 0x10);
        lVar22 = *(long *)(param_1 + 0x18);
        lVar32 = lVar32 + 1;
        lVar30 = lVar30 + 0x100000000;
      }
    }
  }
  return;
}

