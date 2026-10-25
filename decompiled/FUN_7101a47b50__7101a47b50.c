// addr:      7101a47b50
// offset:    0x1a47b50
// name:      FUN_7101a47b50
// mangled:   
// signature: undefined __cdecl FUN_7101a47b50(long param_1, undefined8 param_2, ulong param_3, undefined8 param_4, undefined8 param_5, undefined1 * param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a47b50(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,undefined1 *param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  undefined1 *puVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  byte ****ppppbVar11;
  long ****pppplVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  undefined4 uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  long *********ppppppppplVar23;
  long lVar24;
  uint local_e4;
  undefined4 local_c0 [2];
  undefined **local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80 [4];
  int local_7c;
  undefined4 local_78;
  uint uStack_74;
  long *********local_68;
  
  uVar18 = (ulong)*(int *)(param_1 + 0x3e0);
  if (*(int *)(param_1 + 0x3e0) == -1) {
    if (DAT_71050a8078 == *(int *)(param_1 + 0x150)) {
      DAT_71050a8078 = -1;
    }
    FUN_71019e69d0(*(long **)(param_1 + 0x3a8));
    FUN_71019e66d0(*(long *)(param_1 + 0x3a8),extraout_x1_01,param_3,param_4,param_5,param_6,param_7
                   ,param_8);
    FUN_7101a48570(param_1,extraout_x1_02,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101a47d54:
    if (*(uint *)(param_1 + 0x134) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x134) * 4 + 0xe8) = 3;
      return;
    }
    goto LAB_7101a48484;
  }
  lVar17 = *(long *)(param_1 + 0x250);
  uVar14 = (*(long *)(param_1 + 600) - lVar17 >> 3) * 0x7efdfbf7efdfbf7f;
  if (uVar14 < uVar18 || uVar14 - uVar18 == 0) {
LAB_7101a48474:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar19 = *(long *)(param_1 + 0x3b0);
  if ((ulong)(*(long *)(param_1 + 0x3b8) - lVar19 >> 4) <= uVar18) {
LAB_7101a4847c:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  if (*(int *)(param_1 + 0x13c) == 0) {
    lVar17 = *(long *)(param_1 + 1000);
    if (((lVar17 == 0) && (lVar17 = *(long *)(param_1 + 0x3f0), lVar17 == 0)) &&
       (lVar17 = *(long *)(param_1 + 0x400), lVar17 == 0)) {
      uVar16 = 0xffffffff;
    }
    else {
      uVar16 = *(undefined4 *)(*(long *)(*(long *)(*(long *)(lVar17 + 8) + 0x10) + 8) + 0x488);
    }
    DAT_71050a8078 = *(int *)(param_1 + 0x150);
    param_3 = (ulong)(DAT_71050a8078 + 1);
    FUN_7103778430(param_1 + 0x278,"subwindow_%dp_on",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    *(undefined1 *)(param_1 + 0x41d) = 1;
    iVar2 = *(int *)(param_1 + 0x3cc);
    if (iVar2 != -1) {
      if ((ulong)(*(long *)(param_1 + 0x3b8) - *(long *)(param_1 + 0x3b0) >> 4) <=
          (ulong)(long)iVar2) goto LAB_7101a4847c;
      lVar17 = *(long *)(*(long *)(param_1 + 0x3b0) + (long)iVar2 * 0x10 + 8);
      FUN_7103778300(0x3f800000,*(long *)(lVar17 + 0x20),0x710435be3c);
      *(undefined1 *)(lVar17 + 0x10a) = 0;
    }
    lVar19 = *(long *)(param_1 + 0x3b8);
    for (lVar17 = *(long *)(param_1 + 0x3b0); lVar17 != lVar19; lVar17 = lVar17 + 0x10) {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)(lVar17 + 8) + 0x20),0x710426fa7c);
    }
    lVar8 = *(long *)(param_1 + 0x3a8);
LAB_7101a47e48:
    FUN_71019e6830(lVar8,uVar16,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  plVar7 = *(long **)(param_1 + 0x3a8);
  if (*(char *)((long)plVar7 + 0x1c6) == '\0') {
    if (*(int *)(lVar17 + uVar18 * 0x3f8 + 0x10) == 2) {
      return;
    }
    FUN_71019e69d0(plVar7);
    FUN_71019e66d0(*(long *)(param_1 + 0x3a8),extraout_x1_03,param_3,param_4,param_5,param_6,param_7
                   ,param_8);
    FUN_7101a48570(param_1,extraout_x1_04,param_3,param_4,param_5,param_6,param_7,param_8);
    *(undefined4 *)(param_1 + 0x3e0) = 0xffffffff;
    DAT_71050a8078 = -1;
    goto LAB_7101a47d54;
  }
  FUN_71019e69d0(plVar7);
  lVar8 = *(long *)(param_1 + 0x3a8);
  iVar2 = *(int *)(lVar8 + 0x1c0);
  if (iVar2 == -1) {
    if (*(char *)(lVar8 + 0x1c7) != '\0') {
      uVar16 = *(undefined4 *)(lVar8 + 0x178);
      goto LAB_7101a47e48;
    }
    FUN_71019e66d0(lVar8,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_7101a48570(param_1,extraout_x1_05,param_3,param_4,param_5,param_6,param_7,param_8);
    *(undefined4 *)(param_1 + 0x268) = 1;
    iVar3 = *(int *)(lVar17 + uVar18 * 0x3f8 + 0x10);
    iVar2 = 0;
    if (iVar3 != 3) {
      iVar2 = iVar3 + 1;
    }
    do {
      if (iVar2 == 0) {
        if ((*(long *)(param_1 + 1000) != 0) &&
           (*(int *)(*(long *)(*(long *)(param_1 + 1000) + 8) + 0x28) == *(int *)(param_1 + 0x150)))
        {
          iVar13 = 0;
          break;
        }
      }
      else if (iVar2 != 3) {
        iVar13 = iVar2;
        if (iVar2 != 2) break;
        if ((DAT_7105324ae1 != '\0') && (*(int *)(param_1 + 0x3e0) == -1)) {
          iVar13 = 2;
          break;
        }
      }
      iVar1 = 0;
      if (iVar2 != 3) {
        iVar1 = iVar2 + 1;
      }
      iVar13 = iVar3;
      iVar2 = iVar1;
    } while (iVar1 != iVar3);
    *(int *)(param_1 + 0x3e4) = iVar13;
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x3e0);
    *(undefined4 *)(param_1 + 0x3e0) = 0xffffffff;
    DAT_71050a8078 = -1;
    if (*(uint *)(param_1 + 0x134) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x134) * 4 + 0xe8) = 3;
      if (*(long *)(*DAT_71052c50e8 + 0x8d0) != *(long *)(*DAT_71052c50e8 + 0x8d8)) {
        return;
      }
      *(undefined1 *)(param_1 + 0x420) = 1;
      return;
    }
    goto LAB_7101a48484;
  }
  FUN_71019e66d0(lVar8,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7101a48570(param_1,extraout_x1_00,param_3,param_4,param_5,param_6,param_7,param_8);
  iVar3 = *(int *)(param_1 + 0x3e0);
  uVar20 = (ulong)iVar3;
  lVar17 = *(long *)(param_1 + 0x250);
  uVar14 = (*(long *)(param_1 + 600) - lVar17 >> 3) * 0x7efdfbf7efdfbf7f;
  if (uVar14 < uVar20 || uVar14 - uVar20 == 0) goto LAB_7101a48474;
  lVar8 = lVar17 + uVar20 * 0x3f8;
  *(int *)(lVar8 + 0x1b8) = iVar2;
  *(undefined1 *)(lVar8 + 0x3f5) = 0;
  *(undefined1 *)(lVar8 + 0x3f7) = 0;
  lVar15 = *(long *)(param_1 + 0x3b0);
  if ((ulong)(*(long *)(param_1 + 0x3b8) - lVar15 >> 4) <= uVar20) goto LAB_7101a48488;
  lVar21 = *(long *)(DAT_710532f7b0 + 8);
  piVar9 = FUN_71032df050(lVar21,iVar2);
  FUN_71032e1c20(lVar21,iVar2,(uint *)(lVar17 + uVar20 * 0x3f8 + 0xd0));
  lVar21 = *(long *)(DAT_710532f730 + 8);
  ppppppppplVar23 = *(long **********)(piVar9 + 2);
  lVar24 = *(long *)(lVar21 + 0x168);
  uVar6 = FUN_71032633f0(lVar24,(ulong)ppppppppplVar23);
  plVar7 = *(long **)(param_1 + 0x180);
  local_e4 = (uint)*(byte *)((long)piVar9 + 0x12);
  if (uVar6 <= *(byte *)((long)piVar9 + 0x12)) {
    local_e4 = 0;
  }
  if (plVar7 != (long *)0x0) {
    local_78 = *(undefined4 *)(param_1 + 0x150);
    local_80[0] = 0;
    param_6 = local_80;
    local_7c = iVar3;
    uStack_74 = local_e4;
    local_68 = ppppppppplVar23;
    local_e4 = (**(code **)(*plVar7 + 0x30))(plVar7,&local_68,&uStack_74,&local_78,&local_7c);
    lVar21 = *(long *)(DAT_710532f730 + 8);
    lVar24 = *(long *)(lVar21 + 0x168);
  }
  uVar6 = FUN_71032632a0(lVar24,(ulong)ppppppppplVar23);
  if ((uVar6 & 1) != 0) {
    *(undefined1 *)(lVar8 + 0x3f7) = 1;
    lVar24 = *(long *)(lVar21 + 0x168);
  }
  puVar10 = FUN_71032631a0(lVar24,0x11b1ccb807);
  if ((((((ulong)ppppppppplVar23 & 0xff00000000000000) == 0xc100000000000000) &&
       (((ulong)ppppppppplVar23 & 0xffffffffff) != 0)) &&
      (((ulong)puVar10 & 0xff00000000000000) == 0xc100000000000000)) &&
     (((ulong)puVar10 & 0xffffffffff) != 0)) {
    if ((((ulong)puVar10 ^ (ulong)ppppppppplVar23) & 0xffffffffff) == 0) {
LAB_7101a47f78:
      lVar21 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
      ppppppppplVar23 = *(long **********)(piVar9 + 2);
      puVar10 = FUN_71032631a0(lVar21,0x11b1ccb807);
      if (((((ulong)ppppppppplVar23 & 0xff00000000000000) == 0xc100000000000000) &&
          (((ulong)ppppppppplVar23 & 0xffffffffff) != 0)) &&
         ((((ulong)puVar10 & 0xff00000000000000) == 0xc100000000000000 &&
          (((ulong)puVar10 & 0xffffffffff) != 0)))) {
        if ((((ulong)puVar10 ^ (ulong)ppppppppplVar23) & 0xffffffffff) == 0) {
LAB_7101a4800c:
          iVar13 = piVar9[0x42];
          if (iVar13 == 2) {
            uVar14 = 0x915a4ff6;
LAB_7101a48134:
            uVar14 = uVar14 | 0x1200000000;
          }
          else {
            if (iVar13 != 1) {
              if (iVar13 != 0) {
                ppppppppplVar23 = (long *********)&DAT_c1ffff0000000000;
                goto LAB_7101a48154;
              }
              uVar14 = 0x80f1c82e;
              goto LAB_7101a48134;
            }
            uVar14 = 0x14ef73f367;
          }
          ppppppppplVar23 = (long *********)FUN_71032631a0(lVar21,uVar14);
        }
      }
      else if ((((ulong)puVar10 & 0xffffffffff) != 0 &&
               ((ulong)puVar10 & 0xff00000000000000) == 0xc100000000000000) ==
               (((ulong)ppppppppplVar23 & 0xff00000000000000) == 0xc100000000000000 &&
               ((ulong)ppppppppplVar23 & 0xffffffffff) != 0)) goto LAB_7101a4800c;
    }
  }
  else if ((((ulong)puVar10 & 0xffffffffff) != 0 &&
           ((ulong)puVar10 & 0xff00000000000000) == 0xc100000000000000) ==
           (((ulong)ppppppppplVar23 & 0xff00000000000000) == 0xc100000000000000 &&
           ((ulong)ppppppppplVar23 & 0xffffffffff) != 0)) goto LAB_7101a47f78;
LAB_7101a48154:
  puVar10 = *(undefined1 **)(piVar9 + 2);
  lVar21 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
  uVar6 = FUN_71032632a0(lVar21,(ulong)puVar10);
  if ((uVar6 & 1) != 0) {
    puVar10 = FUN_71032631a0(lVar21,0x11b1ccb807);
  }
  pppplVar12 = (long ****)(ulong)local_e4;
  FUN_7101a48700(param_1,iVar3,puVar10,ppppppppplVar23,local_e4,param_6,param_7,param_8);
  uVar6 = FUN_710324bb60(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2c8),
                         *(ushort *)((long)piVar9 + 0xa2));
  uVar14 = (*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 3) * 0x7efdfbf7efdfbf7f;
  if (uVar14 < uVar20 || uVar14 - uVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  *(char *)(*(long *)(param_1 + 0x250) + uVar20 * 0x3f8 + 0xf8) = (char)uVar6;
  if ((ulong)(*(long *)(param_1 + 0x3b8) - *(long *)(param_1 + 0x3b0) >> 4) <= uVar20) {
LAB_7101a48488:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar21 = *(long *)(*(long *)(param_1 + 0x3b0) + uVar20 * 0x10 + 8);
  uVar6 = uVar6 & 0xff;
  ppppbVar11 = (byte ****)(ulong)uVar6;
  *(uint *)(lVar21 + 0x100) = uVar6;
  if ((uVar6 == 0) || (*(int *)(lVar21 + 0xd8) != 2)) {
    plVar7 = *(long **)(*(long *)(lVar21 + 0x90) + 0x10);
    if (plVar7 != (long *)0x0) {
      puVar10 = (undefined1 *)0x0;
      ppppbVar11 = (byte ****)0x0;
      local_68 = (long *********)((ulong)local_68 & 0xffffffff00000000);
      FUN_71037a2270(plVar7,(ushort *)&local_68,0,0);
    }
  }
  else {
    puVar10 = (undefined1 *)0x1;
    FUN_710377a280(lVar21 + 0x88,(byte *)"mel_chara_select_fp_lv_n",1);
  }
  plVar22 = (long *)(lVar15 + uVar20 * 0x10 + 8);
  lVar15 = *plVar22;
  plVar7 = *(long **)(*(long *)(lVar15 + 0x70) + 0x10);
  if (plVar7 != (long *)0x0) {
    puVar10 = &DAT_ffffffff;
    ppppbVar11 = (byte ****)0x1;
    FUN_71037a2270(plVar7,(ushort *)(lVar17 + uVar20 * 0x3f8 + 0xd8),0xffffffff,1);
    lVar15 = *plVar22;
  }
  FUN_7101a453d0(lVar15,*(undefined1 *)(lVar17 + uVar20 * 0x3f8 + 0x110),puVar10,ppppbVar11,
                 pppplVar12,param_6,param_7,param_8);
  if (*(char *)((long)piVar9 + 0x17) != '\0') {
    FUN_71032e26a0(*(long *)(DAT_710532f7b0 + 8),iVar2,(uint *)(lVar17 + uVar20 * 0x3f8 + 0x40));
  }
  lVar19 = lVar19 + uVar18 * 0x10;
  *(undefined1 *)(lVar8 + 0x3f5) = 1;
  *(undefined1 *)(lVar17 + uVar20 * 0x3f8 + 0x3f4) = 1;
  FUN_7103778760(*(long *)(*(long *)(lVar19 + 8) + 0x20),0x710425ed91);
  lVar17 = *(long *)(lVar19 + 8);
  FUN_7103778300(0x3f800000,*(long *)(lVar17 + 0x20),0x710433a9c5);
  FUN_7103778300(0x3f800000,*(long *)(lVar17 + 0xb0),0x710433a9c5);
  FUN_7103778300(0x3f800000,*(long *)(lVar17 + 0xc0),0x710433a9c5);
  if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
     (uVar18 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x12b42156ef,(long ****)&DAT_00000004,
                              ppppbVar11,pppplVar12,param_6,param_7,param_8), (uVar18 & 1) != 0)) {
    FUN_71024076d0(local_c0,0x12b42156ef);
    if (((local_b0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_a8 == DAT_7106dd53ac)) {
      piVar9 = (int *)(local_b0 + 0x38);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar5) {
          *piVar9 = *piVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    local_a8 = 0x87650000000000;
    local_98 = 0xffffffffffffffff;
    uStack_90 = 0;
    local_c0[0] = 0;
    local_88 = 0;
  }
  local_b8 = &PTR_FUN_7104f73d50;
  local_b0 = 0;
  local_a0 = 0;
  DAT_71050a8078 = -1;
  if (*(uint *)(param_1 + 0x134) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x134) * 4 + 0xe8) = 3;
    *(undefined4 *)(param_1 + 0x268) = 9;
    uVar16 = *(undefined4 *)(param_1 + 0x3e0);
    *(undefined4 *)(param_1 + 0x3e0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3d0) = uVar16;
    return;
  }
LAB_7101a48484:
                    /* WARNING: Subroutine does not return */
  abort();
}

