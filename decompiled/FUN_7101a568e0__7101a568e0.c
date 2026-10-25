// addr:      7101a568e0
// offset:    0x1a568e0
// name:      FUN_7101a568e0
// mangled:   
// signature: undefined __cdecl FUN_7101a568e0(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a568e0(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar8;
  undefined8 extraout_x1_05;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *********ppppppppplVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68 [2];
  
  plVar16 = (long *)(param_2 + 8);
  lVar5 = *plVar16;
  uVar1 = *(uint *)(lVar5 + 0x1f8);
  uVar14 = (uint)param_3;
  if (*(int *)(lVar5 + 0x5d0) == 0) {
    if (uVar14 == 0) {
      uVar14 = 1;
    }
    if (uVar14 == 2) {
      FUN_7101a06920(lVar5,0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      *(undefined4 *)(*plVar16 + 500) = 3;
      *(int *)(*plVar16 + 0x1f0) = *(int *)(*plVar16 + 0x150) + 1;
      FUN_7101a028b0(*plVar16,2,param_3,param_4,param_5,param_6,param_7,param_8);
      lVar5 = *(long *)(*plVar16 + 0x5e8);
      *(undefined1 *)(*plVar16 + 0x211) = 0;
      *(undefined4 *)(lVar5 + 0x250) = 0;
      if (*(int *)(lVar5 + 0x21c) == 1) {
        param_4 = (byte ****)0x0;
        FUN_710377a280(lVar5 + 0x88,(byte *)"mel_chara_select_lv_n",1);
        param_3 = (long *********)(ulong)*(uint *)(lVar5 + 0x250);
        FUN_7103778430(lVar5 + 0x68,"cp_level_%d",param_3,param_4,param_5,param_6,param_7,param_8);
      }
      *(undefined1 *)(*(long *)(param_2 + 8) + 0x6bd) = 0;
      FUN_7103778760(*(long *)(*(long *)(*(long *)(param_2 + 8) + 0x5e8) + 0x10),0x710425ed91);
      lVar5 = *(long *)(*(long *)(param_2 + 8) + 0x5e8);
      FUN_7103778760(*(long *)(lVar5 + 0x10),0x710433a9c5);
      FUN_7103778760(*(long *)(lVar5 + 0xf0),0x710433a9c5);
      FUN_7103778760(*(long *)(lVar5 + 0x100),0x710433a9c5);
      FUN_7101a57400(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_7101a024c0(*(long *)(param_2 + 8),-1,param_3,param_4,param_5,param_6,param_7,param_8);
      lVar5 = *(long *)(*(long *)(param_2 + 8) + 0x5e8);
      *(undefined1 *)(*(long *)(param_2 + 8) + 0x2e0) = 0;
      *(undefined4 *)(lVar5 + 0x254) = 0;
      FUN_7103778300(0x3f800000,*(long *)(lVar5 + 0x40),0x7104349d11);
      plVar15 = *(long **)(*(long *)(lVar5 + 0xa0) + 0x10);
      if (plVar15 != (long *)0x0) {
        param_3 = (long *********)0x0;
        param_4 = (byte ****)0x0;
        local_6c = 0;
        FUN_71037a2270(plVar15,(ushort *)&local_6c,0,0);
      }
      lVar5 = *plVar16;
      plVar15 = *(long **)(*(long *)(*(long *)(lVar5 + 0x5e8) + 0x80) + 0x10);
      if (plVar15 != (long *)0x0) {
        param_3 = (long *********)&DAT_ffffffff;
        param_4 = (byte ****)0x1;
        FUN_71037a2270(plVar15,(ushort *)&DAT_7104753ea0,0xffffffff,1);
        lVar5 = *plVar16;
      }
      lVar10 = *(long *)(lVar5 + 0x5e8);
      *(undefined4 *)(lVar5 + 0x5d0) = 1;
      **(undefined8 **)(lVar10 + 0x178) = 0;
      *(undefined8 *)(*(long *)(lVar10 + 0x178) + 8) = 0;
      **(undefined8 **)(lVar10 + 0x188) = 0;
      *(undefined8 *)(*(long *)(lVar10 + 0x188) + 8) = 0;
      FUN_7103778300(0x3f800000,*(long *)(lVar10 + 0x10),0x710436cb6c);
      *(undefined4 *)(lVar10 + 0x214) = 1;
      FUN_71019fc7a0(lVar10);
      *(undefined1 *)(*(long *)(param_2 + 8) + 0x6ba) = 1;
      FUN_7101a54360(param_1,param_2);
      uVar14 = 2;
    }
    else if (uVar14 == 1) {
      FUN_7101a06920(lVar5,0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      *(undefined4 *)(*plVar16 + 500) = 3;
      *(int *)(*plVar16 + 0x1f0) = *(int *)(*plVar16 + 0x150) + 1;
      lVar5 = *plVar16;
      param_3 = (long *********)(ulong)*(uint *)(lVar5 + 0x1fc);
      param_4 = (byte ****)(ulong)*(byte *)(lVar5 + 0x6bb);
      *(undefined4 *)(lVar5 + 0x1f8) = 1;
      FUN_7101a000c0(*(long *)(lVar5 + 0x5e8),1,(long ****)param_3,param_4,param_5,param_6,param_7,
                     param_8);
      FUN_7101a02cb0(lVar5,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
      if ((((*(char *)(lVar5 + 0x1c4) != -1) && (*(int *)(lVar5 + 0x1f8) == 0)) &&
          (*(int *)(lVar5 + 0x394) == 0)) &&
         (plVar15 = *(long **)(*(long *)(*(long *)(lVar5 + 0x5e8) + 0x80) + 0x10),
         plVar15 != (long *)0x0)) {
        param_3 = (long *********)&DAT_ffffffff;
        param_4 = (byte ****)0x1;
        FUN_71037a2270(plVar15,(ushort *)(lVar5 + 0x1d0),0xffffffff,1);
      }
      lVar5 = *(long *)(*plVar16 + 0x5e8);
      *(undefined1 *)(*plVar16 + 0x2e0) = 0;
      *(undefined4 *)(lVar5 + 0x254) = 0;
      FUN_7103778300(0x3f800000,*(long *)(lVar5 + 0x40),0x7104349d11);
      plVar15 = *(long **)(*(long *)(lVar5 + 0xa0) + 0x10);
      if (plVar15 != (long *)0x0) {
        param_3 = (long *********)0x0;
        param_4 = (byte ****)0x0;
        local_70 = 0;
        FUN_71037a2270(plVar15,(ushort *)&local_70,0,0);
      }
      *(undefined1 *)(*(long *)(param_2 + 8) + 0x6bd) = 1;
      FUN_7103778760(*(long *)(*(long *)(*(long *)(param_2 + 8) + 0x5e8) + 0x10),0x710425ed91);
      lVar5 = *(long *)(*(long *)(param_2 + 8) + 0x5e8);
      FUN_7103778760(*(long *)(lVar5 + 0x10),0x710433a9c5);
      FUN_7103778760(*(long *)(lVar5 + 0xf0),0x710433a9c5);
      FUN_7103778760(*(long *)(lVar5 + 0x100),0x710433a9c5);
      FUN_7101a57400(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      lVar5 = *(long *)(param_2 + 8);
      if (((*(ulong *)(lVar5 + 0x200) & 0xff00000000000000) != 0xc100000000000000) ||
         ((*(ulong *)(lVar5 + 0x200) & 0xffffffffff) == 0)) {
        lVar10 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
        ppppppppplVar13 = *(long **********)(param_1 + 0x2d0);
        puVar6 = FUN_71032631a0(lVar10,0x11b1ccb807);
        param_3 = ppppppppplVar13;
        if (((((ulong)ppppppppplVar13 & 0xff00000000000000) == 0xc100000000000000) &&
            ((((ulong)ppppppppplVar13 & 0xffffffffff) != 0 &&
             (((ulong)puVar6 & 0xff00000000000000) == 0xc100000000000000)))) &&
           (((ulong)puVar6 & 0xffffffffff) != 0)) {
          if ((((ulong)puVar6 ^ (ulong)ppppppppplVar13) & 0xffffffffff) == 0) {
LAB_7101a56de4:
            param_3 = (long *********)FUN_7103263030(lVar10,(ulong)ppppppppplVar13);
          }
        }
        else if ((((ulong)puVar6 & 0xffffffffff) != 0 &&
                 ((ulong)puVar6 & 0xff00000000000000) == 0xc100000000000000) ==
                 (((ulong)ppppppppplVar13 & 0xff00000000000000) == 0xc100000000000000 &&
                 ((ulong)ppppppppplVar13 & 0xffffffffff) != 0)) goto LAB_7101a56de4;
        param_4 = (byte ****)0x0;
        FUN_7101a029b0(lVar5,(undefined1 *)ppppppppplVar13,param_3,0,param_5,param_6,param_7,param_8
                      );
        lVar5 = *plVar16;
      }
      uVar14 = 1;
      *(undefined4 *)(lVar5 + 0x5d0) = 1;
      lVar5 = *(long *)(lVar5 + 0x5e8);
      **(undefined8 **)(lVar5 + 0x178) = 0;
      *(undefined8 *)(*(long *)(lVar5 + 0x178) + 8) = 0;
      **(undefined8 **)(lVar5 + 0x188) = 0;
      *(undefined8 *)(*(long *)(lVar5 + 0x188) + 8) = 0;
      FUN_7103778300(0x3f800000,*(long *)(lVar5 + 0x10),0x710436cb6c);
      *(undefined4 *)(lVar5 + 0x214) = 1;
      FUN_71019fc7a0(lVar5);
      *(undefined1 *)(*(long *)(param_2 + 8) + 0x6ba) = 1;
      FUN_7101a54360(param_1,param_2);
    }
  }
  if (uVar1 == 2) {
    FUN_7101a024c0(*plVar16,-1,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar5 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
    puVar6 = FUN_71032631a0(lVar5,0x11b1ccb807);
    param_3 = (long *********)&DAT_c1ffff0000000000;
    if (((ulong)puVar6 & 0xff00000000000000) != 0xc100000000000000 ||
        ((ulong)puVar6 & 0xffffffffff) == 0) {
      param_3 = (long *********)FUN_7103263030(lVar5,0xc1ffff0000000000);
    }
    param_4 = (byte ****)0x0;
    FUN_7101a029b0(*plVar16,&DAT_c1ffff0000000000,param_3,0,param_5,param_6,param_7,param_8);
    *(undefined1 *)(*plVar16 + 0x6bd) = 0;
    lVar5 = *(long *)(*(long *)(param_1 + 0x250) + 0x60);
    lVar10 = *(long *)(lVar5 + 0x1b8);
    if (lVar10 != 0) {
      lVar5 = lVar5 + 0x1b8;
      lVar7 = lVar5;
      do {
        bVar2 = *(int *)(lVar10 + 0x20) < 0;
        if (!bVar2) {
          lVar7 = lVar10;
        }
        lVar10 = *(long *)(lVar10 + (ulong)bVar2 * 8);
      } while (lVar10 != 0);
      if (((lVar7 != lVar5) && (*(int *)(lVar7 + 0x20) < 1)) &&
         (plVar15 = *(long **)(lVar7 + 0x28), plVar15 != (long *)0x0)) {
        (**(code **)(*plVar15 + 0x1f8))(plVar15,1);
        param_3 = (long *********)0x0;
        (**(code **)(*plVar15 + 0x388))(plVar15,0);
      }
    }
  }
  FUN_7101a028b0(*plVar16,uVar14,param_3,param_4,param_5,param_6,param_7,param_8);
  if ((uVar14 | 1) == 3) {
    lVar10 = *plVar16;
    lVar5 = *(long *)(lVar10 + 0x678);
    if (lVar5 != 0) {
      *(undefined1 *)(*(long *)(*(long *)(lVar5 + 8) + 0x20) + 0x166) = 0;
      *(undefined4 *)(*(long *)(lVar5 + 8) + 0x2c) = 0xffffffff;
      *(undefined1 *)(*(long *)(*(long *)(lVar5 + 8) + 0x20) + 0x167) = 0;
      *(undefined4 *)(*(long *)(lVar5 + 8) + 0x30) = 0xffffffff;
      lVar10 = *plVar16;
    }
    lVar5 = *(long *)(lVar10 + 0x680);
    if (lVar5 != 0) {
      *(undefined1 *)(*(long *)(*(long *)(lVar5 + 8) + 0x20) + 0x166) = 0;
      *(undefined4 *)(*(long *)(lVar5 + 8) + 0x2c) = 0xffffffff;
      *(undefined1 *)(*(long *)(*(long *)(lVar5 + 8) + 0x20) + 0x167) = 0;
      *(undefined4 *)(*(long *)(lVar5 + 8) + 0x30) = 0xffffffff;
    }
    FUN_7101a54a30(param_1,param_2,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    goto LAB_7101a5704c;
  }
  if ((uVar1 | 1) != 3) goto LAB_7101a5704c;
  lVar5 = *plVar16;
  if ((*(ulong *)(lVar5 + 0x200) & 0xff00000000000000) != 0xc100000000000000 ||
      (*(ulong *)(lVar5 + 0x200) & 0xffffffffff) == 0) {
    lVar10 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
    ppppppppplVar13 = *(long **********)(param_1 + 0x2d0);
    puVar6 = FUN_71032631a0(lVar10,0x11b1ccb807);
    param_3 = ppppppppplVar13;
    if (((((ulong)ppppppppplVar13 & 0xff00000000000000) == 0xc100000000000000) &&
        (((ulong)ppppppppplVar13 & 0xffffffffff) != 0)) &&
       ((((ulong)puVar6 & 0xff00000000000000) == 0xc100000000000000 &&
        (((ulong)puVar6 & 0xffffffffff) != 0)))) {
      if ((((ulong)puVar6 ^ (ulong)ppppppppplVar13) & 0xffffffffff) == 0) {
LAB_7101a56fc8:
        param_3 = (long *********)FUN_7103263030(lVar10,(ulong)ppppppppplVar13);
      }
    }
    else if ((((ulong)puVar6 & 0xffffffffff) != 0 &&
             ((ulong)puVar6 & 0xff00000000000000) == 0xc100000000000000) ==
             (((ulong)ppppppppplVar13 & 0xff00000000000000) == 0xc100000000000000 &&
             ((ulong)ppppppppplVar13 & 0xffffffffff) != 0)) goto LAB_7101a56fc8;
    param_4 = (byte ****)0x0;
    FUN_7101a029b0(lVar5,(undefined1 *)ppppppppplVar13,param_3,0,param_5,param_6,param_7,param_8);
    lVar5 = *plVar16;
  }
  *(undefined1 *)(lVar5 + 0x6bd) = 1;
  FUN_7103778760(*(long *)(*(long *)(*(long *)(param_2 + 8) + 0x5e8) + 0x10),0x710425ed91);
  lVar5 = *(long *)(*(long *)(param_2 + 8) + 0x5e8);
  FUN_7103778760(*(long *)(lVar5 + 0x10),0x710433a9c5);
  FUN_7103778760(*(long *)(lVar5 + 0xf0),0x710433a9c5);
  FUN_7103778760(*(long *)(lVar5 + 0x100),0x710433a9c5);
  FUN_7101a54360(param_1,param_2);
LAB_7101a5704c:
  FUN_7101a57400(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar5 = *(long *)(param_2 + 8);
  uVar8 = extraout_x1_00;
  if ((*(int *)(lVar5 + 0x394) != 0) && (0 < *(int *)(param_1 + 700))) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x250) + 0x4d8);
    uVar9 = 0;
    lVar10 = 0x1a8;
    do {
      if (uVar1 != uVar9) {
        lVar7 = *(long *)(param_1 + 0x250);
        if ((long)uVar9 < (long)*(int *)(lVar7 + 0xc)) {
          uVar12 = (*(long *)(lVar7 + 0xb0) - *(long *)(lVar7 + 0xa8) >> 4) * -0x1041041041041041;
          if (uVar12 < uVar9 || uVar12 - uVar9 == 0) goto LAB_7101a573f4;
          iVar4 = *(int *)(*(long *)(lVar7 + 0xa8) + lVar10 + -0x198);
        }
        else {
          iVar4 = DAT_7105324af8;
          if (((DAT_7105324ed0 & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(&DAT_7105324ed0), uVar8 = extraout_x1_01,
             iVar4 = DAT_7105324af8, iVar3 != 0)) {
            FUN_71017abd00((undefined8 *)&DAT_7105324af0);
            __cxa_guard_release(&DAT_7105324ed0);
            uVar8 = extraout_x1_02;
            iVar4 = DAT_7105324af8;
          }
        }
        if (iVar4 == 0) {
          lVar7 = *(long *)(param_1 + 0x250);
          if ((long)uVar9 < (long)*(int *)(lVar7 + 0xc)) {
            uVar12 = (*(long *)(lVar7 + 0xb0) - *(long *)(lVar7 + 0xa8) >> 4) * -0x1041041041041041;
            if (uVar12 < uVar9 || uVar12 - uVar9 == 0) {
LAB_7101a573f4:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            puVar11 = (undefined8 *)(*(long *)(lVar7 + 0xa8) + lVar10);
          }
          else {
            puVar11 = &DAT_7105324c90;
            if (((DAT_7105324ed8 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(&DAT_7105324ed8), uVar8 = extraout_x1_03,
               puVar11 = &DAT_7105324c90, iVar4 != 0)) {
              DAT_7105324cb4 = 0xffff;
              DAT_7105324c90 = 0xffffffff;
              DAT_7105324c98 = 0;
              DAT_7105324ca0 = 0xffffffffffffffff;
              DAT_7105324ca8 = 0;
              DAT_7105324cac = 0xffffffffffffffff;
              DAT_7105324cb8 = 0;
              DAT_7105324cc0 = 0;
              DAT_7105324cf0 = 0xffffffff;
              DAT_7105324cf4 = 0;
              DAT_7105324cf8 = 0;
              DAT_7105324cfc = 0;
              DAT_7105324d10 = 0;
              DAT_7105324d00 = &DAT_3f8000003f800000;
              DAT_7105324d08 = &DAT_3f8000003f800000;
              FUN_71017abd00((undefined8 *)&DAT_7105324d18);
              DAT_7105324eb8 = 0;
              DAT_7105324ec0 = 0xb95d0753f;
              DAT_7105324ec8 = 0xff;
              __cxa_guard_release(&DAT_7105324ed8);
              uVar8 = extraout_x1_04;
            }
          }
          if (*(int *)((long)puVar11 + 4) == *(int *)(lVar5 + 0x394)) {
            local_68[0] = 0;
            lVar5 = *plVar16;
            *(undefined4 *)(lVar5 + 0x394) = 0;
            FUN_71019fd0b0(*(long *)(lVar5 + 0x5e8),local_68,(long ****)param_3,param_4,param_5,
                           param_6,param_7,param_8);
            uVar8 = extraout_x1_05;
            break;
          }
        }
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x3f0;
    } while ((long)uVar9 < (long)*(int *)(param_1 + 700));
  }
  *(undefined1 *)(*plVar16 + 0x6ba) = 1;
  if (uVar14 == 2) {
    ppppppppplVar13 = (long *********)&DAT_c1ffff0000000000;
    FUN_7101a07770(*plVar16,uVar8,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar5 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
    puVar6 = FUN_71032631a0(lVar5,0x11b1ccb807);
    if (((ulong)puVar6 & 0xff00000000000000) != 0xc100000000000000 ||
        ((ulong)puVar6 & 0xffffffffff) == 0) {
      ppppppppplVar13 = (long *********)FUN_7103263030(lVar5,0xc1ffff0000000000);
    }
    FUN_7101a029b0(*plVar16,&DAT_c1ffff0000000000,ppppppppplVar13,0,param_5,param_6,param_7,param_8)
    ;
    *(undefined1 *)(*plVar16 + 0x6bd) = 0;
    lVar5 = *(long *)(*(long *)(param_1 + 0x250) + 0x60);
    lVar10 = *(long *)(lVar5 + 0x1b8);
    if (lVar10 != 0) {
      lVar5 = lVar5 + 0x1b8;
      lVar7 = lVar5;
      do {
        bVar2 = *(int *)(lVar10 + 0x20) < 0;
        if (!bVar2) {
          lVar7 = lVar10;
        }
        lVar10 = *(long *)(lVar10 + (ulong)bVar2 * 8);
      } while (lVar10 != 0);
      if (((lVar7 != lVar5) && (*(int *)(lVar7 + 0x20) < 1)) &&
         (plVar16 = *(long **)(lVar7 + 0x28), plVar16 != (long *)0x0)) {
        (**(code **)(*plVar16 + 0x1f8))(plVar16,0);
        (**(code **)(*plVar16 + 0x388))(plVar16,1,0);
      }
    }
  }
  return;
}

