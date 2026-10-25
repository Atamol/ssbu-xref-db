// addr:      7101a41230
// offset:    0x1a41230
// name:      FUN_7101a41230
// mangled:   
// signature: undefined __cdecl FUN_7101a41230(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a41230(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ushort *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  long *********ppppppppplVar8;
  byte ****ppppbVar9;
  long ****pppplVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 uStack_228;
  uint local_220;
  undefined1 *local_218;
  long *********local_210;
  byte local_208;
  byte local_207;
  byte local_138;
  byte local_a8;
  ushort auStack_9a [9];
  undefined **local_88;
  ulong local_80;
  
  if ((ulong)(*(long *)(param_1 + 0x1b8) - *(long *)(param_1 + 0x1b0) >> 4) <= (ulong)(long)param_2)
  {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar12 = *(long *)(param_1 + 0x1b0) + (long)param_2 * 0x10;
  plVar1 = (long *)(lVar12 + 8);
  iVar20 = (int)param_3;
  ppppbVar9 = param_4;
  if (*(int *)((long)param_4 + 4) == 0xb) {
    if (*(char *)(*plVar1 + 0x419) == '\0') {
      FUN_7101a4da60(*plVar1,0,param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_7101a3a120(lVar12,iVar20,param_3,ppppbVar9,param_5,param_6,param_7,param_8);
      lVar12 = *plVar1;
      **(undefined8 **)(lVar12 + 0x310) = 0;
      *(undefined8 *)(*(long *)(lVar12 + 0x310) + 8) = 0;
      **(undefined8 **)(lVar12 + 800) = 0;
      *(undefined8 *)(*(long *)(lVar12 + 800) + 8) = 0;
      if (*(int *)(lVar12 + 0x26c) != 0) {
        *(undefined4 *)(lVar12 + 0x26c) = 0;
        *(undefined1 *)(lVar12 + 0x41b) = 0;
        if (0 < *(int *)(lVar12 + 0x150)) {
          lVar14 = *(long *)(*(long *)(lVar12 + 0x328) + 0x1b8);
          if (lVar14 != 0) {
            lVar12 = *(long *)(lVar12 + 0x328) + 0x1b8;
            lVar17 = lVar12;
            do {
              bVar4 = *(int *)(lVar14 + 0x20) < 0;
              if (!bVar4) {
                lVar17 = lVar14;
              }
              lVar14 = *(long *)(lVar14 + (ulong)bVar4 * 8);
            } while (lVar14 != 0);
            if (((lVar17 != lVar12) && (*(int *)(lVar17 + 0x20) < 1)) &&
               (plVar23 = *(long **)(lVar17 + 0x28), plVar23 != (long *)0x0)) {
              (**(code **)(*plVar23 + 0x1f8))(plVar23,1);
              param_3 = (long ****)0x0;
              (**(code **)(*plVar23 + 0x388))(plVar23,0);
            }
          }
        }
      }
    }
    lVar14 = *plVar1;
    *(undefined1 *)(lVar14 + 0x419) = 1;
    lVar12 = *(long *)(lVar14 + 0x3b0);
    lVar14 = *(long *)(lVar14 + 0x3b8);
    if (lVar12 != lVar14) {
      uVar15 = (lVar14 + -0x10) - lVar12;
      uVar5 = ((uint)(uVar15 >> 4) & 0xfffffff) + 1;
      if ((uVar5 & 3) != 0) {
        lVar17 = -((ulong)uVar5 & 3);
        do {
          plVar23 = (long *)(lVar12 + 8);
          lVar12 = lVar12 + 0x10;
          lVar17 = lVar17 + 1;
          *(undefined1 *)(*plVar23 + 0x105) = 0;
        } while (lVar17 != 0);
      }
      if (0x2f < uVar15) {
        do {
          *(undefined1 *)(*(long *)(lVar12 + 8) + 0x105) = 0;
          *(undefined1 *)(*(long *)(lVar12 + 0x18) + 0x105) = 0;
          *(undefined1 *)(*(long *)(lVar12 + 0x28) + 0x105) = 0;
          plVar23 = (long *)(lVar12 + 0x38);
          lVar12 = lVar12 + 0x40;
          *(undefined1 *)(*plVar23 + 0x105) = 0;
        } while (lVar14 != lVar12);
      }
    }
  }
  lVar12 = *plVar1;
  FUN_71015547e0(&uStack_228,param_4);
  if (local_220 == 3) {
    local_218 = &DAT_c1ffff0000000000;
  }
  lVar14 = *(long *)(lVar12 + 0x250);
  uVar15 = (*(long *)(lVar12 + 600) - lVar14 >> 3) * 0x7efdfbf7efdfbf7f;
  uVar22 = (ulong)iVar20;
  if (uVar15 < uVar22 || uVar15 - uVar22 == 0) goto LAB_7101a41b08;
  if (*(char *)(lVar12 + 0x419) == '\0') {
    uVar19 = *(ulong *)(lVar14 + uVar22 * 0x3f8 + 0x18);
    uVar16 = (ulong)local_218 & 0xffffffffff;
    if ((((uVar19 & 0xff00000000000000) == 0xc100000000000000) && ((uVar19 & 0xffffffffff) != 0)) &&
       ((((ulong)local_218 & 0xff00000000000000) == 0xc100000000000000 && (uVar16 != 0)))) {
      uVar18 = 0xc100000000000000;
      if ((((ulong)local_218 ^ uVar19) & 0xffffffffff) != 0) {
LAB_7101a414d0:
        lVar14 = *(long *)(lVar12 + 0x3b0);
        uVar15 = *(long *)(lVar12 + 0x3b8) - lVar14 >> 4;
        if ((uVar18 == 0xc100000000000000) && (uVar16 != 0)) {
          if (uVar15 <= uVar22) {
LAB_7101a41b20:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          FUN_7103778300(0x3f800000,*(long *)(*(long *)(lVar14 + uVar22 * 0x10 + 8) + 0x20),
                         0x710425ed91);
          if ((ulong)(*(long *)(lVar12 + 0x3b8) - *(long *)(lVar12 + 0x3b0) >> 4) <= uVar22)
          goto LAB_7101a41b20;
          lVar14 = *(long *)(*(long *)(lVar12 + 0x3b0) + uVar22 * 0x10 + 8);
          FUN_7103778300(0x3f800000,*(long *)(lVar14 + 0x20),0x710433a9c5);
          FUN_7103778300(0x3f800000,*(long *)(lVar14 + 0xb0),0x710433a9c5);
          FUN_7103778300(0x3f800000,*(long *)(lVar14 + 0xc0),0x710433a9c5);
        }
        else {
          if (uVar15 <= uVar22) goto LAB_7101a41b20;
          FUN_7103778630(0,*(long *)(*(long *)(lVar14 + uVar22 * 0x10 + 8) + 0x20),0x710425ed91);
          if ((ulong)(*(long *)(lVar12 + 0x3b8) - *(long *)(lVar12 + 0x3b0) >> 4) <= uVar22)
          goto LAB_7101a41b20;
          lVar14 = *(long *)(*(long *)(lVar12 + 0x3b0) + uVar22 * 0x10 + 8);
          FUN_7103778630(0,*(long *)(lVar14 + 0x20),0x710433a9c5);
          FUN_7103778630(0,*(long *)(lVar14 + 0xb0),0x710433a9c5);
          FUN_7103778630(0,*(long *)(lVar14 + 0xc0),0x710433a9c5);
        }
        param_3 = (long ****)(ulong)local_220;
        FUN_7101a4a800(lVar12,iVar20,param_3,ppppbVar9,param_5,param_6,param_7,param_8);
        lVar14 = *(long *)(lVar12 + 0x250);
        uVar15 = (*(long *)(lVar12 + 600) - lVar14 >> 3) * 0x7efdfbf7efdfbf7f;
      }
    }
    else if ((uVar16 != 0 && ((ulong)local_218 & 0xff00000000000000) == 0xc100000000000000) !=
             ((uVar19 & 0xff00000000000000) == 0xc100000000000000 && (uVar19 & 0xffffffffff) != 0))
    {
      uVar18 = (ulong)local_218 & 0xff00000000000000;
      goto LAB_7101a414d0;
    }
  }
  if (uVar22 < uVar15) {
    FUN_71016b6a10((undefined8 *)(lVar14 + uVar22 * 0x3f8 + 8),&uStack_228);
    if (local_220 == 3) {
      bVar4 = false;
    }
    else {
      bVar4 = (ulong)local_210 >> 0x38 == 0xc1 && ((ulong)local_210 & 0xffffffffff) != 0;
    }
    lVar21 = lVar14 + uVar22 * 0x3f8;
    *(bool *)(lVar21 + 0x3f5) = bVar4;
    lVar17 = *(long *)(DAT_710532f730 + 8);
    uVar5 = FUN_7103263a30(*(long *)(lVar17 + 0x168),*(ulong *)(lVar21 + 0x18));
    *(bool *)(lVar21 + 0x3f6) = ((uVar5 ^ 0xffffffff) & 10) == 0;
    if ((local_220 == 2) &&
       (uVar5 = FUN_71032632a0(*(long *)(lVar17 + 0x168),*(ulong *)(lVar14 + uVar22 * 0x3f8 + 0x178)
                              ), (uVar5 & 1) != 0)) {
      *(undefined1 *)(lVar14 + uVar22 * 0x3f8 + 0x3f7) = 1;
    }
    lVar21 = *(long *)(lVar12 + 0x3b0);
    if ((ulong)(*(long *)(lVar12 + 0x3b8) - lVar21 >> 4) <= uVar22) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    if ((local_220 & 0xfffffffe) == 2) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_7101a0d0d0(DAT_7105324ae8,local_218);
    }
    plVar23 = (long *)(lVar21 + uVar22 * 0x10 + 8);
    FUN_7101a44850(*plVar23,local_220,param_3,ppppbVar9,param_5,param_6,param_7,param_8);
    uVar11 = 1;
    pppplVar10 = (long ****)(ulong)*(byte *)(lVar14 + uVar22 * 0x3f8 + 0x3f7);
    FUN_7101a42ba0((undefined8 *)*plVar23,local_218,local_210,(byte ****)(ulong)local_208,pppplVar10
                   ,1,param_7,param_8);
    lVar21 = *plVar23;
    uVar15 = (ulong)local_207;
    *(uint *)(lVar21 + 0xfc) = (uint)local_207;
    ppppppppplVar8 = local_210;
    if (*(int *)(lVar21 + 0xd8) == 1) {
      FUN_710377a280(lVar21 + 0x78,(byte *)"mel_chara_select_lv_n",1);
      ppppppppplVar8 = (long *********)(ulong)*(uint *)(lVar21 + 0xfc);
      FUN_7103778430(lVar21 + 0x58,"cp_level_%d",ppppppppplVar8,uVar15,pppplVar10,uVar11,param_7,
                     param_8);
    }
    ppppbVar9 = (byte ****)(ulong)local_138;
    lVar21 = *plVar23;
    *(uint *)(lVar21 + 0x100) = (uint)local_138;
    if ((local_138 == 0) || (*(int *)(lVar21 + 0xd8) != 2)) {
      plVar13 = *(long **)(*(long *)(lVar21 + 0x90) + 0x10);
      if (plVar13 != (long *)0x0) {
        ppppppppplVar8 = (long *********)0x0;
        ppppbVar9 = (byte ****)0x0;
        local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
        FUN_71037a2270(plVar13,(ushort *)&local_88,0,0);
      }
    }
    else {
      ppppppppplVar8 = (long *********)0x1;
      FUN_710377a280(lVar21 + 0x88,(byte *)"mel_chara_select_fp_lv_n",1);
    }
    FUN_7101a452f0(*plVar23,iVar6,ppppppppplVar8,ppppbVar9,pppplVar10,uVar11,param_7,param_8);
    ppppppppplVar8 = (long *********)(ulong)local_a8;
    FUN_7101a42170((undefined8 *)*plVar23,auStack_9a,ppppppppplVar8,ppppbVar9,pppplVar10,uVar11,
                   param_7,param_8);
    puVar3 = local_218;
    bVar4 = FUN_7103265e70(lVar17 + 0x160,(ulong)local_218);
    if (bVar4) {
      uVar7 = FUN_710327ac80((ulong)puVar3);
    }
    else {
      uVar7 = 5;
    }
    lVar17 = lVar14 + uVar22 * 0x3f8;
    *(undefined4 *)(lVar17 + 0x3ec) = uVar7;
    uVar5 = *(uint *)(lVar17 + 0x10);
    if (uVar5 < 2) {
      if (bVar4) {
        FUN_7103776910(&local_88,*plVar23 + 0x18,(long ****)"set_txt_chara_name",ppppppppplVar8,
                       ppppbVar9,pppplVar10,uVar11,param_7,param_8);
        uVar15 = local_80;
        if (*(long **)(local_80 + 0x10) != (long *)0x0) {
          ppppppppplVar8 = (long *********)&DAT_ffffffff;
          ppppbVar9 = (byte ****)0x1;
          FUN_71037a2270(*(long **)(local_80 + 0x10),(ushort *)(lVar14 + uVar22 * 0x3f8 + 0x48),
                         0xffffffff,1);
        }
        local_88 = &PTR_FUN_710523d9a8;
        local_80 = 0;
        if (uVar15 != 0) {
          FUN_710392eb40(uVar15);
        }
      }
    }
    else if (uVar5 == 2) {
      lVar17 = *plVar23;
      plVar13 = *(long **)(*(long *)(lVar17 + 0x70) + 0x10);
      if (plVar13 != (long *)0x0) {
        ppppppppplVar8 = (long *********)&DAT_ffffffff;
        ppppbVar9 = (byte ****)0x1;
        FUN_71037a2270(plVar13,(ushort *)(lVar14 + uVar22 * 0x3f8 + 0xd8),0xffffffff,1);
        lVar17 = *plVar23;
      }
      FUN_7101a453d0(lVar17,*(undefined1 *)(lVar14 + uVar22 * 0x3f8 + 0x110),ppppppppplVar8,
                     ppppbVar9,pppplVar10,uVar11,param_7,param_8);
    }
    if (iVar20 == 0) {
      puVar2 = (ushort *)(lVar14 + 0x2c);
      if (*(char *)(lVar12 + 0x221) != '\x01') {
        puVar2 = (ushort *)(lVar14 + 0x2a);
      }
      FUN_7101a48ae0(lVar12,*puVar2,ppppppppplVar8,ppppbVar9,pppplVar10,uVar11,param_7,param_8);
      FUN_7101a489d0(lVar12,*(ushort *)(lVar14 + 0x2e),ppppppppplVar8,ppppbVar9,pppplVar10,uVar11,
                     param_7,param_8);
    }
    lVar12 = *plVar1;
    if ((*(int *)(lVar12 + 0x26c) != 1) && (*(char *)(lVar12 + 0x419) == '\0')) {
      iVar20 = *(int *)(param_4 + 1);
      **(undefined8 **)(lVar12 + 0x310) = 0;
      *(undefined8 *)(*(long *)(lVar12 + 0x310) + 8) = 0;
      **(undefined8 **)(lVar12 + 800) = 0;
      *(undefined8 *)(*(long *)(lVar12 + 800) + 8) = 0;
      if (*(int *)(lVar12 + 0x26c) != 1) {
        *(bool *)(lVar12 + 0x41b) = iVar20 != 0;
        *(undefined4 *)(lVar12 + 0x26c) = 1;
        if (0 < *(int *)(lVar12 + 0x150)) {
          lVar14 = *(long *)(*(long *)(lVar12 + 0x328) + 0x1b8);
          if (lVar14 != 0) {
            lVar12 = *(long *)(lVar12 + 0x328) + 0x1b8;
            lVar17 = lVar12;
            do {
              bVar4 = *(int *)(lVar14 + 0x20) < 0;
              if (!bVar4) {
                lVar17 = lVar14;
              }
              lVar14 = *(long *)(lVar14 + (ulong)bVar4 * 8);
            } while (lVar14 != 0);
            if (((lVar17 != lVar12) && (*(int *)(lVar17 + 0x20) < 1)) &&
               (plVar23 = *(long **)(lVar17 + 0x28), plVar23 != (long *)0x0)) {
              (**(code **)(*plVar23 + 0x1f8))(plVar23,0);
              (**(code **)(*plVar23 + 0x388))(plVar23,1,0);
            }
          }
        }
      }
      lVar12 = *(long *)(*plVar1 + 0x250);
      uVar15 = (*(long *)(*plVar1 + 600) - lVar12 >> 3) * 0x7efdfbf7efdfbf7f;
      if (uVar15 < uVar22 || uVar15 - uVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      *(undefined1 *)(lVar12 + uVar22 * 0x3f8 + 0x3f4) = 1;
      lVar12 = *(long *)(*plVar1 + 0x3b0);
      if (uVar22 < (ulong)(*(long *)(*plVar1 + 0x3b8) - lVar12 >> 4)) {
        FUN_7103778760(*(long *)(*(long *)(lVar12 + uVar22 * 0x10 + 8) + 0x20),0x710425ed91);
        lVar12 = *(long *)(*plVar1 + 0x3b0);
        if (uVar22 < (ulong)(*(long *)(*plVar1 + 0x3b8) - lVar12 >> 4)) {
          lVar12 = *(long *)(lVar12 + uVar22 * 0x10 + 8);
          FUN_7103778760(*(long *)(lVar12 + 0x20),0x710433a9c5);
          FUN_7103778760(*(long *)(lVar12 + 0xb0),0x710433a9c5);
          FUN_7103778760(*(long *)(lVar12 + 0xc0),0x710433a9c5);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    return;
  }
LAB_7101a41b08:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

