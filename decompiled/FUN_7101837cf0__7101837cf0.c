// addr:      7101837cf0
// offset:    0x1837cf0
// name:      FUN_7101837cf0
// mangled:   
// signature: undefined __cdecl FUN_7101837cf0(long param_1, byte * param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101837cf0(long param_1,byte *param_2,undefined **param_3,byte ****param_4,long ****param_5
                   ,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  undefined8 extraout_x1;
  long extraout_x1_00;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long ****pppplVar20;
  ulong uVar21;
  undefined4 uVar22;
  undefined8 *puVar23;
  uint uVar24;
  long *********ppppppppplVar25;
  long ****pppplVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long *plVar31;
  int local_3b8 [2];
  int local_3b0;
  uint uStack_218;
  int local_214;
  int local_210 [2];
  undefined1 *local_208;
  undefined8 local_200;
  undefined8 local_cd;
  undefined8 local_c5;
  undefined8 local_bd;
  undefined8 local_b5;
  
  lVar30 = *(long *)(param_1 + 8);
  bVar5 = *param_2;
  ppppppppplVar25 = (long *********)(ulong)bVar5;
  if (((DAT_71053144d8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_71053144d8), iVar13 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    cVar12 = *(char *)(lVar30 + 0x128);
  }
  else {
    cVar12 = *(char *)(lVar30 + 0x128);
  }
  if ((cVar12 != '\0') && (*(long *)(lVar30 + 0xf8) != 0)) {
    pppplVar26 = (long ****)(ulong)((uint)bVar5 + (bVar5 / 5) * -5);
    puVar2 = &DAT_710530a9c8;
    if (4 < bVar5) {
      puVar2 = &DAT_710530bdf0;
    }
    FUN_7101a40f60(*(long *)(*(long *)(lVar30 + 0xf8) + 0x80),bVar5 / 5,
                   (long ****)(puVar2 + (long)pppplVar26 * 0x1c8),param_4,param_5,param_6,param_7,
                   param_8);
    FUN_7101a41230(*(long *)(*(long *)(lVar30 + 0xf8) + 0x80),bVar5 / 5,pppplVar26,
                   (byte ****)((long)(puVar2 + (long)pppplVar26 * 0x1c8) + 0x28),param_5,param_6,
                   param_7,param_8);
    lVar16 = *(long *)(*(long *)(lVar30 + 0xf8) + 0x80);
    lVar30 = *(long *)(lVar16 + 0x1b0);
    if ((ulong)(*(long *)(lVar16 + 0x1b8) - lVar30 >> 4) <= (ulong)ppppppppplVar25 / 5) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar30 = *(long *)(lVar30 + ((ulong)ppppppppplVar25 / 5) * 0x10 + 8);
    lVar16 = *(long *)(lVar30 + 0x250);
    pppplVar20 = (long ****)((*(long *)(lVar30 + 600) - lVar16 >> 3) * 0x7efdfbf7efdfbf7f);
    if (pppplVar26 <= pppplVar20 && (long)pppplVar20 - (long)pppplVar26 != 0) {
      *(undefined1 *)(lVar16 + (long)pppplVar26 * 0x3f8 + 0x3f4) = 0;
      return;
    }
    goto LAB_7101838b38;
  }
  if ((*(char *)(lVar30 + 0x129) != '\0') && (*(long *)(lVar30 + 0x100) != 0)) {
    return;
  }
  if (*(long *)(lVar30 + 0xe8) == 0) {
    return;
  }
  uVar24 = (uint)bVar5;
  if (DAT_7105308760._4_4_ <= (int)uVar24) {
    return;
  }
  if (7 < uVar24) goto LAB_7101838b50;
  lVar16 = *(long *)(*(long *)(lVar30 + 0xe8) + 0x80);
  if ((long *********)(*(long *)(lVar16 + 600) - *(long *)(lVar16 + 0x250) >> 4) <= ppppppppplVar25)
  goto LAB_7101838b48;
  lVar17 = *(long *)(lVar16 + 0x250) + (long)ppppppppplVar25 * 0x10;
  pbVar1 = &DAT_7105308770 + (ulong)uVar24 * 0x1c8;
  if (((DAT_71053144d8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_71053144d8), iVar13 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  bVar11 = FUN_710179eb30(pbVar1);
  bVar9 = *pbVar1 == 0xff;
  plVar31 = (long *)(lVar17 + 8);
  FUN_7101a06380(*plVar31,bVar11 || bVar9);
  lVar14 = *plVar31;
  uVar24 = (uint)bVar5;
  if (*(byte *)(lVar14 + 0x1c4) != 0xff && *(byte *)(lVar14 + 0x1c4) != *pbVar1) {
    FUN_7101a06ef0(lVar14,extraout_x1,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    lVar14 = *(long *)(*plVar31 + 0x678);
    if ((lVar14 != 0) || (lVar14 = *(long *)(*plVar31 + 0x680), lVar14 != 0)) {
      if (*(uint *)(*(long *)(lVar14 + 8) + 0x30) == uVar24) {
        lVar29 = *(long *)(*(long *)(*(long *)(lVar14 + 8) + 0x10) + 8);
        memset((void *)(lVar29 + 0x198),0,0x264);
        *(undefined8 *)(lVar29 + 0x40c) = 0;
        *(undefined8 *)(lVar29 + 0x424) = 0;
        *(undefined4 *)(lVar29 + 0x480) = 0;
        uVar8 = uRam0000007107459008;
        uVar7 = _ConstantZero;
        *(undefined8 *)(lVar29 + 0x4a0) = 0;
        *(undefined8 *)(lVar29 + 0x468) = uVar8;
        *(undefined8 *)(lVar29 + 0x460) = uVar7;
        *(undefined8 *)(lVar29 + 0x438) = uVar8;
        *(undefined8 *)(lVar29 + 0x430) = uVar7;
        *(undefined8 *)(lVar29 + 0x448) = uVar8;
        *(undefined8 *)(lVar29 + 0x440) = uVar7;
        *(undefined8 *)(lVar29 + 0x458) = uVar8;
        *(undefined8 *)(lVar29 + 0x450) = uVar7;
        *(undefined8 *)(lVar29 + 0x498) = 0;
        lVar29 = *(long *)(lVar14 + 8);
        *(undefined1 *)(lVar29 + 0x36) = 1;
        if (*(char *)(lVar29 + 0x35) == '\0') {
          bVar10 = false;
        }
        else {
          bVar10 = *(char *)(lVar29 + 0x37) == '\0';
        }
        lVar28 = *(long *)(lVar29 + 0x20);
        plVar15 = *(long **)(lVar28 + 0x100);
        (**(code **)(*plVar15 + 0x60))(plVar15,bVar10);
        *(bool *)(lVar28 + 0x162) = bVar10;
        bVar10 = false;
        if ((*(char *)(lVar29 + 0x35) != '\0') && (bVar10 = false, *(char *)(lVar29 + 0x36) != '\0')
           ) {
          bVar10 = *(char *)(lVar29 + 0x37) == '\0';
        }
        lVar29 = *(long *)(lVar29 + 0x20);
        lVar28 = *(long *)(*(long *)(lVar29 + 0x100) + 0x38);
        if (lVar28 != 0) {
          *(byte *)(lVar28 + 0x58) = *(byte *)(lVar28 + 0x58) & 0xfe | bVar10;
        }
        *(bool *)(lVar29 + 0x163) = bVar10;
        *(undefined1 *)(*(long *)(*(long *)(lVar14 + 8) + 0x20) + 0x166) = 0;
        *(undefined4 *)(*(long *)(lVar14 + 8) + 0x2c) = 0xffffffff;
        *(undefined1 *)(*(long *)(*(long *)(lVar14 + 8) + 0x20) + 0x167) = 0;
        *(undefined4 *)(*(long *)(lVar14 + 8) + 0x30) = 0xffffffff;
      }
      if (!bVar11 && !bVar9) {
        uVar27 = *(uint *)(*(long *)(lVar14 + 8) + 0x28);
        uVar6 = *(uint *)(*(long *)(*(long *)(*(long *)(lVar14 + 8) + 0x10) + 8) + 0x488);
        lVar14 = (long)(int)uVar6;
        uVar3 = uVar6;
        if (uVar27 == uVar24) {
          uVar3 = 0xffffffff;
        }
        *(uint *)(*(long *)(DAT_710593b990 + 8) + (long)ppppppppplVar25 * 4) = uVar3;
        if (uVar6 != 0xffffffff) {
          if (9 < uVar6) goto LAB_7101838b50;
          lVar29 = *(long *)(lVar16 + 400);
          *(uint *)(lVar29 + lVar14 * 4) = (uint)(uVar27 != uVar24) << 1;
          if (uVar27 == uVar24) {
LAB_71018380e4:
            uVar22 = 0;
          }
          else if (uVar6 < 10 && *(char *)(DAT_71053398b0 + 8) != '\0') {
            puVar23 = (undefined8 *)(&DAT_7105339860)[lVar14];
            uVar22 = 0;
            if (puVar23 != (undefined8 *)0x0) goto LAB_71018380c0;
          }
          else {
            puVar23 = &DAT_7105339830;
LAB_71018380c0:
            uVar3 = *(int *)(puVar23[2] + 0x9c) - 1;
            if (6 < uVar3) goto LAB_71018380e4;
            uVar22 = *(undefined4 *)(&DAT_7104753de0 + (long)(int)uVar3 * 4);
          }
          *(undefined4 *)(lVar29 + lVar14 * 4 + 0x28) = uVar22;
          *(bool *)(lVar29 + lVar14 + 0x50) = uVar27 != uVar24;
        }
      }
    }
    lVar14 = *plVar31;
    param_3 = (undefined **)(ulong)*(uint *)(lVar14 + 0x150);
    param_4 = (byte ****)(ulong)*(uint *)(lVar14 + 0x154);
    param_5 = (long ****)(ulong)*(uint *)(lVar14 + 0x1f8);
    if (*(char *)(lVar14 + 0x6bb) == '\0') {
      param_6 = 0xffffffff;
    }
    else {
      param_6 = (ulong)*(uint *)(lVar14 + 0x1fc);
    }
    FUN_71019f11d0(*(long **)(lVar16 + 0xdd0),0xffffffff,(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7101a1f0b0(lVar16,lVar17,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    lVar14 = *(long *)(*plVar31 + 0x678);
    FUN_7101a1e660(lVar17,0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_7101a06920(*plVar31,lVar14,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    lVar14 = *plVar31;
  }
  FUN_7101a06fd0(lVar14,pbVar1);
  if ((long *********)(*(long *)(lVar16 + 0x240) - *(long *)(lVar16 + 0x238) >> 4) <=
      ppppppppplVar25) {
LAB_7101838b54:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar17 = *(long *)(lVar16 + 0x238) + (long)ppppppppplVar25 * 0x10;
  *(char *)(*(long *)(lVar17 + 8) + 0x34) = ~(bVar11 || bVar9);
  if (!bVar11 && !bVar9) {
    FUN_7101a1e9b0(lVar16,lVar17,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_7101a06920(*plVar31,0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    lVar17 = extraout_x1_00;
  }
  lVar16 = *(long *)(*(long *)(lVar30 + 0xe8) + 0x80);
  if ((long *********)(*(long *)(lVar16 + 600) - *(long *)(lVar16 + 0x250) >> 4) <= ppppppppplVar25)
  {
LAB_7101838b48:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar14 = *(long *)(lVar16 + 0x250) + (long)ppppppppplVar25 * 0x10;
  plVar31 = (long *)(lVar14 + 8);
  if ((&DAT_710530879c)[(long)ppppppppplVar25 * 0x72] == 0xb) {
    if (*(char *)(*plVar31 + 0x6b9) == '\0') {
      FUN_7101a1e660(lVar14,0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      FUN_7101a06ef0(*plVar31,lVar17,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      lVar17 = *plVar31;
      lVar29 = *(long *)(lVar17 + 0x678);
      if (((lVar29 != 0) || (lVar29 = *(long *)(lVar17 + 0x680), lVar29 != 0)) &&
         (*(uint *)(*(long *)(lVar29 + 8) + 0x30) == uVar24)) {
        lVar17 = *(long *)(*(long *)(*(long *)(lVar29 + 8) + 0x10) + 8);
        pppplVar26 = (long ****)0x264;
        memset((void *)(lVar17 + 0x198),0,0x264);
        *(undefined8 *)(lVar17 + 0x40c) = 0;
        *(undefined8 *)(lVar17 + 0x424) = 0;
        *(undefined4 *)(lVar17 + 0x480) = 0;
        uVar8 = uRam0000007107459008;
        uVar7 = _ConstantZero;
        *(undefined8 *)(lVar17 + 0x4a0) = 0;
        *(undefined8 *)(lVar17 + 0x468) = uVar8;
        *(undefined8 *)(lVar17 + 0x460) = uVar7;
        *(undefined8 *)(lVar17 + 0x438) = uVar8;
        *(undefined8 *)(lVar17 + 0x430) = uVar7;
        *(undefined8 *)(lVar17 + 0x448) = uVar8;
        *(undefined8 *)(lVar17 + 0x440) = uVar7;
        *(undefined8 *)(lVar17 + 0x458) = uVar8;
        *(undefined8 *)(lVar17 + 0x450) = uVar7;
        *(undefined8 *)(lVar17 + 0x498) = 0;
        lVar17 = *(long *)(lVar29 + 8);
        *(undefined1 *)(lVar17 + 0x36) = 1;
        if (*(char *)(lVar17 + 0x35) == '\0') {
          bVar9 = false;
        }
        else {
          bVar9 = *(char *)(lVar17 + 0x37) == '\0';
        }
        lVar28 = *(long *)(lVar17 + 0x20);
        plVar15 = *(long **)(lVar28 + 0x100);
        (**(code **)(*plVar15 + 0x60))(plVar15,bVar9);
        *(bool *)(lVar28 + 0x162) = bVar9;
        if (*(char *)(lVar17 + 0x35) == '\0') {
          bVar9 = false;
        }
        else {
          bVar9 = false;
          if (*(char *)(lVar17 + 0x36) != '\0') {
            bVar9 = *(char *)(lVar17 + 0x37) == '\0';
          }
        }
        lVar17 = *(long *)(lVar17 + 0x20);
        lVar28 = *(long *)(*(long *)(lVar17 + 0x100) + 0x38);
        if (lVar28 != 0) {
          *(byte *)(lVar28 + 0x58) = *(byte *)(lVar28 + 0x58) & 0xfe | bVar9;
        }
        *(bool *)(lVar17 + 0x163) = bVar9;
        *(undefined1 *)(*(long *)(*(long *)(lVar29 + 8) + 0x20) + 0x166) = 0;
        *(undefined4 *)(*(long *)(lVar29 + 8) + 0x2c) = 0xffffffff;
        *(undefined1 *)(*(long *)(*(long *)(lVar29 + 8) + 0x20) + 0x167) = 0;
        *(undefined4 *)(*(long *)(lVar29 + 8) + 0x30) = 0xffffffff;
        uVar3 = *(uint *)(*(long *)(*(long *)(*(long *)(lVar29 + 8) + 0x10) + 8) + 0x488);
        if (9 < uVar3) goto LAB_7101838b50;
        lVar17 = (long)(int)uVar3;
        bVar9 = *(int *)(*(long *)(lVar16 + 400) + lVar17 * 4) == 2;
        if (bVar9) {
          *(uint *)(*(long *)(DAT_710593b990 + 8) + (long)ppppppppplVar25 * 4) = uVar3;
          lVar29 = *(long *)(lVar16 + 400);
          *(uint *)(lVar29 + lVar17 * 4) = (uint)bVar9 << 1;
          puVar23 = &DAT_7105339830;
          if ((((uVar3 < 10) && (*(char *)(DAT_71053398b0 + 8) != '\0')) &&
              (puVar23 = (undefined8 *)(&DAT_7105339860)[lVar17], puVar23 == (undefined8 *)0x0)) ||
             (uVar3 = *(int *)(puVar23[2] + 0x9c) - 1, 6 < uVar3)) {
            uVar22 = 0;
          }
          else {
            uVar22 = *(undefined4 *)(&DAT_7104753de0 + (long)(int)uVar3 * 4);
          }
        }
        else {
          *(undefined4 *)(*(long *)(DAT_710593b990 + 8) + (long)ppppppppplVar25 * 4) = 0xffffffff;
          lVar29 = *(long *)(lVar16 + 400);
          uVar22 = 0;
          *(uint *)(lVar29 + lVar17 * 4) = (uint)bVar9 << 1;
        }
        *(undefined4 *)(lVar29 + lVar17 * 4 + 0x28) = uVar22;
        *(bool *)(lVar29 + lVar17 + 0x50) = bVar9;
        FUN_7101a1f0b0(lVar16,lVar14,pppplVar26,param_4,param_5,param_6,param_7,param_8);
        lVar17 = *plVar31;
      }
      param_3 = (undefined **)(ulong)*(uint *)(lVar17 + 0x150);
      param_4 = (byte ****)(ulong)*(uint *)(lVar17 + 0x154);
      param_5 = (long ****)(ulong)*(uint *)(lVar17 + 0x1f8);
      if (*(char *)(lVar17 + 0x6bb) == '\0') {
        param_6 = 0xffffffff;
      }
      else {
        param_6 = (ulong)*(uint *)(lVar17 + 0x1fc);
      }
      FUN_71019f11d0(*(long **)(lVar16 + 0xdd0),0xffffffff,(long ****)param_3,param_4,param_5,
                     param_6,param_7,param_8);
    }
    FUN_7101a06380(*plVar31,1);
    FUN_7101a028b0(*plVar31,3,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar17 = *plVar31;
    *(undefined4 *)(lVar17 + 0x5d0) = 0;
    param_3 = (undefined **)(ulong)(*(long *)(lVar17 + 0x678) != 0);
    FUN_71019fff00(*(long *)(lVar17 + 0x5e8),0,(ulong)param_3,param_4,param_5,param_6,param_7,
                   param_8);
    if ((long *********)(*(long *)(lVar16 + 0x240) - *(long *)(lVar16 + 0x238) >> 4) <=
        ppppppppplVar25) goto LAB_7101838b54;
    *(undefined1 *)(*(long *)(*(long *)(lVar16 + 0x238) + (long)ppppppppplVar25 * 0x10 + 8) + 0x34)
         = 0;
  }
  FUN_71015547e0((undefined8 *)local_3b8,
                 (undefined8 *)(&DAT_7105308798 + (long)ppppppppplVar25 * 0x72));
  lVar17 = *plVar31;
  if (*(char *)(lVar17 + 0x6b9) == '\0') {
    if (local_3b0 == 3) {
      lVar17 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
      cVar12 = FUN_7101686610(lVar17);
      param_3 = (undefined **)ppppppppplVar25;
      bVar9 = FUN_710168eb40(lVar17,cVar12,bVar5,param_4,param_5,param_6,param_7,param_8);
      if (bVar9) {
        local_3b0 = 0;
      }
    }
  }
  else {
    if ((((*(int *)(lVar17 + 0x5d4) == 1) &&
         ((lVar14 = *(long *)(lVar17 + 0x678), lVar14 != 0 ||
          (lVar14 = *(long *)(lVar17 + 0x680), lVar14 != 0)))) &&
        (*(uint *)(*(long *)(lVar14 + 8) + 0x30) == uVar24)) && (local_3b8[0] == 0)) {
      FUN_71016b6a10((undefined8 *)local_3b8,(undefined8 *)(lVar17 + 0x1f0));
      lVar17 = *plVar31;
    }
    if ((*(int *)(lVar17 + 0x1f8) == 3) && (local_3b0 == 0)) {
      local_3b0 = 3;
    }
  }
  lVar17 = *plVar31;
  FUN_71015547e0((undefined8 *)&uStack_218,(undefined8 *)local_3b8);
  if (local_210[0] == 2) {
    if ((((((((char)local_cd == '\0') && (local_cd._1_1_ == '\0')) && (local_cd._2_1_ == '\0')) &&
          ((local_cd._3_1_ == '\0' && (local_cd._4_1_ == '\0')))) &&
         ((local_cd._5_1_ == '\0' && ((local_cd._6_1_ == '\0' && (local_cd._7_1_ == '\0')))))) &&
        (((char)local_c5 == '\0' &&
         ((((((local_c5._1_1_ == '\0' && (local_c5._2_1_ == '\0')) && (local_c5._3_1_ == '\0')) &&
            (((local_c5._4_1_ == '\0' && (local_c5._5_1_ == '\0')) &&
             ((local_c5._6_1_ == '\0' && ((local_c5._7_1_ == '\0' && ((char)local_bd == '\0'))))))))
           && (local_bd._1_1_ == '\0')) &&
          (((local_bd._2_1_ == '\0' && (local_bd._3_1_ == '\0')) && (local_bd._4_1_ == '\0'))))))))
       && (((((local_bd._5_1_ == '\0' && (local_bd._6_1_ == '\0')) &&
             ((local_bd._7_1_ == '\0' && (((char)local_b5 == '\0' && (local_b5._1_1_ == '\0'))))))
            && (local_b5._2_1_ == '\0')) &&
           ((((local_b5._3_1_ == '\0' && (local_b5._4_1_ == '\0')) && (local_b5._5_1_ == '\0')) &&
            ((local_b5._6_1_ == '\0' && (local_b5._7_1_ == '\0')))))))) {
      local_208 = &DAT_c1ffff0000000000;
    }
LAB_71018386e8:
    if (*(char *)(lVar17 + 0x6b9) != '\0') goto LAB_71018386f4;
LAB_7101838724:
    uVar21 = *(ulong *)(lVar17 + 0x200);
    uVar19 = (ulong)local_208 & 0xffffffffff;
    if ((((uVar21 & 0xff00000000000000) == 0xc100000000000000) && ((uVar21 & 0xffffffffff) != 0)) &&
       ((((ulong)local_208 & 0xff00000000000000) == 0xc100000000000000 && (uVar19 != 0)))) {
      uVar18 = 0xc100000000000000;
      if ((((ulong)local_208 ^ uVar21) & 0xffffffffff) != 0) {
LAB_71018387a4:
        lVar14 = *(long *)(*(long *)(lVar17 + 0x5e8) + 0x10);
        if ((uVar18 == 0xc100000000000000) && (uVar19 != 0)) {
          FUN_7103778300(0x3f800000,lVar14,0x710425ed91);
          lVar14 = *(long *)(lVar17 + 0x5e8);
          FUN_7103778300(0x3f800000,*(long *)(lVar14 + 0x10),0x710433a9c5);
          FUN_7103778300(0x3f800000,*(long *)(lVar14 + 0xf0),0x710433a9c5);
          FUN_7103778300(0x3f800000,*(long *)(lVar14 + 0x100),0x710433a9c5);
        }
        else {
          FUN_7103778630(0,lVar14,0x710425ed91);
          lVar14 = *(long *)(lVar17 + 0x5e8);
          FUN_7103778630(0,*(long *)(lVar14 + 0x10),0x710433a9c5);
          FUN_7103778630(0,*(long *)(lVar14 + 0xf0),0x710433a9c5);
          FUN_7103778630(0,*(long *)(lVar14 + 0x100),0x710433a9c5);
        }
      }
    }
    else if ((uVar19 != 0 && ((ulong)local_208 & 0xff00000000000000) == 0xc100000000000000) !=
             ((uVar21 & 0xff00000000000000) == 0xc100000000000000 && (uVar21 & 0xffffffffff) != 0))
    {
      uVar18 = (ulong)local_208 & 0xff00000000000000;
      goto LAB_71018387a4;
    }
  }
  else {
    local_bd = 0;
    local_b5 = 0;
    local_cd = 0;
    local_c5 = 0;
    if (local_210[0] != 3) goto LAB_71018386e8;
    local_208 = &DAT_c1ffff0000000000;
    if (*(char *)(lVar17 + 0x6b9) == '\0') {
      if ((local_214 != 0xb) && (*(int *)(lVar17 + 0x1f8) == 2)) {
        local_210[0] = 0;
      }
      goto LAB_7101838724;
    }
LAB_71018386f4:
    if ((*(long *)(lVar17 + 0x678) != 0) &&
       (*(int *)(*(long *)(*(long *)(lVar17 + 0x678) + 8) + 0x30) != -1)) {
      local_208 = *(undefined1 **)(lVar17 + 0x200);
      local_200 = *(undefined8 *)(lVar17 + 0x208);
    }
  }
  FUN_7101a03a90(lVar17,(undefined8 *)&uStack_218,param_3,param_4,param_5,param_6,param_7,param_8);
  if (((*(uint *)(lVar17 + 0x1f8) < 2) &&
      (bVar9 = FUN_7103265e70(*(long *)(DAT_710532f730 + 8) + 0x160,*(ulong *)(lVar17 + 0x200)),
      bVar9)) && (*(char *)(lVar17 + 0x6b9) != '\0')) {
    FUN_7101a00940(*(long *)(lVar17 + 0x5e8),*(int *)(lVar17 + 0x398),(long *********)param_3,
                   param_4,param_5,param_6,param_7,param_8);
  }
  lVar17 = *plVar31;
  if (*(char *)(lVar17 + 0x6b9) != '\0') {
    uVar3 = *(uint *)(lVar17 + 0x1f8);
    if (*(char *)(lVar17 + 0x6bb) == '\0') {
      uVar27 = 0xffffffff;
    }
    else {
      uVar27 = *(uint *)(lVar17 + 0x1fc);
    }
    uVar6 = *(uint *)(lVar17 + 0x150);
    if (7 < uVar6) {
LAB_7101838b50:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar15 = *(long **)(lVar16 + 0xdd0);
    uVar4 = *(uint *)(plVar15 + (long)(int)uVar6 * 3 + 0x1c);
    *(undefined4 *)(plVar15 + (long)(int)uVar6 * 3 + 0x1d) = *(undefined4 *)(lVar17 + 0x154);
    *(uint *)((long)plVar15 + (long)(int)uVar6 * 0x18 + 0xec) = uVar3;
    *(uint *)(plVar15 + (long)(int)uVar6 * 3 + 0x1e) = uVar27;
    if (uVar4 != 0xffffffff) {
      FUN_71019f08a0(&uStack_218,(long)plVar15,(ulong)uVar4,param_4,param_5,param_6,param_7,param_8)
      ;
      uVar21 = (plVar15[1] - *plVar15 >> 4) * 0x2e8ba2e8ba2e8ba3;
      uVar19 = (ulong)(int)*(uint *)(plVar15 + (long)(int)uVar6 * 3 + 0x1c);
      if (uVar21 < uVar19 || uVar21 - uVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      FUN_7103778300(0x3f800000,*(long *)(*plVar15 + uVar19 * 0xb0 + 0x20),(long)local_210);
    }
    lVar17 = *plVar31;
    param_6 = (ulong)*(uint *)(lVar17 + 0x158);
    param_4 = (byte ****)(ulong)uVar3;
    param_5 = (long ****)(ulong)uVar27;
    FUN_71032d0830(lVar16 + 0xde8,*(uint *)(lVar17 + 0x150),(ulong)*(uint *)(lVar17 + 0x154),param_4
                   ,param_5,param_6,param_7,param_8);
    lVar17 = *plVar31;
    if (*(long *)(lVar17 + 0x678) != 0) {
      lVar14 = *(long *)(*(long *)(lVar17 + 0x678) + 8);
      iVar13 = *(int *)(lVar14 + 0x28);
      if (iVar13 == *(int *)(lVar17 + 0x150)) {
        param_4 = (byte ****)(ulong)uVar27;
        FUN_71032d2e70(*(long *)(lVar14 + 0x20),iVar13,(ulong)uVar3,param_4,param_5,param_6,param_7,
                       param_8);
        lVar17 = *plVar31;
      }
    }
  }
  FUN_7101a07580(lVar17);
  lVar17 = *plVar31;
  if (((*(int *)(lVar17 + 0x1f8) != 3) && (*(int *)(lVar17 + 0x5d0) != 1)) &&
     ((*(char *)(lVar17 + 0x6b9) == '\0' && ((int)uVar24 < *(int *)(lVar16 + 0x160))))) {
    *(undefined4 *)(lVar17 + 0x5d0) = 1;
    if (*(int *)(lVar17 + 0x1f8) == 0) {
      uVar19 = 1;
    }
    else {
      uVar19 = (ulong)(*(long *)(lVar17 + 0x678) != 0);
    }
    FUN_71019fff00(*(long *)(lVar17 + 0x5e8),1,uVar19,param_4,param_5,param_6,param_7,param_8);
    *(undefined1 *)(*plVar31 + 0x6ba) = 1;
    FUN_7103778760(*(long *)(*(long *)(*plVar31 + 0x5e8) + 0x10),0x710425ed91);
    lVar16 = *(long *)(*plVar31 + 0x5e8);
    uVar19 = *(ulong *)(*plVar31 + 0x208);
    if ((uVar19 >> 0x38 == 0xc1) && ((uVar19 & 0xffffffffff) != 0)) {
      FUN_7103778760(*(long *)(lVar16 + 0x10),0x710433a9c5);
      FUN_7103778760(*(long *)(lVar16 + 0xf0),0x710433a9c5);
      FUN_7103778760(*(long *)(lVar16 + 0x100),0x710433a9c5);
    }
    else {
      FUN_7103778630(0,*(long *)(lVar16 + 0x10),0x710433a9c5);
      FUN_7103778630(0,*(long *)(lVar16 + 0xf0),0x710433a9c5);
      FUN_7103778630(0,*(long *)(lVar16 + 0x100),0x710433a9c5);
    }
  }
  lVar30 = *(long *)(*(long *)(lVar30 + 0xe8) + 0x80);
  lVar16 = *(long *)(lVar30 + 0x250);
  if (ppppppppplVar25 < (long *********)(*(long *)(lVar30 + 600) - lVar16 >> 4)) {
    *(undefined1 *)(*(long *)(lVar16 + (long)ppppppppplVar25 * 0x10 + 8) + 0x6ba) = 0;
    return;
  }
LAB_7101838b38:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

