// addr:      7101a1dbf0
// offset:    0x1a1dbf0
// name:      FUN_7101a1dbf0
// mangled:   
// signature: undefined __cdecl FUN_7101a1dbf0(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a1dbf0(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar10;
  undefined8 extraout_x1_01;
  byte ****ppppbVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long *********ppppppppplVar21;
  uint local_58 [2];
  
  uVar19 = *(uint *)(*(long *)(param_2 + 8) + 0x1f8);
  uVar18 = (uint)param_3;
  if (*(int *)(*(long *)(param_2 + 8) + 0x5d0) == 0) {
    if (uVar18 == 0) {
      uVar18 = 1;
    }
    if (uVar18 == 2) {
      param_3 = (long *********)0x1;
      FUN_7101a1eee0(param_1,param_2,(long ****)0x1,param_4,param_5,param_6,param_7,param_8);
      FUN_7101a1d4d0(param_1,param_2,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else if (uVar18 == 1) {
      param_3 = (long *********)0x1;
      FUN_7101a1eb70(param_1,param_2,(long ****)0x1,param_4,param_5,param_6,param_7,param_8);
      FUN_7101a1d4d0(param_1,param_2,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_7101a1cb30(param_1,param_2,(undefined **)param_3,param_4,param_5,param_6,param_7,param_8);
      lVar20 = *(long *)(param_2 + 8);
      if (*(char *)(lVar20 + 0x6bd) != '\0') {
        iVar1 = *(int *)(param_1 + 0x16c);
        uVar18 = 1;
        if ((((3 < iVar1 - 0x19U) && (iVar1 != 2)) && (uVar18 = 1, iVar1 != 0x13)) &&
           (*(int *)(param_1 + 0x170) != 3)) {
          uVar8 = *(ulong *)(lVar20 + 0x208);
          uVar18 = 1;
          if (((uVar8 & 0xff00000000000000) == 0xc100000000000000) && ((uVar8 & 0xffffffffff) != 0))
          {
            uVar18 = *(uint *)(lVar20 + 0x150);
            puVar7 = FUN_71032631a0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),0xfd5f7fa78);
            if ((((ulong)puVar7 & 0xff00000000000000) == 0xc100000000000000) &&
               (((ulong)puVar7 & 0xffffffffff) != 0)) {
              if ((((ulong)puVar7 ^ uVar8) & 0xffffffffff) != 0) {
LAB_7101a1e3f8:
                if (*(int *)(lVar20 + 0x1f8) != 3) {
                  param_3 = (long *********)(lVar20 + 0x1f0);
                  FUN_7103311740(*(long *)(DAT_710532f8c8 + 8),uVar18,(long ****)param_3,param_4,
                                 param_5,param_6,param_7,param_8);
                  uVar18 = 1;
                  goto LAB_7101a1dc2c;
                }
              }
            }
            else if ((((ulong)puVar7 & 0xffffffffff) == 0) ||
                    (((ulong)puVar7 & 0xff00000000000000) != 0xc100000000000000))
            goto LAB_7101a1e3f8;
            uVar18 = 1;
          }
        }
      }
    }
  }
LAB_7101a1dc2c:
  if (uVar19 == 2) {
    FUN_7101a024c0(*(long *)(param_2 + 8),-1,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar20 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
    puVar7 = FUN_71032631a0(lVar20,0x11b1ccb807);
    param_3 = (long *********)&DAT_c1ffff0000000000;
    if (((ulong)puVar7 & 0xff00000000000000) != 0xc100000000000000 ||
        ((ulong)puVar7 & 0xffffffffff) == 0) {
      param_3 = (long *********)FUN_7103263030(lVar20,0xc1ffff0000000000);
    }
    param_4 = (byte ****)0x0;
    FUN_7101a029b0(*(long *)(param_2 + 8),&DAT_c1ffff0000000000,param_3,0,param_5,param_6,param_7,
                   param_8);
    *(undefined1 *)(*(long *)(param_2 + 8) + 0x6bd) = 0;
  }
  FUN_7101a028b0(*(long *)(param_2 + 8),uVar18,param_3,param_4,param_5,param_6,param_7,param_8);
  if ((uVar18 | 1) == 3) {
    lVar20 = *(long *)(*(long *)(param_2 + 8) + 0x678);
    if (lVar20 != 0) {
      lVar13 = *(long *)(lVar20 + 8);
      iVar1 = *(int *)(*(long *)(param_2 + 8) + 0x150);
      if ((*(int *)(lVar13 + 0x30) == iVar1) || (*(int *)(lVar13 + 0x28) != iVar1)) {
        *(undefined1 *)(*(long *)(lVar13 + 0x20) + 0x166) = 0;
        *(undefined4 *)(*(long *)(lVar20 + 8) + 0x2c) = 0xffffffff;
        *(undefined1 *)(*(long *)(*(long *)(lVar20 + 8) + 0x20) + 0x167) = 0;
        *(undefined4 *)(*(long *)(lVar20 + 8) + 0x30) = 0xffffffff;
      }
    }
    lVar20 = *(long *)(*(long *)(param_2 + 8) + 0x680);
    if ((lVar20 != 0) &&
       (*(int *)(*(long *)(lVar20 + 8) + 0x30) == *(int *)(*(long *)(param_2 + 8) + 0x150))) {
      *(undefined1 *)(*(long *)(*(long *)(lVar20 + 8) + 0x20) + 0x166) = 0;
      *(undefined4 *)(*(long *)(lVar20 + 8) + 0x2c) = 0xffffffff;
      *(undefined1 *)(*(long *)(*(long *)(lVar20 + 8) + 0x20) + 0x167) = 0;
      *(undefined4 *)(*(long *)(lVar20 + 8) + 0x30) = 0xffffffff;
    }
    FUN_7101a1f0b0(param_1,param_2,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    lVar20 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
    puVar7 = FUN_71032631a0(lVar20,0x11b1ccb807);
    if ((((ulong)puVar7 & 0xff00000000000000) != 0xc100000000000000) ||
       (param_3 = (long *********)&DAT_c1ffff0000000000, ((ulong)puVar7 & 0xffffffffff) == 0)) {
      param_3 = (long *********)FUN_7103263030(lVar20,0xc1ffff0000000000);
    }
    param_4 = (byte ****)0x0;
    FUN_7101a029b0(*(long *)(param_2 + 8),&DAT_c1ffff0000000000,param_3,0,param_5,param_6,param_7,
                   param_8);
    *(undefined1 *)(*(long *)(param_2 + 8) + 0x6bd) = 0;
    FUN_7103778630(0,*(long *)(*(long *)(*(long *)(param_2 + 8) + 0x5e8) + 0x10),0x710425ed91);
    lVar20 = *(long *)(*(long *)(param_2 + 8) + 0x5e8);
    FUN_7103778630(0,*(long *)(lVar20 + 0x10),0x710433a9c5);
    FUN_7103778630(0,*(long *)(lVar20 + 0xf0),0x710433a9c5);
    FUN_7103778630(0,*(long *)(lVar20 + 0x100),0x710433a9c5);
    FUN_7101a1c300(param_1,*(int *)(*(long *)(param_2 + 8) + 0x150),param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7101a19420(param_1,*(int *)(*(long *)(param_2 + 8) + 0x150),(long ****)param_3,param_4,
                   param_5,param_6,param_7,param_8);
    goto LAB_7101a1e114;
  }
  if ((uVar19 | 1) != 3) goto LAB_7101a1e114;
  lVar20 = *(long *)(param_2 + 8);
  uVar8 = *(ulong *)(lVar20 + 0x200);
  if (((uVar8 & 0xff00000000000000) != 0xc100000000000000) || ((uVar8 & 0xffffffffff) == 0)) {
    lVar13 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
    ppppppppplVar21 = *(long **********)(param_1 + 0xd90);
    puVar7 = FUN_71032631a0(lVar13,0x11b1ccb807);
    param_3 = ppppppppplVar21;
    if ((((ulong)ppppppppplVar21 & 0xff00000000000000) == 0xc100000000000000) &&
       (((((ulong)ppppppppplVar21 & 0xffffffffff) != 0 &&
         (((ulong)puVar7 & 0xff00000000000000) == 0xc100000000000000)) &&
        (((ulong)puVar7 & 0xffffffffff) != 0)))) {
      if ((((ulong)puVar7 ^ (ulong)ppppppppplVar21) & 0xffffffffff) == 0) {
LAB_7101a1e01c:
        param_3 = (long *********)FUN_7103263030(lVar13,(ulong)ppppppppplVar21);
      }
    }
    else if ((((ulong)puVar7 & 0xffffffffff) != 0 &&
             ((ulong)puVar7 & 0xff00000000000000) == 0xc100000000000000) ==
             (((ulong)ppppppppplVar21 & 0xff00000000000000) == 0xc100000000000000 &&
             ((ulong)ppppppppplVar21 & 0xffffffffff) != 0)) goto LAB_7101a1e01c;
    param_4 = (byte ****)0x0;
    FUN_7101a029b0(lVar20,(undefined1 *)ppppppppplVar21,param_3,0,param_5,param_6,param_7,param_8);
  }
  if (*(int *)(param_1 + 0x170) != 0) {
    FUN_7101a07580(*(long *)(param_2 + 8));
  }
  *(undefined1 *)(*(long *)(param_2 + 8) + 0x6bd) = 1;
  FUN_7103778760(*(long *)(*(long *)(*(long *)(param_2 + 8) + 0x5e8) + 0x10),0x710425ed91);
  lVar20 = *(long *)(*(long *)(param_2 + 8) + 0x5e8);
  FUN_7103778760(*(long *)(lVar20 + 0x10),0x710433a9c5);
  FUN_7103778760(*(long *)(lVar20 + 0xf0),0x710433a9c5);
  FUN_7103778760(*(long *)(lVar20 + 0x100),0x710433a9c5);
  FUN_7101a1d4d0(param_1,param_2,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7101a1c300(param_1,*(int *)(*(long *)(param_2 + 8) + 0x150),param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7101a19420(param_1,*(int *)(*(long *)(param_2 + 8) + 0x150),(long ****)param_3,param_4,param_5
                 ,param_6,param_7,param_8);
  if (((*(char *)(param_1 + 0xf8d) != '\0') &&
      (lVar20 = *(long *)(param_2 + 8), *(int *)(lVar20 + 0x150) == 0)) &&
     (*(char *)(lVar20 + 0x6bd) != '\0')) {
    plVar9 = *(long **)(param_1 + 0xdd0);
    plVar12 = plVar9 + 4;
    plVar15 = (long *)*plVar12;
    if (plVar15 != (long *)0x0) {
      uVar8 = *(ulong *)(lVar20 + 0x200) & 0xff0000ffffffffff;
      plVar14 = plVar12;
      do {
        bVar4 = (plVar15[4] & 0xff0000ffffffffffU) < uVar8;
        if (!bVar4) {
          plVar14 = plVar15;
        }
        plVar15 = (long *)plVar15[bVar4];
      } while (plVar15 != (long *)0x0);
      if ((plVar14 != plVar12) && ((plVar14[4] & 0xff0000ffffffffffU) <= uVar8)) {
        iVar1 = (int)plVar14[5];
        uVar8 = (ulong)iVar1;
        if (iVar1 != -1) {
          uVar16 = (plVar9[1] - *plVar9 >> 4) * 0x2e8ba2e8ba2e8ba3;
          if (iVar1 < (int)uVar16) {
            if (uVar16 < uVar8 || uVar16 - uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            param_3 = (long *********)(ulong)(*(char *)(*plVar9 + uVar8 * 0xb0 + 0xa0) != '\0');
          }
          else {
            param_3 = (long *********)0x0;
          }
          FUN_7101a1c9f0(param_1,1,(ulong)param_3,param_4,param_5,param_6,param_7,param_8);
        }
      }
    }
  }
  FUN_7101a1cb30(param_1,param_2,(undefined **)param_3,param_4,param_5,param_6,param_7,param_8);
  lVar20 = *(long *)(param_2 + 8);
  if (((((*(char *)(lVar20 + 0x6bd) != '\0') &&
        (iVar1 = *(int *)(param_1 + 0x16c), 3 < iVar1 - 0x19U)) && (iVar1 != 2)) &&
      ((iVar1 != 0x13 && (*(int *)(param_1 + 0x170) != 3)))) &&
     ((uVar8 = *(ulong *)(lVar20 + 0x208), (uVar8 & 0xff00000000000000) == 0xc100000000000000 &&
      ((uVar8 & 0xffffffffff) != 0)))) {
    uVar19 = *(uint *)(lVar20 + 0x150);
    puVar7 = FUN_71032631a0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),0xfd5f7fa78);
    if ((((ulong)puVar7 & 0xff00000000000000) == 0xc100000000000000) &&
       (((ulong)puVar7 & 0xffffffffff) != 0)) {
      if ((((ulong)puVar7 ^ uVar8) & 0xffffffffff) == 0) goto LAB_7101a1e114;
    }
    else if ((((ulong)puVar7 & 0xffffffffff) != 0) &&
            (((ulong)puVar7 & 0xff00000000000000) == 0xc100000000000000)) goto LAB_7101a1e114;
    if (*(int *)(lVar20 + 0x1f8) != 3) {
      param_3 = (long *********)(lVar20 + 0x1f0);
      FUN_7103311740(*(long *)(DAT_710532f8c8 + 8),uVar19,(long ****)param_3,param_4,param_5,param_6
                     ,param_7,param_8);
    }
  }
LAB_7101a1e114:
  FUN_7101a1f530(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar20 = *(long *)(param_2 + 8);
  puVar7 = *(undefined1 **)(lVar20 + 0x200);
  bVar2 = *(byte *)(lVar20 + 0x210);
  ppppppppplVar21 = (long *********)(ulong)bVar2;
  uVar19 = *(uint *)(lVar20 + 0x150);
  ppppbVar11 = (byte ****)(ulong)uVar19;
  uVar8 = FUN_7101a1c830(param_1,(ulong)puVar7,(uint)bVar2,uVar19);
  uVar10 = extraout_x1;
  if ((uVar8 & 1) == 0) {
    uVar5 = FUN_71032633f0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),(ulong)puVar7);
    if (uVar5 == 0) {
      uVar19 = 0;
    }
    else {
      uVar6 = FUN_7101a191b0(param_1,(ulong)puVar7,(uint)bVar2,uVar19,0);
      uVar19 = uVar5 & (int)uVar5 >> 0x1f;
      uVar3 = 0;
      if (-1 < (int)uVar5) {
        uVar3 = uVar5;
      }
      uVar3 = uVar3 - uVar19;
      iVar1 = 0;
      if (uVar3 != 0) {
        iVar1 = (int)(uVar6 - uVar19) / (int)uVar3;
      }
      iVar1 = (uVar6 - uVar19) - iVar1 * uVar3;
      uVar19 = iVar1 + uVar19 + (uVar3 & iVar1 >> 0x1f);
    }
    ppppppppplVar21 = *(long **********)(lVar20 + 0x208);
    param_5 = (long ****)(ulong)*(byte *)(lVar20 + 0x6c2);
    ppppbVar11 = (byte ****)(ulong)(uVar19 & 0xff);
    param_6 = 0;
    *(char *)(lVar20 + 0x210) = (char)uVar19;
    FUN_71019fd290(*(undefined8 **)(lVar20 + 0x5e8),puVar7,ppppppppplVar21,ppppbVar11,param_5,0,
                   param_7,param_8);
    lVar20 = *(long *)(param_2 + 8);
    uVar19 = *(uint *)(lVar20 + 0x150);
    uVar10 = extraout_x1_00;
  }
  if ((*(int *)(lVar20 + 0x394) != 0) && (*(int *)(param_1 + 0x16c) != 7)) {
    for (lVar13 = *(long *)(param_1 + 0x250); lVar13 != *(long *)(param_1 + 600);
        lVar13 = lVar13 + 0x10) {
      lVar17 = *(long *)(lVar13 + 8);
      if ((((*(uint *)(lVar17 + 0x150) != uVar19) && (*(int *)(lVar17 + 0x5d0) != 0)) &&
          (*(int *)(lVar17 + 0x1f8) == 0)) && (*(int *)(lVar17 + 0x394) == *(int *)(lVar20 + 0x394))
         ) {
        local_58[0] = 0;
        *(undefined4 *)(lVar20 + 0x394) = 0;
        FUN_71019fd0b0(*(long *)(lVar20 + 0x5e8),local_58,(long ****)ppppppppplVar21,ppppbVar11,
                       param_5,param_6,param_7,param_8);
        lVar20 = *(long *)(param_2 + 8);
        uVar10 = extraout_x1_01;
        break;
      }
    }
  }
  *(undefined1 *)(lVar20 + 0x6ba) = 1;
  if (uVar18 == 2) {
    FUN_7101a07770(*(long *)(param_2 + 8),uVar10,ppppppppplVar21,ppppbVar11,param_5,param_6,param_7,
                   param_8);
  }
  return;
}

